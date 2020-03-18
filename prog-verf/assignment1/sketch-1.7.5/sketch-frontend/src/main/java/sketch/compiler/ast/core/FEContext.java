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

/**
 * A FEContext provides source locations and other context for a
 * front-end node.  It has a file name, line number, and column
 * number.
 *
 * @author  David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class FEContext
{
    private String fileName;
    private int lineNumber, columnNumber;
    private String file;
    private String lastComment;

    /** Create a new context object with no location information. */
    public FEContext()
    {
        this(null);
    }

    /** Create a new context object with a known filename but no
     * line information.
     *
     * @param fileName  Name of the file, or null if it is unavailable
     */
    public FEContext(String fileName)
    {
        this(fileName, -1);
    }

    /** Create a new context object with a known filename and line
     * number but no column number.
     *
     * @param fileName  Name of the file, or null if it is unavailable
     * @param line      Line number, or -1 if it is unavailable
     */
    public FEContext(String fileName, int line)
    {
        this(fileName, line, -1);
    }

    /** Create a new context object with known filename, line number,
     * and column number.
     *
     * @param fileName  Name of the file, or null if it is unavailable
     * @param line      Line number, or -1 if it is unavailable
     * @param col       Column number, or -1 if it is unavailable
     */
    public FEContext(String fileName, int line, int col)
    {
        this.fileName = fileName;
        lineNumber = line;
        columnNumber = col;

        String lfile = fileName;
        if (lfile == null){
        	lfile = "<unknown>";
        }
        if (line >= 0){
        	file =  lfile + ":" + line;
        }else{
        	file = lfile;
        }
    }

    public FEContext(String fileName, int line, int col, String lastComment) {
        this.fileName = fileName;
        lineNumber = line;
        columnNumber = col;
        this.lastComment = lastComment;

        String lfile = fileName;
        if (lfile == null) {
            lfile = "<unknown>";
        }
        if (line >= 0) {
            file = lfile + ":" + line;
        } else {
            file = lfile;
        }
    }

    /** Get the name of the file this node appears in, or null if it is
     * unavailable. */
    public String getFileName()
    {
        return fileName;
    }

    public boolean hasComment() {
        return lastComment != null;
    }

    public String getComment() {
        return lastComment;
    }

    /** Get the line number this node begins on, or -1 if it is
     * unavailable. */
    public int getLineNumber()
    {
        return lineNumber;
    }

    /** Get the column number this node begins on, or -1 if it is
     * unavailable. */
    public int getColumnNumber()
    {
        return columnNumber;
    }

    /** Return the location this represents, in the form
     * "filename.str:line".  Omits the line number if it is unavailable,
     * and uses a default filename it that is unavilable. */
    public String getLocation()
    {
        return file;
    }

    public String toString()
    {
        return getLocation();
    }

    public static FEContext artificalFrom(String name, FENode node0) {
        FEContext cx0;
        if (node0 == null || (node0.getCx() == null)) {
            cx0 = new FEContext("null context");
        } else {
            cx0 = node0.getCx();
        }
        return cx0;
    }
}
