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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

import sketch.compiler.ast.core.FEContext;
import sketch.compiler.ast.core.FENode;
import sketch.compiler.ast.core.FEVisitor;

/**
 * A block of statements executed in sequence.  This introduces a
 * lexical scope for variable declarations, and is a way for multiple
 * statements to be used in loops or conditionals.
 *
 * @author  David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class StmtBlock extends Statement
{
    protected List<Statement> stmts;
    // Should this also have a symbol table?  --dzm

    /** Create a new StmtBlock with the specified ordered list of
     * statements. */
    public StmtBlock(FENode context, List<? extends Statement> stmts)
    {
        super(context);
        this.stmts = Collections.unmodifiableList(stmts);
    }
    
    /** Create a new StmtBlock with the specified ordered list of
     * statements. */
    public StmtBlock(List<? extends Statement> stmts)
    {
        super( stmts.size() > 0 ? stmts.get(0) : null );
        this.stmts = Collections.unmodifiableList(stmts);
    }
    

    /** Create a new StmtBlock with the specified ordered list of
     * statements.
     * @deprecated
     */
    public StmtBlock(FEContext context, List<? extends Statement> stmts)
    {
        super(context);
        this.stmts = Collections.unmodifiableList(stmts);
    }

    /** Create a new StmtBlock for a variable number of statements. */
    public StmtBlock (FENode cx, Statement... stmts) {
    	this (cx, Arrays.asList (stmts));
    }

    /** Create a new StmtBlock for a variable number of statements. */
    public StmtBlock (FEContext cx, Statement... stmts) {
        this (cx, Arrays.asList (stmts));
    }

    /** Create a new StmtBlock for a pair of statements. */
    public StmtBlock(Statement stmt1, Statement stmt2)
    {
        super(stmt1);
        List<Statement> lst = new ArrayList<Statement>(2);
        lst.add(stmt1);
        lst.add(stmt2);
        this.stmts = Collections.unmodifiableList(lst);
    }

    /** Create a new StmtBlock for a single statement. */
    public StmtBlock(Statement stmt)
    {
    	this (stmt, Collections.singletonList (stmt));
    }

    @Override
    public int size() {
        int sz = 0;
        if (stmts != null) {
            for (Statement s : stmts) {
                sz += s.size();
            }
        }
        return sz;
    }

    public boolean isBlock () { return true; }

    /** Returns the list of statements of this. */
    public List<Statement> getStmts()
    {
        return stmts;
    }

    /** Accepts a front-end visitor. */
    public Object accept(FEVisitor v)
    {
        return v.visitStmtBlock(this);
    }
    public String toString(){
    	String result = "";
    	Iterator it = stmts.iterator();
    	while(it.hasNext()){
    		result += it.next().toString() + "\n";
    	}
    	return result;
    }
}
