package sketch.compiler.passes.lowering;
import java.util.List;

import sketch.compiler.ast.core.FEReplacer;
import sketch.compiler.ast.core.stmts.StmtBlock;

/**
 * Cleans up the code before output.
 * Currently, this just means getting rid of unnecessary blocks.
 * 
 * @author liviu
 */
public class BackendCleanup extends FEReplacer {

	public BackendCleanup() {
	}

	public Object visitStmtBlock(StmtBlock stmt) 
	{
		do {
			List children=stmt.getStmts();
			if(children.size()!=1) break;
			Object fc=children.get(0);
			if(!(fc instanceof StmtBlock)) break;
			//if the block contains just another block, inline it
			stmt=(StmtBlock) fc;
		} while(true);
		return super.visitStmtBlock(stmt);
	}

}
