package sketch.compiler.ast.core.stmts;

import sketch.compiler.ast.core.FEContext;
import sketch.compiler.ast.core.FEVisitor;
import sketch.compiler.ast.core.exprs.Expression;

/**
 * The minimize statement, to tell the backend that some integer value needs to be
 * minimized.
 */
public class StmtMinimize extends Statement {
    private final Expression minimizeExpr;
    public final boolean userGenerated;

    @SuppressWarnings("deprecation")
    public StmtMinimize(Expression minimizeExpr, final boolean userWritten) {
        super(FEContext.artificalFrom("minimize", minimizeExpr));
        this.minimizeExpr = minimizeExpr;
        this.userGenerated = userWritten;
    }

    @Override
    public Object accept(FEVisitor v) {
        return v.visitStmtMinimize(this);
    }

    public Expression getMinimizeExpr() {
        return minimizeExpr;
    }

    public String toString() {
        return "minimize(" + minimizeExpr + ")";
    }
}
