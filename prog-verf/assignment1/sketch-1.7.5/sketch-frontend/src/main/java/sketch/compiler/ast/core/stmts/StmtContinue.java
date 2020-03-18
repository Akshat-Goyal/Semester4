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

/**
 * Not supported yet. A simple continue statement. This statement jumps to evaluating the
 * condition if the innermost loop is a (do/)while loop, or to the increment statement if
 * the innermost loop is a for loop.
 * 
 * @deprecated
 * @author David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class StmtContinue extends Statement
{
    /** Creates a new continue statement. */
    public StmtContinue(FENode context)
    {
        super(context);
    }

    /** Creates a new continue statement.
     * @deprecated
     */
    public StmtContinue(FEContext context)
    {
        super(context);
    }

    /** Accept a front-end visitor. */
    public Object accept(FEVisitor v)
    {
        return v.visitStmtContinue(this);
    }

    public boolean equals(Object other)
    {
        // No state; any two continue statements are equal.
        if (other instanceof StmtContinue)
            return true;
        return false;
    }

    public int hashCode()
    {
        // No state, so...
        return 17;
    }

    public String toString()
    {
        return "continue";
    }
}

