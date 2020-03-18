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
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;

import sketch.compiler.ast.core.exprs.ExprVar;
import sketch.compiler.ast.core.exprs.Expression;
import sketch.compiler.ast.core.stmts.StmtVarDecl;
import sketch.compiler.ast.core.typs.Type;
import sketch.util.exceptions.UnrecognizedVariableException;

/**
 * A symbol table for Sketch programs. This keeps a mapping from a string name to a
 * front-end type and an origin object, and has a parent symbol table (possibly null). A
 * name can be registered in the current symbol table. When resolving a name's type, the
 * name is searched for first in the current symbol table, and if not present than in the
 * parent symbol table.
 * <p>
 * Each symbol may be associated with an <i>origin</i>. This is the object that initially
 * defines the symbol, typically a <code>StmtVarDecl</code> for local variables or filter
 * fields or a <code>Parameter</code> for stream parameters. Each symbol also has an
 * integer kind to distinguish which of these it is.
 * 
 * @see sketch.compiler.passes.SymbolTableVisitor
 * @author David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class SymbolTable implements Cloneable
{

    public enum Finality {
        FINAL, FIRSTWRITE, NOTFINAL, UNKNOWN;
        public Finality join(Finality other) {
            if (this == other) {
                return this;
            }
            return NOTFINAL;
        }
    }

    /** Kind of a local variable. */
    public static final int KIND_LOCAL = 1;
    /** Kind of a filter field. */
    public static final int KIND_FIELD = 2;
    /** Kind of a stream parameter. */
    public static final int KIND_GLOBAL = 3;
    /** Kind of a function parameter. */
    public static final int KIND_FUNC_PARAM = 4;

    public static final int KIND_LOCAL_FUNCTION = 5;

    private Map<String, VarInfo> vars;
    private Map<String, Function> fns;
    private SymbolTable parent;
    private List includedFns;

    private boolean makeShared = false;

    public static class VarInfo
    {
        public VarInfo(Type type, Object origin, int kind)
        {
            this.type = type;
            this.origin = origin;
            this.kind = kind;
        }


        public Finality isFinal = Finality.UNKNOWN;
        public Type type;
        public Object origin;
        public int kind;

        FEContext getContext() {
            if (origin != null) {
                if (origin instanceof FENode) {
                    return ((FENode) origin).getCx();
                }
            }
            return null;
        }
    }

    /** Creates a new symbol table with the specified parent (possibly
     * null). */
    public SymbolTable(SymbolTable parent)
    {
        vars = new HashMap<String, VarInfo>();
        fns = new HashMap<String, Function>();
        this.parent = parent;
        this.includedFns = null;
    }


    /** Creates a new symbol table with the specified parent (possibly
     * null). */
    public SymbolTable(SymbolTable parent, boolean makeShared)
    {
        vars = new HashMap<String, VarInfo>();
        fns = new HashMap<String, Function>();
        this.parent = parent;
        this.includedFns = null;
        this.makeShared = makeShared;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("=== Vars\n");
        for (Entry<String, VarInfo> ent : vars.entrySet()) {
            sb.append("    ");
            sb.append(ent.getKey());
            sb.append(" : ");
            sb.append(ent.getValue().type.toString());
            sb.append("\n");
        }
        sb.append("=== Functions\n");
        for (Entry<String, Function> ent : fns.entrySet()) {
            sb.append("    ");
            sb.append(ent.getValue().toString());
            sb.append("\n");
        }
        if (parent != null) {
            sb.append(parent.toString());
        }
        return sb.toString();
    }



    /** Registers a new symbol in the symbol table, using default
     * origin and kind. */
    public void registerVar(String name, Type type)
    {
        registerVar(name, type, null, 0);
    }

    /**
     * Registers a new symbol in the symbol table.
     *
     * @param  name    name of the variable
     * @param  type    front-end type of the variable
     * @param  origin  statement or other object defining the variable
     * @param  kind    KIND_* constant describing the variable
     */
    public void registerVar(String name, Type type, Object origin, int kind)
    {
        {
            vars.put(name, new VarInfo(type, origin, kind));
        }
    }

    /** Registers a new function in the symbol table. */
    public void registerFn(Function fn)
    {
        // Ignore null-named functions.
        if (fn.getName() != null)
            fns.put(fn.getName(), fn);
    }

    /** Helper method to get the VarInfo for a name.  If the symbol is
     * not in the current symbol table, search in the parent.  If the
     * parent is null, return null. */
    public VarInfo lookupVarInfo(String name)
    {
        VarInfo info = (VarInfo)vars.get(name);
        if (info != null)
            return info;
        if (parent != null)
            return parent.lookupVarInfo(name);
        return null;
    }

    /**
     * Check to see if a symbol exists.  Searches parent symbol tables.
     *
     * @param   name  name of the variable to search for
     * @return  true if defined, false otherwise
     */
    public boolean hasVar(String name)
    {
        VarInfo info = lookupVarInfo(name);
        return (info != null);
    }

    public FEContext varCx(String name) {
        VarInfo info = lookupVarInfo(name);
        return info.getContext();
    }

    /**
     * Looks up the type for a symbol. If that symbol is not in the current symbol table,
     * search in the parent.
     * 
     * @param name
     *            name of the variable to search for
     * @param errSource
     *            A source node if the name is not found
     * @return the front-end type of the variable, if defined
     * @throws UnrecognizedVariableException
     *             if the variable is defined in neither this nor any of its ancestor
     *             symbol tables
     */
    public Type lookupVar(String name, FENode errSource)
    {
        VarInfo info = lookupVarInfo(name);
        if (info != null)
            return info.type;
        throw new UnrecognizedVariableException(name, errSource);
    }


    public boolean isVarShared(String name, FENode errSource) {

    	return isVarShared(name, false, errSource);


    }

    public boolean isVarShared(String name, boolean isShared, FENode errSource) {
    	   VarInfo info = (VarInfo)vars.get(name);
           if (info != null)
               return isShared;
           if (parent != null)
            return parent.isVarShared(name, makeShared || isShared, errSource);
        throw new UnrecognizedVariableException(name, errSource);
    }


    /**
     * Looks up the type for a variable expression.  If the named
     * symbol is not in the current symbol table, search in the
     * parent.
     *
     * @param   var  variable expression to search for
     * @return  the front-end type of the variable, if defined
     * @throws  UnrecognizedVariableException if the variable is
     *          defined in neither this nor any of its ancestor
     *          symbol tables
     */
    public Type lookupVar(ExprVar var)
    {
        VarInfo info = lookupVarInfo(var.getName());
        if (info != null)
            return info.type;
        throw new UnrecognizedVariableException(var.getName(), var);
    }

    public Type lookupVarNocheck(ExprVar var) {
        VarInfo info = lookupVarInfo(var.getName());
        if (info != null)
            return info.type;
        return null;
    }


    /**
     * Finds the object that declared a particular symbol. If that symbol is not in the
     * current symbol table, search in the parent.
     * 
     * @param name
     *            name of the variable to search for
     * @param errSource
     * @return the object that declares the variable, if defined
     * @throws UnrecognizedVariableException
     *             if the variable is defined in neither this nor any of its ancestor
     *             symbol tables
     */
    public Object lookupOrigin(String name, FENode errSource)
    {
        VarInfo info = lookupVarInfo(name);
        if (info != null)
            return info.origin;
        throw new UnrecognizedVariableException(name, errSource);
    }

    /**
     * Gets the kind (local, field, etc.) of a particular symbol. If that symbol is not in
     * the current symbol table, search in the parent.
     * 
     * @param name
     *            name of the variable to search for
     * @param errSource
     * @return KIND_* constant describing the variable
     * @throws UnrecognizedVariableException
     *             if the variable is defined in neither this nor any of its ancestor
     *             symbol tables
     */
    public int lookupKind(String name, FENode errSource)
    {
        VarInfo info = lookupVarInfo(name);
        if (info != null)
            return info.kind;
        throw new UnrecognizedVariableException(name, errSource);
    }

    /**
     * Gets the finality status (is it final or not) of a particular symbol. If that
     * symbol is not in the current symbol table, search in the parent.
     * 
     * @param name
     *            name of the variable to search for
     * @param errSource
     * @return Finality constant describing the variable
     * @throws UnrecognizedVariableException
     *             if the variable is defined in neither this nor any of its ancestor
     *             symbol tables
     */
    public Finality lookupFinality(String name, FENode errSource) {
        VarInfo info = lookupVarInfo(name);
        if (info != null)
            return info.isFinal;
        throw new UnrecognizedVariableException(name, errSource);
    }

    public void setFinality(String name, Finality f, FENode errSource) {
        VarInfo info = lookupVarInfo(name);
        if (info != null) {
            info.isFinal = f;
        } else {
            throw new UnrecognizedVariableException(name, errSource);
        }
    }


    /** Returns the parent of this, or null if this has no parent. */
    public SymbolTable getParent()
    {
        return parent;
    }

	/**
	 * Perform a deep clone of the current symbol table.
	 */
	public Object clone() {
        SymbolTable table = shallowClone();
		if (this.parent != null) {
			table.parent = (SymbolTable) this.parent.clone();
		} else {
			table.parent = null;
		}

		return table;
	}

    public SymbolTable shallowClone() {
        SymbolTable table = new SymbolTable(null);

        table.fns = new HashMap<String, Function>();
        for (Entry<String, Function> entry : this.fns.entrySet()) {
            table.fns.put(entry.getKey(), entry.getValue());
        }

        table.vars = new HashMap<String, SymbolTable.VarInfo>();
        for (Entry<String, VarInfo> entry : this.vars.entrySet()) {
            table.vars.put(entry.getKey(), entry.getValue());
        }

        table.includedFns = this.includedFns;
        table.makeShared = this.makeShared;
        table.parent = this.parent;
        return table;
    }

    /**
	 * Return the variables from the symbol table as Expression based on the 
	 * type of the provided expression. Be careful with this since this will include the 
	 * variable where the special symbol is found. Also be careful since 
	 * it might return the variables from the parent.
	 * 
	 * @return
	 */
	public ArrayList<Expression> getLocalVariablesOfType(Type type) {
		ArrayList<Expression> localVariables = new ArrayList<Expression>();

//		Map<String, VarInfo> variables = new HashMap<String, SymbolTable.VarInfo>();
		Map<String, VarInfo> variables = this.vars;

		
		// SymbolTable table = exp.getSymbolTableInContext();
		
		// Get the symbol table parent
		SymbolTable parent = this.getParent();

		// if(table == null) {
		// variables = this.vars;
		// }
		// else {
		// variables = table.vars;
		// parent = table.parent;
		// }
	
        // Loop through the variables
		for (Entry<String, VarInfo> entry : variables.entrySet()) {
            // Get the information of the variable
            VarInfo varInformation = entry.getValue();

			// If the current variable has the same type that we want
			if (type.equals(varInformation.type)) {
				// Get the statement from the information
				StmtVarDecl statement = (StmtVarDecl) varInformation.origin;
				
				// Add the variable name to the list
				localVariables.add(new ExprVar(statement.getCx(), statement.getName(0)));
			}

        }

		// Loop through the parent symbol table while it is not null
        while(parent != null) {
        	// Loop through the formal parameters
			for (Entry<String, VarInfo> parameter : parent.vars.entrySet()) {
        		// Get the information of the variable
        		VarInfo varInformation = parameter.getValue();
        		
        		// If the current variable has the same type that we want
				if (type.equals(varInformation.type)) {
        			
        			// If the variable is of type Parameter
        			if(varInformation.origin.getClass().equals(Parameter.class)) {
        				// Get the parameter from the information
						Parameter variable = (Parameter) varInformation.origin;
						
						// Add the variable name to the list
	        			localVariables.add(new ExprVar(variable.getCx(), variable.getName()));
					}
	        		else if(varInformation.origin.getClass().equals(StmtVarDecl.class)) {
	        			// Get the statement from the information
	        			StmtVarDecl variable = (StmtVarDecl) varInformation.origin;
	        			
	        			// Add the variable name to the list
	        			localVariables.add(new ExprVar(variable.getCx(), variable.getName(0)));
	        		}
	        		else {
	        			throw new ClassCastException("Could not cast a variable in a parent symbol table");
	        		}
        			
        		}
        		
        	}
        	
        	// Get the new parent
			parent = parent.getParent();
        	
        }

		
//		// If the type is an int, we want to also consider 0
//		if (exp.getType().equals(TypePrimitive.int32type)) {
//			// Create a new 0 constant expression
//			ExprConstInt zero = (ExprConstInt) ExprConstant.createConstant(new DummyFENode(exp.getCx()), "0");
//
//			// Added to the possible variables
//			localVariables.add(zero);
//		}

        return localVariables;
    }
}
