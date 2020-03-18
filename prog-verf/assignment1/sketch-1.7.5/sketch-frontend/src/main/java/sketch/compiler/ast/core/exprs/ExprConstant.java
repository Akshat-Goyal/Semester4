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
import sketch.compiler.ast.core.DummyFENode;
import sketch.compiler.ast.core.FEContext;
import sketch.compiler.ast.core.FENode;

/**
 * A constant-valued expression.  This class only serves to hold
 * static methods for creating constants.
 *
 * @author  David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
abstract public class ExprConstant extends Expression
{
    // Go Java go!  If we don't have this, the compiler complains:
    public ExprConstant(FENode context)
    {
        super(context);
    }

    /**
     * @deprecated
     */
	public ExprConstant(FEContext context)
    {
        super(context);
    }

    public boolean isConstant () {
    	return true;
    }

    /**
     * Create a new constant-valued expression corresponding to a
     * String value.  val must be a valid real number, according to
     * java.lang.Double.valueOf(), excepting that it may end in "i" to
     * indicate an imaginary value.  This attempts to create an
     * integer if possible, and a real-valued expression if possible;
     * however, it may also create an ExprComplex with a zero (null)
     * real part.  Eexpressions like "3+4i" need to be parsed into
     * separate expressions.
     *
     * @param context  file and line number for the string
     * @param val      string containing the constant to create
     * @return         an expression corresponding to the string value
     */
    public static Expression createConstant(FENode context, String val)
    {
        // Maybe it's integral.
        try {
            return new ExprConstInt(context, val);
        }
        catch(NumberFormatException e)
        {
            // No; create a float (and lose if this is wrong too).
            return new ExprConstFloat(context, val);
        }
    }

    /**
     * Create a new constant-valued expression corresponding to a
     * String value.  val must be a valid real number, according to
     * java.lang.Double.valueOf(), excepting that it may end in "i" to
     * indicate an imaginary value.  This attempts to create an
     * integer if possible, and a real-valued expression if possible;
     * however, it may also create an ExprComplex with a zero (null)
     * real part.  Eexpressions like "3+4i" need to be parsed into
     * separate expressions.
     *
     * @param context  file and line number for the string
     * @param val      string containing the constant to create
     * @return         an expression corresponding to the string value
     * @deprecated
     */
    public static Expression createConstant(FEContext context, String val)
    {
    	return createConstant (new DummyFENode (context), val);
    }
}
