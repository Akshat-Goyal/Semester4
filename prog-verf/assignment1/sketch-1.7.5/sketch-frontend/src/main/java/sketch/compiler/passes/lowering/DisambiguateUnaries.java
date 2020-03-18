/*
 * Copyright 2003 by the Massachusetts Institute of Technology.
 *
 * Permission to use, copy, modify, and distribute this
 * software and its documentation for any purpose and without
 * fee is hereby granted, provided that the above copyright
 * notice appear in all copies and that both that copyright
 * notice and this permission notice appear in supporting
 * documentation, and that the name of M.I.T. not be used in
 * advertising or publicity pertaining to distribution of the
 * software without specific, written prior permission.
 * M.I.T. makes no representations about the suitability of
 * this software for any purpose.  It is provided "as is"
 * without express or implied warranty.
 */

package sketch.compiler.passes.lowering;
import sketch.compiler.ast.core.FENode;
import sketch.compiler.ast.core.TempVarGen;
import sketch.compiler.ast.core.exprs.ExprBinary;
import sketch.compiler.ast.core.exprs.ExprConstInt;
import sketch.compiler.ast.core.exprs.ExprUnary;
import sketch.compiler.ast.core.exprs.ExprVar;
import sketch.compiler.ast.core.exprs.Expression;
import sketch.compiler.ast.core.stmts.Statement;
import sketch.compiler.ast.core.stmts.StmtAssign;
import sketch.compiler.ast.core.stmts.StmtExpr;
import sketch.compiler.ast.core.stmts.StmtFor;
import sketch.compiler.ast.core.stmts.StmtIfThen;
import sketch.compiler.ast.core.stmts.StmtVarDecl;
import sketch.compiler.ast.core.stmts.StmtWhile;
import sketch.compiler.ast.core.typs.Type;
import sketch.util.exceptions.ExceptionAtNode;

/**
 * Give a rigid ordering to operations such as ++, --. Do this by a post-order depth-first
 * traversal of expression trees; if we see a unary increment or decrement operation, move
 * it into a separate statement and replace it with a temporary variable.
 * 
 * @author David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class DisambiguateUnaries extends SymbolTableVisitor
{
    private TempVarGen varGen;

    public DisambiguateUnaries(TempVarGen varGen)
    {
        super(null);
        this.varGen = varGen;
    }

    protected void doStatement(Statement stmt)
 {
        Statement result = (Statement)stmt.accept(this);
        if (result != null)
            addStatement(result);
    }

    public Object visitExprUnary(ExprUnary expr)
    {
        // Does this modify its argument?
        int op = expr.getOp();
        if (op == ExprUnary.UNOP_PREINC || op == ExprUnary.UNOP_PREDEC ||
            op == ExprUnary.UNOP_POSTINC || op == ExprUnary.UNOP_POSTDEC)
        {
            // Insert a statement: a = a + 1.
            // Assume that the child expression of expr is a valid
            // left-hand side; it can usefully be a field, array
            // reference, or local variable.
            FENode ctx = expr;
            Expression lhs = expr.getExpr();
            int bop = ExprBinary.BINOP_ADD;
            if (op == ExprUnary.UNOP_PREDEC || op == ExprUnary.UNOP_POSTDEC)
                bop = ExprBinary.BINOP_SUB;
            Expression rhs =
                new ExprBinary(ctx, bop, lhs, new ExprConstInt(ctx, 1));
            if (op == ExprUnary.UNOP_PREINC || op == ExprUnary.UNOP_PREDEC) {
                Statement assign = new StmtAssign(ctx, lhs, rhs, 0);
                addStatement(assign);
            } else {
                String tvar = varGen.nextVar("uo");
                Statement tdecl = new StmtVarDecl(expr, getType(lhs), tvar, lhs);
                addStatement(tdecl);
                Statement assign = new StmtAssign(ctx, lhs, rhs, 0);
                addStatement(assign);
                lhs = new ExprVar(expr, tvar);
            }
            return lhs;
        }
        return expr;
    }

    /**
     * Helper function that visits an arbitrary expression,
     * creates a helper variable containing its value, and returning
     * the helper.
     */
    private Object visitPeekOrPop(Expression expr)
    {
        // Create a temporary variable...
        FENode ctx = expr;
        String name = varGen.nextVar();
        Type type = getType(expr);
        addStatement(new StmtVarDecl(ctx, type, name, null));
        // Generate an assignment to that..
        Expression var = new ExprVar(ctx, name);
        addStatement(new StmtAssign(ctx, var, expr, 0));
        // ...and return the variable.
        return var;
    }

    public Object visitStmtFor(StmtFor stmt)
    {
        // C-style for loops are a *big pain*: if nothing else, the
        // possible presence of a continue statement means that the
        // increment statement can't be moved inside the loop.
        // Don't visit the condition or increment statement for
        // this reason.  Do visit the init statement (any code it
        // adds gets put before the loop, which is fine) and the
        // body (which should always be a StmtBlock).

    	//Armando: as a cheap hack, I will pattern match the increment
    	//so that x++ or ++x becomes -> x = x + 1; and x-- or --x becomes x = x - 1;

    	Statement inc = stmt.getIncr();
    	if(inc instanceof StmtExpr){
    		Expression incre = ((StmtExpr) inc).getExpression();
    		if(incre instanceof ExprUnary){
    			ExprUnary unop = (ExprUnary) incre;
    			if(unop.getOp() == ExprUnary.UNOP_POSTINC ||
    					unop.getOp() == ExprUnary.UNOP_PREINC){
    				inc = new StmtAssign(unop.getExpr(), new ExprBinary(unop.getExpr(), "+", ExprConstInt.one));
    			}
    			if(unop.getOp() == ExprUnary.UNOP_POSTDEC ||
    					unop.getOp() == ExprUnary.UNOP_PREDEC){
    				inc = new StmtAssign(unop.getExpr(), new ExprBinary(unop.getExpr(), "-", ExprConstInt.one));
    			}
    		}
    	}

        if (inc instanceof StmtAssign) {
            // Technically this is not really about unary operators, but we use this
            // opportunity to get rid of += in for loops to make
            // later passes simpler.
            StmtAssign sa = (StmtAssign) inc;
            if (sa.getOp() != 0) {
                inc =
                        new StmtAssign(sa.getLHS(), new ExprBinary(sa.getOp(),
                                sa.getLHS(), sa.getRHS()));
            }
        }

        Statement newBody = (Statement)stmt.getBody().accept(this);

        Statement newInit = (Statement)stmt.getInit().accept(this);
        if (newInit == stmt.getInit() && newBody == stmt.getBody() && inc == stmt.getIncr())
            return stmt;
        return new StmtFor(stmt, newInit, stmt.getCond(),
 inc, newBody,
                stmt.isCanonical());
    }

    public Object visitStmtIfThen(StmtIfThen stmt)
    {
        // Need to reset successors list in between visiting children.
        Statement newCons = (Statement)stmt.getCons().accept(this);

        Statement newAlt = stmt.getAlt();
        if (newAlt != null) newAlt = (Statement)newAlt.accept(this);

        Expression newCond = (Expression)stmt.getCond().accept(this);
        if (newCons == stmt.getCons() &&
            newAlt == stmt.getAlt() &&
            newCond == stmt.getCond())
            return stmt;
        return new StmtIfThen(stmt, newCond, newCons, newAlt);
    }

    public Object visitStmtAssign(StmtAssign stmt) {
        Expression newLHS = doExpression(stmt.getLHS());
        Expression newRHS = doExpression(stmt.getRHS());
        int op = stmt.getOp();
        switch (op) {
            case 0:
                break;
            case ExprBinary.BINOP_ADD:
            case ExprBinary.BINOP_SUB:
            case ExprBinary.BINOP_MUL:
            case ExprBinary.BINOP_DIV:
                newRHS = new ExprBinary(stmt, op, newLHS, newRHS);
                break;
            default:
                throw new ExceptionAtNode("Bad operator", stmt);
        }
        op = 0;
        if (newLHS == stmt.getLHS() && newRHS == stmt.getRHS())
            return stmt;
        return new StmtAssign(stmt, newLHS, newRHS, op);
    }

    public Object visitStmtWhile(StmtWhile stmt)
    {
        // Similar problem: if the condition results in inserting
        // statements, they'd need to go both before the loop and
        // at the end of the loop body, and continue statements
        // would go in the wrong place.
        Statement newBody = (Statement)stmt.getBody().accept(this);

        if (newBody == stmt.getBody())
            return stmt;
        return new StmtWhile(stmt, stmt.getCond(), newBody);
    }
}
