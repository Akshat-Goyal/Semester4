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
import sketch.compiler.ast.core.FENode;
import sketch.compiler.ast.core.FEVisitor;
import sketch.compiler.ast.core.exprs.Expression;

/**
 * A statement containing only an expression.  This is generally
 * evaluated only for its side effects; a typical such statement
 * might be 'x++;' or 'pop();'.
 *
 * @author  David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class StmtExpr extends Statement
{
    private Expression expr;

    public StmtExpr(FENode context, Expression expr)
    {
        super(context);
        this.expr = expr;
    }

    /**
     * Create an expression statement corresponding to a single expression,
     * using that expression's context as our own.
     */
    public StmtExpr(Expression expr)
    {
        this(expr, expr);
    }

    public Expression getExpression()
    {
        return expr;
    }

    public Object accept(FEVisitor v)
    {
        return v.visitStmtExpr(this);
    }

    public boolean equals(Object other)
    {
        if (!(other instanceof StmtExpr))
            return false;
        return expr.equals(((StmtExpr)other).getExpression());
    }

    public int hashCode()
    {
        return expr.hashCode();
    }

    public String toString()
    {
        return expr.toString();
    }
}

