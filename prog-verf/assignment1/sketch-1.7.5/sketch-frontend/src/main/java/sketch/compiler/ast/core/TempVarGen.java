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

package sketch.compiler.ast.core;
import sketch.compiler.ast.core.exprs.ExprVar;

/**
 * Generate a sequence of numbered temporaary variable. These will have names like __sa1,
 * __sa2, .... These will primarily be used for making unique names for temporary
 * variables. The object also carries around a <i>prefix</i>, with default value
 * <tt>a</tt>, which is inserted just before the number. This may be manually specified,
 * or gleaned from a program representation.
 * 
 * @author David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class TempVarGen
{
    private int seq;
    private String prefix;

    /**
     * Create a new temporary variable generator, which will generate
     * variables starting with 0 and use a prefix of "a".
     */
    public TempVarGen()
    {
        this("a");
    }

    /**
     * Create a new temporary variable generator, which will generate
     * variables starting with 0 but use a user-specified prefix.
     *
     * @param prefix  prefix string to use
     */
    public TempVarGen(String prefix)
    {
        this.seq = 0;
        this.prefix = prefix;
    }

    /**
     * Create a new temporary variable generator, guessing the prefix
     * from the program code.  This is useful when the output of
     * the frontend is converted back to StreamIt, where we need
     * to avoid variable name conflicts.
     *
     * @param prog  program object to scan for prefixed variables
     */
    public TempVarGen(Program prog)
    {
        this.seq = 0;
        this.prefix = "a";

        // Find all local-variable expressions in the program.  If
        // they start with __s, the next character is the old prefix.
        // Also, find top-level streamspecs, and if their names start
        // with AnonFilter_, the next character is the old prefix.
        // Use the lowest character higher than any of the old
        // prefixes.
        prog.accept(new FEReplacer() {
                public Object visitExprVar(ExprVar expr)
                {
                    String name = expr.getName();
                    if (name.startsWith("__s") && name.length() > 3)
                        checkPrefix(name.charAt(3));
                    return super.visitExprVar(expr);
                }

                public Object visitPackage(Package ss)
                {
                    String name = ss.getName();
                    if (name != null &&
                        name.startsWith("AnonFilter_") &&
                        name.length() > 11)
                        checkPrefix(name.charAt(11));
                    return super.visitPackage(ss);
                }
            });
    }

    private void checkPrefix(char c)
    {
        if (Character.isLetter(c))
        {
            char op = prefix.charAt(0);
            if (c >= op)
            {
                char np = (char)((int)c + 1);
                prefix = String.valueOf(np);
            }
        }
    }

    /**
     * Get the next variable number, and increment the counter.
     *
     * @return the number of the next variable
     */
    public int nextVarNum()
    {
    	return seq++;
    }

    /**
     * Get the name of a variable for a particular number.
     *
     * @param num  variable number to get a name for
     * @return     name of the variable
     */
    public String varName(int num)
    {
        return "__s" + prefix + num;
    }

    /**
     * Get the prefix for this variable generator.
     *
     * @return  string prefix for the variable generator
     */
    public String getPrefix()
    {
        return prefix;
    }

    /**
     * Get the name of the next variable, and increment the counter.
     *
     * @return the name of the next variable
     */
    public String nextVar()
    {
        return varName(nextVarNum());
    }

    /**
     * Return a unique variable name with a given prefix.
     *
     * @param startingWith	The variable's prefix
     * @return				A unique variable name
     */
    public String nextVar (String startingWith) {
        if(startingWith != null){
            return startingWith + "_s" + nextVarNum();
        }else{
            return nextVar();
        }        
    }
}

