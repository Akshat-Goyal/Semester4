package sketch.compiler.dataflow.nodesToSB;

import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

import sketch.compiler.dataflow.abstractValue;

public class IntAbsValue extends abstractValue {

	public static final int BOTTOM = 0;
	public static final int INT = 1;
	public static final int LIST = 2;
    public static final int ADTNODE = 3;
    public static final int SYMBOLIC = 4;
    public static final int REAL = 5;

    private static int idcounter = 0;

	protected int type;
	protected Object obj;
    protected boolean knownGeqZero;

    public static abstractValue symbolic(String s, boolean b) {
        IntAbsValue iab = new IntAbsValue();
        iab.type = SYMBOLIC;
        iab.obj = s + ":" + idcounter;
        iab.knownGeqZero = b;
        idcounter++;
        return iab;

    }

    public static abstractValue symbolic(String s) {
        IntAbsValue iab = new IntAbsValue();
        iab.type = SYMBOLIC;
        iab.obj = s + ":" + idcounter;
        idcounter++;
        return iab;

    }

    protected Map<String, Map<String, abstractValue>> knownCases = null;
	
    public boolean equals(Object other) {
        if (!(other instanceof IntAbsValue))
            return false;
        IntAbsValue v2 = (IntAbsValue) other;
		switch(type){
		case INT: 
			if(v2.type != INT  ) return false;
			return v2.obj.equals(obj);			
		case LIST: {
			if(v2.type != LIST) return false;			
			Iterator<abstractValue> it1 = getVectValue().iterator();
			Iterator<abstractValue> it2 = v2.getVectValue().iterator();
			while( it2.hasNext()){
				if(!it1.hasNext()) return false;
				if( !it1.next().equals(it2.next()) ) return false;
			}
			return true;
		}

		case BOTTOM:{ 
			return (v2.type == BOTTOM );
		}
        case SYMBOLIC: {
            if (v2.type != SYMBOLIC)
                return false;
            return v2.obj.equals(obj);
        }
        case REAL: {
            if (v2.type != SYMBOLIC)
                return false;
            return v2.obj.equals(obj);
        }
		}
		return false;
	}
	
	
	public abstractValue clone(){
		return new IntAbsValue(this);
	}
	
	public IntAbsValue(IntAbsValue n){
		this.obj = n.obj;
		this.type = n.type;
		this.isVolatile = n.isVolatile;
        this.knownGeqZero = n.knownGeqZero;
        this.knownCases = n.cloneCases();
	}
	
	public static Map<String, abstractValue> cloneFields(Map<String, abstractValue> f) {
	    if (f == null) {
	        return null;
	    }
        Map<String, abstractValue> fields = new HashMap<String, abstractValue>(f.size());
        for (Map.Entry<String, abstractValue> e : f.entrySet()) {
            String name = e.getKey();
            abstractValue value = e.getValue();
            fields.put(name, value.clone());
        }
        return fields;
	}
	
    public Map<String, Map<String, abstractValue>> cloneCases() {
        if (knownCases == null) {
            return null;
        }
        Map<String, Map<String, abstractValue>> cases =
                new HashMap<String, Map<String, abstractValue>>(knownCases.size());
        for (Map.Entry<String, Map<String, abstractValue>> c : knownCases.entrySet()) {
            String caseName = c.getKey();
            Map<String, abstractValue> fields = c.getValue();
            cases.put(caseName, cloneFields(fields));
        }
        return cases;
    }

    public IntAbsValue(String label, boolean knownGeqZero) {
		this.obj = label;
        this.knownGeqZero = knownGeqZero;
		this.type = BOTTOM;
		assert label != null : "This should never happen!!!! Name should never be null.";
	}
	
	public IntAbsValue(){
		this.obj = null;
		this.type = BOTTOM;
        this.knownGeqZero = false;
	}

    public IntAbsValue(List<abstractValue> obj, boolean isTuple) {
        this.obj = obj;
        if (isTuple)
            this.type = BOTTOM;
        else
            this.type = LIST;
        this.knownGeqZero = false;
    }
	public IntAbsValue(List<abstractValue> obj){
		this.obj = obj;
		this.type = LIST;
        this.knownGeqZero = false;
	}
	
	public IntAbsValue(boolean obj){
		this.obj = obj? new Integer(1) : new Integer(0);
		this.type = INT;
        this.knownGeqZero = true;
	}
	
	public IntAbsValue(int obj){
		this.obj = obj;
		this.type = INT;
        this.knownGeqZero = obj >= 0;
	}
	
    public IntAbsValue(double obj) {
        this.obj = obj;
        this.type = REAL;
        this.knownGeqZero = obj >= 0.0;
    }

    public static IntAbsValue ADTnode(Map<String, Map<String, abstractValue>> cases)
    {
        IntAbsValue v = new IntAbsValue();
        v.type = ADTNODE;
        v.knownCases = cases;
        return v;
    }

    public boolean hasASTVal() {
        return type == ADTNODE && knownCases != null;
    }

	public boolean hasValue() {
        if (type == BOTTOM) {
            return false;
        }
        if (type == ADTNODE && knownCases == null) {
            return false;
        }
        if (type == SYMBOLIC) {
            return false;
        }
        return true;
	}

	public boolean isVect() {
        return type == LIST;
	}

	public int getIntVal() {
		assert type == INT : "Incorrect value type. Asking for int from " + this;
		return ((Integer)this.obj).intValue();
	}

    public double getRealVal() {
        assert type == REAL : "Incorrect value type. Asking for int from " + this;
        return ((Double) this.obj).doubleValue();
    }

	@SuppressWarnings("unchecked")
	public List<abstractValue> getVectValue() {
        assert type == LIST : "Incorrect value type";
		return (List<abstractValue>)obj;
	}

	public boolean isBottom() {
		return !hasValue();
	}

	public boolean hasIntVal() {
		return type == INT;
	}

    public boolean hasRealVal() {
        return type == REAL;
    }

    @Override
    public boolean knownGeqZero() {
        return this.knownGeqZero;
    }

	@Override
	public void makeVolatile(){
		super.makeVolatile();
		this.obj = null;
		this.type = BOTTOM;
	}
	
	public void update(abstractValue v){
		if(isVolatile){ return; }// If the variable is volatile, the update has no effect.
		assert v instanceof IntAbsValue;
		IntAbsValue ntsv = ((IntAbsValue)v);
		//assert ntsv.type == type  || ntsv.type == BOTTOM || type == BOTTOM : "Updating with incompatible values " +  v + " <> " + this;
		{
			obj = ntsv.obj;
			type = ntsv.type;
			knownGeqZero = ntsv.knownGeqZero();
            knownCases = ntsv.knownCases;
		}
	}
	public String toString(){
		switch(type){
		case INT: return obj.toString()+ (isVolatile ? "_v" : "");
		case LIST: {
			String rval = "$ ";
			int i=0;
			for(Iterator<abstractValue> it = getVectValue().iterator(); it.hasNext(); ){
				rval += it.next().toString() + " ";
				if(++i>10){ rval += "..." ; break; }
			}
			rval += "$";
			return rval;
		}
        
        case ADTNODE: {
            // NOTE xzl: too memory consuming, only turn it on for debug
            if (false && knownCases != null) {
                return "ADT" + knownCases.toString();
            }
            return "ADTNODE";
        }

		case BOTTOM:{ 
			if( obj != null ){
				if(obj.toString().length() > 10){
					return "BOTTOM" + (isVolatile ? "_v" : "");
				}
				return obj.toString() + (isVolatile ? "_v" : "");
			}else{
				return "BOTTOM"+ (isVolatile ? "_v" : "");
			}
		}
        case SYMBOLIC: {
            return "{" + obj + "}";
        }
        case REAL: {
            return obj.toString();
        }
		}
		return "NULL";
	}

    @Override
    public Map<String, Map<String, abstractValue>> getADTcases() {
        return knownCases;
    }

}
