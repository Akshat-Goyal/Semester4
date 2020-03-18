/**
 *
 */
package sketch.compiler.passes.lowering;
import java.util.Collections;

import sketch.compiler.ast.core.FENode;
import sketch.compiler.ast.core.TempVarGen;
import sketch.compiler.ast.core.exprs.ExprNew;
import sketch.compiler.ast.core.exprs.ExprVar;
import sketch.compiler.ast.core.stmts.StmtAssign;
import sketch.compiler.ast.core.stmts.StmtAtomicBlock;
import sketch.compiler.ast.core.stmts.StmtVarDecl;
import sketch.compiler.ast.core.typs.StructDef;
import sketch.compiler.ast.core.typs.Type;
import static sketch.compiler.ast.core.exprs.ExprNullPtr.nullPtr;

/**
 * This pass is very simple: it wraps allocations in atomic { } blocks.  This
 * is slightly hairy since allocations are expressions, and thus can
 * be used in odd places.  So we handle all allocations very generally, with
 * the following rule: any allocation gets replaced by a temporary variable
 * that is allocated in an atomic block, in the statement just before the
 * expression in which the allocated object appears.  E.g.:
 *<code>
 *   Foo f = new Foo ();
 *   int g = (new Bar ()).g;
 *
 *   // --- is converted to ---
 *
 *   Foo _tmp1 = null;
 *   atomic { _tmp1 = new Foo (); }
 *   Foo f = _tmp1;
 *
 *   Bar _tmp2 = null;
 *   atomic { _tmp2 = new Bar (); }
 *   int g = (_tmp2).g;
 *</code>
 * @author Chris Jones
 */
public class MakeAllocsAtomic extends SymbolTableVisitor {
	protected TempVarGen varGen;

	/**
	 * @param symtab
	 */
	public MakeAllocsAtomic (TempVarGen varGen_) {
		super (null);
		varGen = varGen_;
	}

	public Object visitExprNew (ExprNew e) {
		e.assertTrue (getType (e).isStruct (), "fatal internal error");

		FENode cx = e;
        Type tt = getType(e);
        StructDef struct = this.getStructDef(tt);
		ExprVar tmpVar =
			new ExprVar (cx, varGen.nextVar ("_tmp_new_"+ struct.getName () +"_"));
		StmtVarDecl tmpDecl =
 new StmtVarDecl(cx, tt, tmpVar.getName(), nullPtr);
		StmtAtomicBlock atomicAlloc =
			new StmtAtomicBlock (cx,
					Collections.singletonList (new StmtAssign (tmpVar, e)));

		addStatement (tmpDecl);
		addStatement (atomicAlloc);

		return tmpVar;
	}

}
