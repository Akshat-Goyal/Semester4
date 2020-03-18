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
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.Vector;

import sketch.compiler.ast.core.FEContext;
import sketch.compiler.ast.core.FENode;
import sketch.compiler.ast.core.FEVisitor;
import sketch.compiler.ast.core.exprs.ExprVar;
import sketch.compiler.ast.core.exprs.Expression;
import sketch.compiler.ast.core.stmts.StmtVarDecl.VarDeclEntry;
import sketch.compiler.ast.core.typs.Type;

import static sketch.util.DebugOut.assertFalse;

import static sketch.util.Misc.nonnull;

/**
 * A variable-declaration statement.  This statement declares a
 * sequence of variables, each of which has a name, a type, and an
 * optional initialization value.
 *
 * @author  David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class StmtVarDecl extends Statement implements Iterable<VarDeclEntry>
{
    private List<Type> types;
    private List<String> names;
    private List<Expression> inits;

    /**
     * Create a new variable declaration with corresponding lists of
     * types, names, and initialization values.  The three lists
     * passed in are duplicated, and may be mutated after calling this
     * constructor without changing the value of this object.  The
     * types and names must all be non-null; if a particular variable
     * is uninitialized, the corresponding initializer value may be
     * null.
     *
     * @param  context  Context indicating what line and file this
     *                  statement is created at
     * @param  types    List of <code>Type</code> of the variables
     *                  declared here
     * @param  names    List of <code>String</code> of the names of the
     *                  variables declared here
     * @param  inits    List of <code>Expression</code> (or
     *                  <code>null</code>) containing initializers of
     *                  the variables declared here
     */
    public StmtVarDecl(FENode context, List<? extends Type> types, List<String> names,
                       List<? extends Expression> inits)
    {
        super(context);
        // TODO: check for validity, including types of object
        // in the lists and that all three are the same length.
        this.types = new java.util.ArrayList<Type>(types);
        this.names = new java.util.ArrayList<String>(names);
        this.inits = new java.util.ArrayList<Expression>(inits);
    }

    /**
     * Create a new variable declaration with corresponding lists of
     * types, names, and initialization values.  The three lists
     * passed in are duplicated, and may be mutated after calling this
     * constructor without changing the value of this object.  The
     * types and names must all be non-null; if a particular variable
     * is uninitialized, the corresponding initializer value may be
     * null.
     *
     * @param  context  Context indicating what line and file this
     *                  statement is created at
     * @param  types    List of <code>Type</code> of the variables
     *                  declared here
     * @param  names    List of <code>String</code> of the names of the
     *                  variables declared here
     * @param  inits    List of <code>Expression</code> (or
     *                  <code>null</code>) containing initializers of
     *                  the variables declared here
     * @deprecated
     */
    public StmtVarDecl(FEContext context, List<? extends Type> types, List<String> names,
                       List<? extends Expression> inits)
    {
        super(context);
        // TODO: check for validity, including types of object
        // in the lists and that all three are the same length.
        this.types = new java.util.ArrayList<Type>(types);
        this.names = new java.util.ArrayList<String>(names);
        this.inits = new java.util.ArrayList<Expression>(inits);
    }

    /**
     * Create a new variable declaration with exactly one variable
     * in it.  If the variable is uninitialized, the initializer may
     * be <code>null</code>.
     *
     * @param  context  Context indicating what line and file this
     *                  statement is created at
     * @param  type     Type of the variable
     * @param  name     Name of the variable
     * @param  init     Expression initializing the variable, or
     *                  <code>null</code> if the variable is uninitialized
     */
    public StmtVarDecl(FENode context, Type type, String name,
                       Expression init)
    {
        this(context, Collections.singletonList(nonnull(type,
                "null type for StmtVarDecl ctor")), Collections.singletonList(name),
                Collections.singletonList(init));
    }

    /**
     * Create a new variable declaration with exactly one variable
     * in it.  If the variable is uninitialized, the initializer may
     * be <code>null</code>.
     *
     * @param  context  Context indicating what line and file this
     *                  statement is created at
     * @param  type     Type of the variable
     * @param  name     Name of the variable
     * @param  init     Expression initializing the variable, or
     *                  <code>null</code> if the variable is uninitialized
     * @deprecated
     */
    public StmtVarDecl(FEContext context, Type type, String name,
                       Expression init)
    {
        this(context,
             Collections.singletonList(type),
             Collections.singletonList(name),
             Collections.singletonList(init));
    }

    public StmtVarDecl(FENode node, Vector<VarDeclEntry> next) {
        super(node);
        this.types = new Vector<Type>(next.size());
        this.names = new Vector<String>(next.size());
        this.inits = new Vector<Expression>(next.size());

        for (VarDeclEntry e : next) {
            this.types.add(e.getType());
            this.names.add(e.getName());
            this.inits.add(e.getInit());
        }
    }

    /**
     * Get the type of the nth variable declared by this.
     *
     * @param  n  Number of variable to retrieve (zero-indexed).
     * @return    Type of the nth variable.
     */
    public Type getType(int n)
    {
        return (Type)types.get(n);
    }

    /**
     * Set the nth type of this declaration to 't'.
     *
     * @param n Index of variable whose type will change
     * @param t The type to change it to.
     * @return
     */
    public void setType (int n, Type t) {
    	types.set (n, t);
    }

    /**
     * Get a list of the types of all of the variables
     * declared by this.
     *
     * @return  list of <code>Type</code> of the
     *          variables in this
     */
    public List<Type> getTypes()
    {
        return types;
    }

    /**
     * Get the name of the nth variable declared by this.
     *
     * @param  n  Number of variable to retrieve (zero-indexed).
     * @return    Name of the nth variable.
     */
    public String getName(int n)
    {
        return (String)names.get(n);
    }

    /**
     * Get an immutable list of the names of all of the variables
     * declared by this.
     *
     * @return  Unmodifiable list of <code>String</code> of the
     *          names of the variables in this
     */
    public List<String> getNames()
    {
        return Collections.unmodifiableList(names);
    }

    /**
     * Get the initializer of the nth variable declared by this.
     *
     * @param  n  Number of variable to retrieve (zero-indexed).
     * @return    Expression initializing the nth variable, or
     *            <code>null</code> if the variable is
     *            uninitialized.
     */
    public Expression getInit(int n)
    {
        return (Expression)inits.get(n);
    }

    /**
     * Set the initializer of the nth variable.
     *
     * @param n     Which initializer to set
     * @param init  What to set it to
     */
    public void setInit (int n, Expression init) {
    	inits.set (n, init);
    }

    /**
     * Get an immutable list of the initializers of all of the
     * variables declared by this.  Members of the list may be
     * <code>null</code> if a particular variable is uninitialized.
     *
     * @return  Unmodifiable list of <code>Expression</code> (or
     *          <code>null</code>) of the initializers of the
     *          variables in this
     */
    public List<Expression> getInits()
    {
        return Collections.unmodifiableList(inits);
    }

    /**
     * Get the number of variables declared by this.  This value should
     * always be at least 1.
     *
     * @return  Number of variables declared
     */
    public int getNumVars()
    {
        // CLAIM: the three lists have the same length.
        return types.size();
    }

    /** Accept a front-end visitor. */
    public Object accept(FEVisitor v)
    {
        return v.visitStmtVarDecl(this);
    }

    public boolean equals(Object other)
    {
        if (!(other instanceof StmtVarDecl))
            return false;
        StmtVarDecl svd = (StmtVarDecl)other;
        if (svd.types.size() != types.size())
            return false;
        for (int i = 0; i < types.size(); i++)
        {
            if (!(types.get(i).equals(svd.types.get(i))))
                return false;
            if (!(names.get(i).equals(svd.names.get(i))))
                return false;
            if (inits.get(i) == null && svd.inits.get(i) != null)
                return false;
            if (inits.get(i) != null &&
                !(inits.get(i).equals(svd.inits.get(i))))
                return false;
        }
        return true;
    }

    public int hashCode()
    {
        // just use the first type and name.
        return types.get(0).hashCode() ^ names.get(0).hashCode();
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
                result.append(" = " + inits.get(i));
        }
        return result.toString();
    }

    public static abstract class VarDeclEntry {
        public abstract String getName();

        public abstract Type getType();

        public abstract Expression getInit();
        
        public ExprVar getVarRefToName(FENode ref) {
            return new ExprVar(ref, getName());
        }

        public VarDeclEntry nextWithType(Type t) {
            return new VarDeclEntryWithNames(getName(), t, getInit());
        }

        public VarDeclEntry nextWithInit(Expression init) {
            return new VarDeclEntryWithNames(getName(), getType(), init);
        }
    }

    public class VarDeclEntryInst extends VarDeclEntry {
        protected final int idx;

        public VarDeclEntryInst(int idx) {
            this.idx = idx;
            if (idx >= getNumVars()) {
                throw new NoSuchElementException();
            }
        }

        public String getName() {
            return StmtVarDecl.this.getName(idx);
        }

        public Type getType() {
            return StmtVarDecl.this.getType(idx);
        }

        public Expression getInit() {
            return StmtVarDecl.this.getInit(idx);
        }
    }

    public static class VarDeclEntryWithNames extends VarDeclEntry {
        public final String name;
        public final Type type;
        public final Expression init;

        public VarDeclEntryWithNames(String name, Type type, Expression init) {
            this.name = name;
            this.type = type;
            this.init = init;
        }

        public String getName() {
            return this.name;
        }

        public Type getType() {
            return this.type;
        }

        public Expression getInit() {
            return this.init;
        }
   }

    public class VarDeclEntryIterator implements Iterator<VarDeclEntry> {
        int idx = 0;

        public boolean hasNext() {
            return idx < getNumVars();
        }

        public VarDeclEntry next() {
            final VarDeclEntry vde = new VarDeclEntryInst(idx);
            idx += 1;
            return vde;
        }

        public void remove() {
            assertFalse();
        }
    }

    public Iterator<VarDeclEntry> iterator() {
        return new VarDeclEntryIterator();
    }
}
