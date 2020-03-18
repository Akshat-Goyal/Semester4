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

package sketch.compiler.ast.core.stmts;
import sketch.compiler.ast.core.FEContext;
import sketch.compiler.ast.core.FENode;
import sketch.compiler.ast.core.FEVisitor;
import sketch.compiler.ast.core.exprs.ExprBinary;
import sketch.compiler.ast.core.exprs.ExprConstInt;
import sketch.compiler.ast.core.exprs.ExprUnary;
import sketch.compiler.ast.core.exprs.ExprVar;
import sketch.compiler.ast.core.exprs.Expression;
import sketch.compiler.ast.core.typs.TypePrimitive;
import sketch.compiler.stencilSK.VarReplacer;

/**
 * A C-style for loop.  The loop contains an initialization statement,
 * a loop condition, and an increment statement.  On entry, the
 * initialization statement is executed, and then the condition is
 * evaluated.  If the condition is true, the body is executed,
 * followed by the increment statement.  This loops until the
 * condition returns false.  Continue statements cause control flow to
 * go to the increment statement.
 *
 * @author  David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class StmtFor extends Statement
{
    private Expression cond;
    private Statement init, incr, body;
    /**
     * A canonical for loop is one of the form for(int idx = a; idx < b; ++idx){ body; }
     * where body does not modify idx. Canonical loops can be safely translated into:
     * for(int t = 0; t<UNROLL_AMNT; ++t){ idx = a + t; if(idx < b){ body; } }
     */
    private boolean isCanonical;

    /** Creates a new for loop. */
    public StmtFor(FENode context, Statement init, Expression cond,
 Statement incr,
            Statement body, boolean isCanonical)
    {
        super(context);
        this.init = init;
        this.cond = cond;
        this.incr = incr;
        this.body = body;
        this.isCanonical = isCanonical;
    }

    /** Creates a new for loop.
     * @deprecated
     */
    public StmtFor(FEContext context, Statement init, Expression cond,
 Statement incr,
            Statement body, boolean isCanonical)
    {
        super(context);
        this.init = init;
        this.cond = cond;
        this.incr = incr;
        this.body = body;
        this.isCanonical = isCanonical;
    }

    /**
     * Creates a canonical for loop of the form for(int iterName=0; iterName &lt;
     * upperBound; ++iterName){body}
     */
    public StmtFor(String iterName, Expression upperBound, Statement body)
    {
        super(upperBound);
        this.init = new StmtVarDecl(upperBound, TypePrimitive.inttype, iterName, ExprConstInt.zero);
        Expression iterVar = new ExprVar(upperBound, iterName);
        this.cond = new ExprBinary(upperBound, ExprBinary.BINOP_LT, iterVar, upperBound);
        this.incr = new StmtAssign(iterVar,  new ExprBinary(upperBound, ExprBinary.BINOP_ADD, iterVar, ExprConstInt.one));
        this.body = body;
        isCanonical = true;
    }

    @Override
    public int size() {
        int sz_init = init == null ? 0 : init.size();
        int sz_incr = incr == null ? 0 : incr.size();
        int sz_body = body == null ? 0 : body.size();
        return sz_init + sz_incr + sz_body;
    }

    /** Return the initialization statement of this. */
    public Statement getInit()
    {
        return init;
    }

    public String getIndVar() {
        if (init instanceof StmtVarDecl) {
            StmtVarDecl svd = (StmtVarDecl) init;
            return svd.getName(0);
        }
        if (init instanceof StmtAssign) {
            StmtAssign sa = (StmtAssign) init;
            return sa.getLHS().toString();
        }
        return null;
    }

    public Expression getICond() {
        String nm = null;
        Expression start = null;
        if (init instanceof StmtVarDecl) {
            StmtVarDecl svd = (StmtVarDecl) init;
            nm = svd.getName(0);
            start = svd.getInit(0);
        }
        if (init instanceof StmtAssign) {
            StmtAssign sa = (StmtAssign) init;
            assert sa.getLHS() instanceof ExprVar;
            nm = sa.getLHS().toString();
            start = sa.getRHS();
        }
        VarReplacer vr = new VarReplacer(nm, start);
        return (Expression) cond.accept(vr);
    }

    public Expression getIncrVal() {
        if (incr instanceof StmtExpr) {
            StmtExpr se = (StmtExpr) incr;
            if (se.getExpression() instanceof ExprUnary) {
                ExprUnary eu = (ExprUnary) se.getExpression();
                int op = eu.getOp();
                if (op == ExprUnary.UNOP_POSTINC || op == ExprUnary.UNOP_PREINC) {
                    return ExprConstInt.one;
                }
                if (op == ExprUnary.UNOP_POSTDEC || op == ExprUnary.UNOP_PREDEC) {
                    return ExprConstInt.minusone;
                }
            }
        }
        if (incr instanceof StmtAssign) {
            StmtAssign sa = (StmtAssign) incr;
            if (sa.getOp() == 0) {
                if (sa.getRHS() instanceof ExprBinary) {
                    ExprBinary eb = (ExprBinary) sa.getRHS();
                    if (eb.getLeft().equals(sa.getLHS())) {
                        return eb.getRight();
                    }
                    if (eb.getRight().equals(sa.getLHS())) {
                        return eb.getLeft();
                    }
                }
            }
            if (sa.getOp() == ExprBinary.BINOP_ADD) {
                return sa.getRHS();
            }
            if (sa.getOp() == ExprBinary.BINOP_SUB) {
                return new ExprUnary("-", sa.getRHS());
            }
        }
        return null;
    }

    public Expression getRangeMin() {
        if (init instanceof StmtVarDecl) {
            StmtVarDecl svd = (StmtVarDecl) init;
            return svd.getInit(0);
        }
        if (init instanceof StmtAssign) {
            StmtAssign sa = (StmtAssign) init;
            return sa.getRHS();
        }
        return null;
    }

    public Expression getRangeMax() {
        if (!(cond instanceof ExprBinary)) {
            return null;
        }
        ExprBinary eb = (ExprBinary) cond;
        if (eb.getOp() == ExprBinary.BINOP_LE) {
            return eb.getRight();
        }
        if (eb.getOp() == ExprBinary.BINOP_LT) {
            return new ExprBinary(eb.getRight(), "-", ExprConstInt.one);
        }
        return null;
    }

    /** Return the loop condition of this. */
    public Expression getCond()
    {
        return cond;
    }

    /** Return the increment statement of this. */
    public Statement getIncr()
    {
        return incr;
    }

    public boolean isCanonical() {
        // return false;
        return isCanonical;
    }

    public void makeCanonical() {
        isCanonical = true;
    }

    /** Return the loop body of this. */
    public Statement getBody()
    {
        return body;
    }

    /** Accept a front-end visitor. */
    public Object accept(FEVisitor v)
    {
        return v.visitStmtFor(this);
    }

    public String toString(){
    		String result = "for(...){\n";
    		result += this.body + "}\n";
    		return result;
    }
}

