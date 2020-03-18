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

package sketch.compiler.ast.core.exprs;
import sketch.compiler.ast.core.FEContext;
import sketch.compiler.ast.core.FENode;
import sketch.compiler.ast.core.FEVisitor;

/**
 * A unary expression.  This is a child expression with a modifier;
 * it could be "!a" or "-b" or "c++".
 *
 * @author  David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class ExprUnary extends Expression
{
    // Operators:
	/**	negation (!x) */
    public static final int UNOP_NOT = 1;
	/**	bitwise negation (~x) */
    public static final int UNOP_BNOT = 2;
	/**	arithmetic negation (-x) */
    public static final int UNOP_NEG = 3;
	/**	++x */
    public static final int UNOP_PREINC = 4;
	/**	x++ */
    public static final int UNOP_POSTINC = 5;
	/**	--x */
    public static final int UNOP_PREDEC = 6;
	/**	x-- */
    public static final int UNOP_POSTDEC = 7;

    private int op;
    private Expression expr;

    public Integer getIValue(){
    	Integer iVal = expr.getIValue();
    	if(iVal != null){
    		int v = iVal.intValue();
    		switch(op){
    		case UNOP_NOT: return new Integer(1-v);
    		case UNOP_BNOT: return new Integer(~v);
    		case UNOP_NEG: return new Integer(-v);
    		case UNOP_PREINC:
    		case UNOP_POSTINC:
    		case UNOP_PREDEC:
    		case UNOP_POSTDEC:
    			return null;
    		}
    	}
    	return null;

    }

    /** Creates a new ExprUnary applying the specified operator to the
     * specified expression. */
    public ExprUnary(FENode context, int op, Expression expr)
    {
        super(context);
        this.op = op;
        this.expr = expr;
    }

    /** Creates a new ExprUnary applying the specified operator to the
     * specified expression.
     * @deprecated
     */
    public ExprUnary(FEContext context, int op, Expression expr)
    {
        super(context);
        this.op = op;
        this.expr = expr;
    }

    /** Creates a new ExprUnary applying the specified operator to the
     * specified expression. */
    public ExprUnary(String op, Expression expr)
    {
        super(expr);
        if(op.equals("!")){
        	this.op = ExprUnary.UNOP_NOT;
        }else if(op.equals("-")){
        	this.op = ExprUnary.UNOP_NEG;
        }else{
        	throw new RuntimeException("Constructor not supported for this type of operator: " + op);
        }
        this.expr = expr;
    }


    /** Returns the operator of this. */
    public int getOp() { return op; }

    public boolean isIncrOrDecr () {
        return op == UNOP_PREINC
        	|| op == UNOP_POSTINC
        	|| op == UNOP_PREDEC
        	|| op == UNOP_POSTDEC;
    }

    public boolean hasSideEffects () {
    	return isIncrOrDecr ();
    }

    /**
     * Populate PREPOSTOP with ["", OP_STR] for postfix operators, and
     * [OP_STR, ""] for prefix operators.
     *
     * @param inout prePostOp
     */
    public void fillPrePostOpStr (/* inout */String[] prePostOp) {
        prePostOp[0] = "";  prePostOp[1] = "";
        switch(op) {
        case UNOP_NOT: prePostOp[0] = "!"; break;
        case UNOP_BNOT: prePostOp[0] = "~"; break;
        case UNOP_NEG: prePostOp[0] = "-"; break;
        case UNOP_PREINC: prePostOp[0] = "++"; break;
        case UNOP_POSTINC: prePostOp[1] = "++"; break;
        case UNOP_PREDEC: prePostOp[0] = "--"; break;
        case UNOP_POSTDEC: prePostOp[1] = "--"; break;
        default: prePostOp[0] = "?(" + op + ")"; break;
        }
    }

    /** Returns the expression this modifies. */
    public Expression getExpr() { return expr; }

    /** Accept a front-end visitor. */
    public Object accept(FEVisitor v)
    {
        return v.visitExprUnary(this);
    }

    public boolean equals(Object other)
    {
        if (!(other instanceof ExprUnary))
            return false;
        ExprUnary eu = (ExprUnary)other;
        if (op != eu.getOp())
            return false;
        if (!(expr.equals(eu.getExpr())))
            return false;
        return true;
    }

    public int hashCode()
    {
        return new Integer(op).hashCode() ^ expr.hashCode();
    }

    public String toString()
    {
    	String[] prePostOp = new String[2];
    	fillPrePostOpStr (prePostOp);
        return prePostOp[0] + "(" + expr.toString() + ")" + prePostOp[1];
    }
}
