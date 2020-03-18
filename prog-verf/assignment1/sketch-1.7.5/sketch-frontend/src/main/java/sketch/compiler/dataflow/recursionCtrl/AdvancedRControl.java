package sketch.compiler.dataflow.recursionCtrl;

import java.util.HashMap;
import java.util.Map;
import java.util.Stack;

import sketch.compiler.ast.core.FEReplacer;
import sketch.compiler.ast.core.Function;
import sketch.compiler.ast.core.Package;
import sketch.compiler.ast.core.Program;
import sketch.compiler.ast.core.exprs.ExprBinary;
import sketch.compiler.ast.core.exprs.ExprFunCall;
import sketch.compiler.ast.core.stmts.Statement;
import sketch.compiler.ast.core.stmts.StmtFor;
import sketch.compiler.ast.core.stmts.StmtIfThen;
import sketch.util.wrapper.ScRichString;

/**
 * 
 * 
 * 
 * 
 * @author asolar
 *
 */

class WeightFunctions extends FEReplacer{
	String currFun = null;
	int w = 0;
	Map<String, Integer> funWeight = new HashMap<String, Integer>();
	int maxWeight = 0;
	 public Object visitExprBinary(ExprBinary exp)
	    {
		  ++w;
	       return super.visitExprBinary(exp);
	    }
	
	 public Object visitFunction(Function func)
    {
	 currFun = func.getName();
	 w = 0;
	 Object obj = super.visitFunction(func);
	 funWeight.put(currFun, w);
	 if(w > maxWeight) maxWeight= w;
	 return obj;
    }
	
}

public class AdvancedRControl extends RecursionControl {
	public String debugMsg = null;
	Stack<Integer> bfStack;
	int branchingTheshold;
	private int MAX_INLINE;	
	Map<String, FunInfo> funmap;
	WeightFunctions funWeighter = new WeightFunctions();
	int FACTOR = 0;
    final boolean ignoreStatics;
	/**
	 * For each function, we must keep the following information: <BR>
	 * - Current recursion depth <BR>
	 * - Does it make subcalls <BR>
	 * Note that the second field is a static property, where as the first one is
	 * a dynamic property.
	 * This information is kept by the FunInfo class.
	 */
	private static class FunInfo{
		int rdepth;
		final boolean isTerminal;
        final boolean isStatic;

        FunInfo(boolean isTerminal, boolean isStatic) {
			this.isTerminal = isTerminal;
            this.isStatic = isStatic;
			rdepth = 0;
		}
		public String toString(){
			return "(" + rdepth + "," + (isTerminal? "T" : "NT") + ")";
		}
	}
	
	
	/**
	 * This class populates the funmap with initial values, setting the isTerminal field for all functions.
	 * @author asolar
	 *
	 */
	private class PopFunMap extends FEReplacer{
		String currentFun;
		int currentCalls;
		PopFunMap(){
			funmap = new HashMap<String, FunInfo>();
		}

        public Object visitPackage(Package spec) {
			 return super.visitPackage(spec);
		 }
		public Object visitFunction(Function func){
			String altName = null;
			if(func.getSpecification() != null){
				altName = func.getName();
                Function tmp = nres.getFun(func.getSpecification());
				if(tmp == null){					
					throw new RuntimeException("The function " + func.getSpecification() + " does not exist.\n\t" + func);
				}
				func = tmp; 
			}
            currentFun = nres.getFunName(func.getName());
			currentCalls = 0;
			Object obj = super.visitFunction(func);
            FunInfo fin = new FunInfo(currentCalls == 0, func.isStatic());
			funmap.put(currentFun, fin);
			if(altName != null){
                funmap.put(nres.getFunName(altName), fin);
			}
			return obj;
		}
		
		public Object visitExprFunCall(ExprFunCall exp)
	    {
			currentCalls++;
			return super.visitExprFunCall(exp);
	    }
	}
	
	/**
	 * This visitor will be called on a statement (generally a block),
	 * and after the visiting is done, <BR> 
	 * - <code>forbiddenCalls</code> will be true if any calls within the block can be guaranteed to  fail testCall. <BR> 
	 * - <code>bfactor</code> will have the minimum number of calls which must be made by the block.
	 */
	private class CheckBFandCalls extends FEReplacer{
		int bfactor = 0;
		boolean forbiddenCalls = false;
		String callsContained = "";

		public Object visitStmtIfThen(StmtIfThen stmt)
	    {
			//We don't want to look into If Statements. We don't know if they'll execute.
			return stmt;
	    }
		
		public Object visitStmtFor(StmtFor stmt)
	    {
			//We don't want to look into Loops either. We don't know if they'll execute.
			return stmt;
	    }
		public Object visitExprFunCall(ExprFunCall exp)
	    {
            String func = nres.getFunName(exp.getName());
            assert null != funmap.get(func) : "unknown function '" + func +
                    "'; known functions: " + new ScRichString(", ").join(funmap.keySet());
            FunInfo fi = funmap.get(func);
            if (!(fi.isStatic && ignoreStatics)) {
                if (!(fi.isTerminal)) {
                    ++bfactor; // += funWeighter.funWeight.get(exp.getName());
                }
            }
			if( ! testCall(exp) ){
				forbiddenCalls = true;
			}
            // System.out.println("Finished testing bf =" + bfactor);
			callsContained += exp.getName() +"(" + fi.rdepth  + ")"+ ", ";
			return exp;
	    }
		
	}
	
	
	
    public AdvancedRControl(int branchingThreshold, int maxInline, boolean ignoreStatics,
            Program prog)
    {
		this.branchingTheshold = branchingThreshold;
		bfStack = new Stack<Integer>();
		bfStack.push(1);
		prog.accept(new PopFunMap());
		prog.accept(funWeighter);
		/*for(Map.Entry<String, Integer> en : funWeighter.funWeight.entrySet()){
			System.out.println(en);
		}*/
		FACTOR = (funWeighter.maxWeight * 2 ) / 3;
		MAX_INLINE = maxInline;		
        this.ignoreStatics = ignoreStatics;
	}
	
	
	
	private boolean bfactorTest(int bf){
		int p = bfStack.peek();	
		if(p == 0){ 
			assert bf == 0; 
		}
		p = p*bf;
		if( p  > branchingTheshold){
			return false;
		}else{
			bfStack.push(p);
			return true;
		}
	}
		
	public void doneWithBlock(Statement stmt) {
		bfStack.pop();

	}

	/**
	 * This field is here solely for debugging reasons.
	 */ 
	int tt = 0; //DEBUGGING INFO
	@Override
	public int inlineLevel(ExprFunCall fun) {
        FunInfo fi = funmap.get(nres.getFunName(fun.getName()));
		return fi.rdepth;		
	}

	@Override
	public void popFunCall(ExprFunCall fun) {
		strack.popCall(fun);
        FunInfo fi = funmap.get(nres.getFunName(fun.getName()));
		fi.rdepth--;
		--tt;
	}

	public String callStack(){
		return strack.getSstring();
	}

	public void pushFunCall(ExprFunCall fc, Function fun) {
		strack.pushCall(fc);
        FunInfo fi = funmap.get(nres.getFunName(fc.getName()));
		if( tracing && ! fi.isTerminal ){
			for(int i=0; i<tt; ++i) System.out.print("  "); //DEBUGGING INFO
			System.out.println(fc.getName() + "   " +  this.bfStack.peek()  /*+ "  "  +  fc.hashCode() + "  " + fc*/); //DEBUGGING INFO
		}
		debugMsg = fc.getName();
		++tt;
		fi.rdepth++;
	}

	public boolean leaveCallsBehind(){
		return false;
	}
	
	public String debugMsg(){
		return "Function " +  debugMsg + " was not inlined enough. Increase inlining with --inlineamnt flag.";
	}

	public boolean testBlock(Statement stmt) {
		/* First, we check if the block is legal. I.e. if it has any
		 * function calls that will surpass their max iteration depth.
		 */		
		CheckBFandCalls check = new CheckBFandCalls();
        check.setNres(nres);
		stmt.accept(check);
		if( ! check.forbiddenCalls ){
			/*
			 *  If it is, then we check the branching factor. That's the number
			 *  of non-terminal calls made by the block.  
			 */
			int bfactor = check.bfactor;
			/*if(bfactor > 0){
				bfactor = bfactor;
			}
			bfactor = bfactor / FACTOR;*/
			if(bfactor < 1) bfactor = 1;
			/*
			 * Then we test the cummulative branching factor. This is the 
			 * product of all the elements in bfStack * bfactor. 
			 * If it is larger than 
			 * a threshold, we return false. Otherwise, we push bfactor into the
			 * bfStack and return true.
			 * 
			 */		
			boolean recurse = bfactorTest(bfactor);
			if(tracing && !recurse) System.out.println("BRANCHING FACTOR EXCEEDED  " + (bfactor*bfStack.peek()) + ">=" + this.branchingTheshold + "  " + bfactor + "  prevented " + check.callsContained);
			return 	recurse;
		}
		if(tracing){
			System.out.println("ITERATION DEPTH EXCEEDED  prevented " + check.callsContained);
		}
		return false;
	}


	public boolean testCall(ExprFunCall fc) {
        FunInfo fi = funmap.get(nres.getFunName(fc.getName()));
		/*
		if(tracing){
			System.out.print("testing call " + fc.getName() + " fi.rdepth = " + fi.rdepth);
		}
		*/
		if( fi.rdepth < MAX_INLINE ){
			if(tracing){
			//	System.out.println(" succeed");
			}
			return true;
		}else{
			if(tracing){
			//	System.out.println(" fail");
			}
			return false;
		}		
	}

}
