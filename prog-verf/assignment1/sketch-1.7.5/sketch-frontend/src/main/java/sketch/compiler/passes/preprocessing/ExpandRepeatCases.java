package sketch.compiler.passes.preprocessing;

import java.util.LinkedList;
import java.util.List;

import sketch.compiler.ast.core.stmts.Statement;
import sketch.compiler.ast.core.stmts.StmtSwitch;
import sketch.compiler.ast.core.typs.TypeStructRef;
import sketch.compiler.passes.lowering.SymbolTableVisitor;
import sketch.compiler.dataflow.CloneHoles;

/**
 * This class expands repeat_case construct by creating a new case for each variant and
 * instantiates the holes in the body differently for each variant.
 */
public class ExpandRepeatCases extends SymbolTableVisitor {

    public ExpandRepeatCases() {
        super(null);

    }

    @Override
    public Object visitStmtSwitch(StmtSwitch stmt){
        StmtSwitch newStmt = new StmtSwitch(stmt.getContext(), stmt.getExpr());
        TypeStructRef tres = (TypeStructRef) getType(stmt.getExpr());
        LinkedList<String> queue = new LinkedList<String>();
        String name = nres.getStruct(tres.getName()).getFullName();
        if (nres.isTemplate(tres.getName()))
            return stmt;
        queue.add(name);
        // List<String> children = nres.getStructChildren(tres.getName());
        if (stmt.getCaseConditions().size() == 0) {
            return stmt;
        }
        for(String c : stmt.getCaseConditions()) {
        if ("repeat".equals(c)) {

                while (!queue.isEmpty()) {

                    String parent = queue.removeFirst();
                    String caseName = parent.split("@")[0];
                    if (!newStmt.getCaseConditions().contains(caseName)) {
                        List<String> children = nres.getStructChildren(parent);
                        if (children.isEmpty()) {
                            Statement body = (Statement) stmt.getBody(c).accept(this);
                            body =
                                    (Statement) (new CloneHoles()).process(body).accept(
                                            this);
                            newStmt.addCaseBlock(caseName, body);
                        } else {
                            queue.addAll(children);

                        }
                    }
                }

                return newStmt;
            } else {
                Statement body = (Statement) stmt.getBody(c).accept(this);
                body = (Statement) (new CloneHoles()).process(body).accept(this);
                newStmt.addCaseBlock(c, body);
            }
        }
        return newStmt;

    }

}
