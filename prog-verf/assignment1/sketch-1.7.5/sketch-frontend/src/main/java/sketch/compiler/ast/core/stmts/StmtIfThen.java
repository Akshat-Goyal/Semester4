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
import sketch.compiler.ast.core.exprs.Expression;

/**
 * A standard conditional statement.  This has a conditional expression
 * and two optional statements.  If the condition is true, the first
 * statement (the consequent) is executed; otherwise, the second statement
 * (the alternative) is executed.
 *
 * @author  David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class StmtIfThen extends Statement
{
    private Expression cond;
    private Statement cons, alt;
    private boolean isSingleFunCall = false;
    private boolean isSingleVarAssign = false;
    /** Create a new conditional statement, with the specified
     * condition, consequent, and alternative.  The two statements
     * may be null if omitted. */
    public StmtIfThen(FENode context, Expression cond,
                      Statement cons, Statement alt)
    {
        super(context);
        this.cond = cond;
        this.cons = cons;
        this.alt = alt;
    }

    /** Create a new conditional statement, with the specified
     * condition, consequent, and alternative.  The two statements
     * may be null if omitted.
     * @deprecated
     */
    public StmtIfThen(FEContext context, Expression cond,
                      Statement cons, Statement alt)
    {
        super(context);
        this.cond = cond;
        this.cons = cons;
        this.alt = alt;
    }

    @Override
    public int size() {
        int sz_cons = cons == null ? 0 : cons.size();
        int sz_alt = alt == null ? 0 : alt.size();
        return sz_cons + sz_alt;
    }

    /** Returns the condition of this. */
    public Expression getCond()
    {
        return cond;
    }

    /** Returns the consequent statement of this, which is executed if
     * the condition is true. */
    public Statement getCons()
    {
        return cons;
    }

    /** Return the alternative statement of this, which is executed if
     * the condition is false. */
    public Statement getAlt()
    {
        return alt;
    }

    /** Accept a front-end visitor. */
    public Object accept(FEVisitor v)
    {
        return v.visitStmtIfThen(this);
    }

    public boolean isSingleFunCall() {
        return isSingleFunCall;
    }

    public void singleFunCall() {
        isSingleFunCall = true;
    }

    public boolean isSingleVarAssign() {
        return isSingleVarAssign;
    }

    public void singleVarAssign() {
        isSingleVarAssign = true;
    }
    public String toString(){
    	String result = "if(" + this.cond + "){\n";
    	result += this.cons;
    	result += "}";
    	if(this.alt != null){
    	result += "else{\n";
    	result += this.alt + "}\n";
    	}else{
    		result += "\n";
    	}
    	return result;
    }

}
