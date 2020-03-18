package sketch.compiler.dataflow.deadCodeElimination;

import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;

import sketch.compiler.dataflow.abstractValue;

public class LVSet extends abstractValue {
	Set<LiveVariableAV> set = new HashSet<LiveVariableAV>();
	
	@Override
	public abstractValue clone() {
		assert false : "This will never be an LHS, so it won't be cloned.";
		return null;
	}

	@Override
	public int getIntVal() {
		assert false : "This will never have an int val.";
		return 0;
	}

	@Override
	public List<abstractValue> getVectValue() {
		assert false : "This will never have a vect val.";
		return null;
	}

	@Override
	public boolean hasIntVal() {
		return false;
	}

	@Override
	public boolean isBottom() {
		return set.size() <= 0;
	}

	@Override
	public boolean isVect() {		
		return false;
	}

	@Override
	public void update(abstractValue v) {
		assert false : "Not an LHS, it will never be updated.";
	}
	
	public void enliven(){
		Iterator<LiveVariableAV> it = set.iterator();
		while(it.hasNext()){
			LiveVariableAV lv = it.next();
			if(lv.mstate != null){
				lv.mstate.setVarValueLight(lv.mstate.untransName(lv.name), new joinAV( LiveVariableAV.LIVE));
			}
		}
	}

    @Override
    public Map<String, Map<String, abstractValue>> getADTcases() {
        // TODO xzl should we refine this?
        return null;
    }

}
