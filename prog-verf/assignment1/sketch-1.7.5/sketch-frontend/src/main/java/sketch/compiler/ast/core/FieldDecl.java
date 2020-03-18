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
import java.util.Collections;
import java.util.List;

import sketch.compiler.ast.core.exprs.Expression;
import sketch.compiler.ast.core.stmts.StmtVarDecl;
import sketch.compiler.ast.core.typs.Type;

/**
 * Defines a list of fields within a package; it's like a global variable, but it is
 * private to the package. This describes the declaration of a list of variables, each of
 * which has a type, a name, and an optional initialization value. This is explicitly not
 * a <code>Statement</code>; declarations that occur inside functions are local variable
 * declarations.
 * 
 * @see StmtVarDecl
 * @author David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class FieldDecl extends FENode
{
    private List<Type> types;
    private List<String> names;
    private List<Expression> inits;

    /**
     * Create a new field declaration with corresponding lists of
     * types, names, and initialization values.  The three lists
     * passed in are duplicated, and may be mutated after calling this
     * constructor without changing the value of this object.  The
     * types and names must all be non-null; if a particular field is
     * uninitialized, the corresponding initializer value may be null.
     *
     * @param  context  Context indicating what line and file this
     *                  field is created at
     * @param  types    List of <code>Type</code> of the fields
     *                  declared here
     * @param  names    List of <code>String</code> of the names of the
     *                  fields declared here
     * @param  inits    List of <code>Expression</code> (or
     *                  <code>null</code>) containing initializers of
     *                  the fields declared here
     */
    public FieldDecl(FENode node, List types, List names,
                     List inits)
    {
        super(node);
        // TODO: check for validity, including types of object
        // in the lists and that all three are the same length.
        this.types = new java.util.ArrayList(types);
        this.names = new java.util.ArrayList(names);
        this.inits = new java.util.ArrayList(inits);
    }

    /**
     * Create a new field declaration with corresponding lists of
     * types, names, and initialization values.  The three lists
     * passed in are duplicated, and may be mutated after calling this
     * constructor without changing the value of this object.  The
     * types and names must all be non-null; if a particular field is
     * uninitialized, the corresponding initializer value may be null.
     *
     * @param  context  Context indicating what line and file this
     *                  field is created at
     * @param  types    List of <code>Type</code> of the fields
     *                  declared here
     * @param  names    List of <code>String</code> of the names of the
     *                  fields declared here
     * @param  inits    List of <code>Expression</code> (or
     *                  <code>null</code>) containing initializers of
     *                  the fields declared here
     * @deprecated
     */
    public FieldDecl(FEContext context, List types, List names,
                     List inits)
    {
        super(context);
        // TODO: check for validity, including types of object
        // in the lists and that all three are the same length.
        this.types = new java.util.ArrayList(types);
        this.names = new java.util.ArrayList(names);
        this.inits = new java.util.ArrayList(inits);
    }

    /**
     * Create a new field declaration with exactly one variable in it.
     * If the field is uninitialized, the initializer may be
     * <code>null</code>.
     *
     * @param  context  Context indicating what line and file this
     *                  field is created at
     * @param  type     Type of the field
     * @param  name     Name of the field
     * @param  init     Expression initializing the field, or
     *                  <code>null</code> if the field is uninitialized
     */
    public FieldDecl(FENode node, Type type, String name,
                     Expression init)
    {
        this(node,
             Collections.singletonList(type),
             Collections.singletonList(name),
             Collections.singletonList(init));
    }

    /**
     * Get the type of the nth field declared by this.
     *
     * @param  n  Number of field to retrieve (zero-indexed)
     * @return    Type of the nth field
     */
    public Type getType(int n)
    {
        return (Type)types.get(n);
    }

    /**
     * Set the type of the nth field to t.
     *
     * @param n  Which field's type is changing.
     * @param t  The type to change it to.
     */
    public void setType (int n, Type t) {
    	types.set (n, t);
    }

    /**
     * Get an immutable list of the types of all of the fields
     * declared by this.
     *
     * @return  Unmodifiable list of <code>Type</code> of the
     *          fields in this
     */
    public List<Type> getTypes()
    {
        return Collections.unmodifiableList(types);
    }

    /**
     * Get the name of the nth field declared by this.
     *
     * @param  n  Number of field to retrieve (zero-indexed)
     * @return    Name of the nth field
     */
    public String getName(int n)
    {
        return (String)names.get(n);
    }

    /**
     * Get an immutable list of the names of all of the fields
     * declared by this.
     *
     * @return  Unmodifiable list of <code>String</code> of the
     *          names of the fields in this
     */
    public List<String> getNames()
    {
        return Collections.unmodifiableList(names);
    }

    /**
     * Get the initializer of the nth field declared by this.
     *
     * @param  n  Number of field to retrieve (zero-indexed)
     * @return    Expression initializing the nth field, or
     *            <code>null</code> if the field is
     *            uninitialized
     */
    public Expression getInit(int n)
    {
        return (Expression)inits.get(n);
    }

    /**
     * Get an immutable list of the initializers of all of the field
     * declared by this.  Members of the list may be <code>null</code>
     * if a particular field is uninitialized.
     *
     * @return  Unmodifiable list of <code>Expression</code> (or
     *          <code>null</code>) of the initializers of the
     *          fields in this
     */
    public List getInits()
    {
        return Collections.unmodifiableList(inits);
    }

    /**
     * Get the number of fields declared by this.  This value should
     * always be at least 1.
     *
     * @return  Number of fields declared
     */
    public int getNumFields()
    {
        // CLAIM: the three lists have the same length.
        return types.size();
    }

    /** Accept a front-end visitor. */
    public Object accept(FEVisitor v)
    {
        return v.visitFieldDecl(this);
    }

    public String toString()
    {
        StringBuffer result = new StringBuffer();
        for (int i = 0; i < types.size(); i++)
        {
            if (i != 0)
                result.append("; ");
            result.append(types.get(i) + " " + names.get(i));
            if (inits.get(i) != null)
                result.append("=" + inits.get(i));
        }
        return result.toString();
    }
}
