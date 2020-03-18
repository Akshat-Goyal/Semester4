package sketch.compiler.dataflow.recursionCtrl;

import java.util.HashMap;

import sketch.compiler.ast.core.Function;
import sketch.compiler.ast.core.exprs.ExprFunCall;
import sketch.compiler.ast.core.stmts.Statement;

public class BaseRControl extends RecursionControl {
	protected class InlineCounter{
		private HashMap<String, Integer> inlineCounter = new HashMap<String, Integer> ();	
		public int getInlineCounter (String funcName)
	    {
	        assert (funcName != null);
	        Integer numInlinedInteger = inlineCounter.get (funcName);
	        return (numInlinedInteger != null ? numInlinedInteger.intValue () : 0);
	    }

	    private int addInlineCounter (String funcName, int step) {
	        int numInlined = getInlineCounter (funcName);
	        numInlined += step;
	        assert (numInlined >= 0) : " This is a problem  " + funcName + ", " + step + ", " + numInlined;
	        inlineCounter.put (funcName, new Integer (numInlined));
	        return numInlined;
	    }

	    private int incInlineCounter (String funcName, int step) {
	        assert (step > 0);
	        return addInlineCounter (funcName, step);
	    }

	    public int incInlineCounter (String funcName) {
	        return incInlineCounter (funcName, 1);
	    }

	    private int decInlineCounter (String funcName, int step) {
	        assert (step > 0);
	        return addInlineCounter (funcName, -step);
	    }

	    public int decInlineCounter (String funcName) {
	        return decInlineCounter (funcName, 1);
	    }
	}
	
	public boolean leaveCallsBehind(){
		return false;
	}
	
	public InlineCounter icount = new InlineCounter();	
	private int MAX_INLINE;
	
	public BaseRControl(int maxInline){
		MAX_INLINE = maxInline;
	}
	
	
	public int inlineLevel(ExprFunCall fun) {
		return icount.getInlineCounter(fun.getName());
	}

	
	public void popFunCall(ExprFunCall fun) {
		strack.popCall(fun);
		icount.decInlineCounter(fun.getName());
	}

	public String callStack(){
		return strack.getSstring();
	}
	
	public void pushFunCall(ExprFunCall fc, Function fun) {
		strack.pushCall(fc);
		icount.incInlineCounter(fc.getName());
	}

	
	public boolean testBlock(Statement stmt) {
		return true;
	}

	public void doneWithBlock(Statement stmt){
		
	}
	
	public boolean testCall(ExprFunCall fc) {
		return inlineLevel(fc) < MAX_INLINE ;
	}
}
