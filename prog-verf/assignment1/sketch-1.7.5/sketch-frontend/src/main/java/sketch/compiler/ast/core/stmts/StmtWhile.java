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
 * A standard while loop.  The loop has a condition and a loop body.
 * On entry, the condition is evaluated; if it is true, the body is
 * executed, and the condition evaluated again.  This repeats until
 * the condition is false.
 *
 * @author  David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class StmtWhile extends Statement
{
    Expression cond;
    Statement body;

    /** Creates a new while loop. */
    public StmtWhile(FENode context, Expression cond, Statement body)
    {
        super(context);
        this.cond = cond;
        this.body = body;
    }

    /** Creates a new while loop.
     * @deprecated
     */
    public StmtWhile(FEContext context, Expression cond, Statement body)
    {
        super(context);
        this.cond = cond;
        this.body = body;
    }

    @Override
    public int size() {
        return body == null ? 0 : body.size();
    }

    /** Returns the loop condition. */
    public Expression getCond()
    {
        return cond;
    }

    /** Returns the loop body. */
    public Statement getBody()
    {
        return body;
    }

    /** Accepts a front-end visitor. */
    public Object accept(FEVisitor v)
    {
        return v.visitStmtWhile(this);
    }
    
    public String toString(){
    	return "while(" + getCond() + "){\n" + getBody() +  "\n}";
    }
}
