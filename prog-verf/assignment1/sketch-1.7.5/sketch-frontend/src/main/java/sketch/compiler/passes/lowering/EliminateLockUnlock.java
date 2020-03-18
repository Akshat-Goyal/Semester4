package sketch.compiler.passes.lowering;
import java.util.ArrayList;
import java.util.List;

import sketch.compiler.ast.core.FENode;
import sketch.compiler.ast.core.FEReplacer;
import sketch.compiler.ast.core.Function;
import sketch.compiler.ast.core.exprs.ExprArrayRange;
import sketch.compiler.ast.core.exprs.ExprBinary;
import sketch.compiler.ast.core.exprs.ExprConstInt;
import sketch.compiler.ast.core.exprs.ExprConstant;
import sketch.compiler.ast.core.exprs.ExprFunCall;
import sketch.compiler.ast.core.exprs.ExprVar;
import sketch.compiler.ast.core.exprs.Expression;
import sketch.compiler.ast.core.stmts.Statement;
import sketch.compiler.ast.core.stmts.StmtAssert;
import sketch.compiler.ast.core.stmts.StmtAssign;
import sketch.compiler.ast.core.stmts.StmtAtomicBlock;
import sketch.compiler.ast.core.stmts.StmtBlock;
import sketch.compiler.ast.core.stmts.StmtExpr;
import sketch.compiler.ast.core.stmts.StmtVarDecl;
import sketch.compiler.ast.core.typs.TypeArray;
import sketch.compiler.ast.core.typs.TypePrimitive;
import sketch.compiler.ast.promela.stmts.StmtFork;

public class EliminateLockUnlock extends FEReplacer {



	public Expression loopVar = null;
	public Expression lockLen = null;
	public ExprVar locksVar = null;
	boolean hasLocks = false;

	@Override
	public Object visitFunction(Function fun){
		hasLocks = false;
		Function f = (Function) super.visitFunction(fun);
		if(hasLocks){

			StmtVarDecl svd = new StmtVarDecl(fun, new TypeArray(TypePrimitive.inttype, lockLen  ), locksVar.getName(), ExprConstInt.zero);
			StmtBlock sb = new StmtBlock(svd, f.getBody());

			f = f.creator().body(sb).create();

		}
		return f;
	}

	@Override
	public Object visitStmtFork(StmtFork stmt){
		Expression oldLoopVar = loopVar;
		loopVar = new ExprVar(stmt, stmt.getLoopVarName());
		Object ret = super.visitStmtFork(stmt);
		loopVar = oldLoopVar;
		return ret;
	}

	public EliminateLockUnlock(int lockLen, String locksVar){
		this.locksVar  =new ExprVar((FENode)null, locksVar);
		this.lockLen = new ExprConstInt(lockLen);
	}

	 public Object visitStmtExpr(StmtExpr stmt)
	    {
		 	if(stmt.getExpression() instanceof ExprFunCall){
		 		Object o = stmt.getExpression().accept(this);
		 		if(o instanceof Expression){
		 			if( o == null) return null;
			        if (o == stmt.getExpression()) return stmt;
			        return new StmtExpr(stmt, (Expression)o);
		 		}else{
		 			assert o instanceof Statement;
		 			return o;
		 		}
		 	}

	        Expression newExpr = doExpression(stmt.getExpression());
	        if( newExpr == null) return null;
	        if (newExpr == stmt.getExpression()) return stmt;
	        return new StmtExpr(stmt, newExpr);
	    }


	 public Object visitExprFunCall (ExprFunCall exp) {
		 if (!(exp.getName ().equals ("lock") || exp.getName ().equals ("unlock")))
			 return exp;

		 hasLocks = true;

		 Expression threadId = getCurrentThreadId (exp);
		 Expression p = exp.getParams ().get (0);
		 Expression lock = new ExprArrayRange (locksVar, p);
		 Statement guard = new StmtAssert(exp, new ExprBinary (
				 new ExprBinary (ExprConstInt.zero, "<=", p),
				 "&&",
				 new ExprBinary(p, "<", lockLen)),
				 "The lock expression is out of bounds.", false);

		 if (exp.getName ().equals ("lock")) {
			 /* This is the code we are producing here.
			  *
			  *  assert (i < lockLen);
			  *  atomic(locks[i] == 0){
			  *  	locks[i] = threadID;
			  *  } */
			 addStatement (guard);
			 StmtAssign getLock = new StmtAssign (exp, lock, threadId);
			 return new StmtAtomicBlock (exp, getLock, makeLockFreeCond (exp, p));
		 } else {
			 /* This is the code we are producing here.
			  *
			  *  atomic {
			  *     assert i < lockLen;
			  *     assert locks[i] == threadId;
			  *  	locks[i] = 0;
			  *  } */
			 List<Statement> body = new ArrayList<Statement> ();
			 body.add (guard);
			 body.add (new StmtAssert (makeLockHeldCond (exp, threadId, p),
					   "You can't release a lock you don't own", false));
			 body.add (new StmtAssign (exp, lock, ExprConstInt.zero));
			 return new StmtAtomicBlock (exp, body);
		 }
	 }

	 public Expression getCurrentThreadId (FENode cx) {
		 return (null == loopVar) ? ExprConstant.createConstant (cx, "-1")
				 : new ExprBinary (loopVar, "+", ExprConstInt.one);
	 }

	 public Expression makeLockFreeCond (FENode cx, Expression p) {
		 return new ExprBinary (cx, new ExprArrayRange (locksVar, p), "==", ExprConstInt.zero);
	 }

	 public Expression makeLockHeldCond (FENode cx, Expression threadId, Expression p) {
		 return new ExprBinary (cx, new ExprArrayRange (locksVar, p), "==", threadId);
	 }
}
