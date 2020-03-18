package sketch.compiler.dataflow;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import java.util.Stack;

import sketch.compiler.ast.core.stmts.StmtAssert;
import sketch.compiler.ast.core.stmts.StmtAssume;
import sketch.compiler.ast.core.typs.Type;
import sketch.compiler.ast.core.typs.TypePrimitive;
import sketch.compiler.dataflow.nodesToSB.NtsbVtype;

import static sketch.util.DebugOut.assertFalse;
import static sketch.util.DebugOut.printFailure;






public class MethodState {
    public class ChangeTracker{
        protected ChangeTracker kid;
        protected abstractValue condition;
        protected Map<String, varState> deltas;
        protected int methodBoundary = 0;
        varState rvf = null;
        /*
         * When I hit a return, the current changeTracker will be poisoned to indicate
         * that those changes don't matter anymore. The state of the program as it stood
         * before the return has been transfered somewhere else, so there is no need to
         * keep track of it here anymore.
         */
        protected boolean isPoisoned = false;

        @Override
        public String toString() {
            StringBuilder sb = new StringBuilder("CT: ");
            sb.append(stateString());
            for (ChangeTracker c = kid; c != null; c = c.kid) {
                sb.append(">");
                sb.append(c.stateString());
            }
            return sb.toString();
        }
        public String stateString() {
            if (isPoisoned) {
                return "!" + rvf.toString();
            } else {
                return deltas.toString();
            }
        }

        public void freturn(abstractValue v){
            if(rvf == null){
                rvf = MethodState.this.getRvflag().getDeltaClone(vtype);
            }
            rvf.update(v, vtype);
        }
        
        public varState getRvflag(){
            if(rvf != null){
                return rvf;
            }else{
                if(kid != null){
                    return kid.getRvflag();
                }else{
                    return MethodState.this.rvflag;
                }
            }
        }
        
        public boolean isPoisoned() {
            return isPoisoned;
        }
        public void poison() {
            isPoisoned = true;
        }

        public void pushMethodBoundary(){
            methodBoundary++;
        }
        public void popMethodBoundary(){
            methodBoundary--;
        }
        public boolean isMethodBoundary(){
            return methodBoundary > 0;
        }
        
        
        public void remove(String var){
            if(deltas.containsKey(var)){
                deltas.get(var).outOfScope();
            }
            deltas.remove(var);
            if(kid != null){
                assert !kid.deltas.containsKey(var): "This can't happen.";
            }
        }

        ChangeTracker(abstractValue cond, boolean isNegated){
            deltas = new HashMap<String, varState>();
            condition = cond;
            if( isNegated){
                condition = vtype.not(condition);
            }
        }

        public boolean hasCondVal(){
            return condition != null;
        }

        public abstractValue getCondVal(){
            return condition;
        }
        /*
        ChangeTracker pushChangeTracker(abstractValue cond, boolean isNegated){
            ChangeTracker tmp = new ChangeTracker( cond,  isNegated);
            tmp.kid = this;
            return tmp;
        }
        */

        public varState addToDeltas(String var){
            varState current = null;
            if( !deltas.containsKey(var) ){
                current = UTvarState(var);
                current = current.getDeltaClone(vtype);
                deltas.put(var, current );
            }else{
                current = deltas.get(var);
            }
            return current;
        }

        public void setVarValue(String var, abstractValue val){
            varState current = addToDeltas(var);
            current.update(val, vtype);
        }

        public void setVarValue(String var, abstractValue idx, abstractValue val){
            varState current = addToDeltas(var);
            current.update(idx, val, vtype);
        }

        boolean knowsAbout(String var){
            varState i = deltas.get(var);
            if(i != null)
                return true;
            else
                return kid != null && kid.knowsAbout(var);
        }


        public abstractValue varValue(String var){
            varState i = deltas.get(var);
            if( i != null){
                return i.state(vtype);
            }else{
                return kid.varValue(var);
            }
        }

        public varState varState(String var){
            varState i = deltas.get(var);
            if( i != null){
                return i;
            }else{
                return kid.varState(var);
            }
        }

    }

    abstractValueType vtype;

    /**
     * Maps the unique name of a variable (the one returned by the varTranslator)
     * into a varState.
     *
     * Varstates are created when you call varGetLHSName for the first time.
     */
    private HashMap<String, varState> vars;
    /**
     * Translates the name of a variable from it's program name
     * to a unique name that takes scope into account.
     */
    private MapStack varTranslator;
    /**
     * Used for handling if statements.
     * Keeps track of what variables are changed, so that at the
     * join point you can merge the values for any variables that
     * changed on either branch.
     */
    private ChangeTracker changeTracker;

    private ChangeTracker returnTracker = null;

    public static class Level {
        public final String msg;
        public boolean isDead;

        public Level(String msg) {
            this.msg = msg;
            this.isDead = false;
        }
        
        @Override
        public String toString() {
            return msg;
        }
    }

    private Stack<Level> levels = new Stack<Level>();
    private int changeTrackers = 0;
    protected boolean useRetTracker = false;

    public int getLevel(){
        return levels.size();
    }
    
    @SuppressWarnings("unchecked")
    public Stack<String> getLevelStack() {
        return (Stack<String>) levels.clone();
    }

    public int getCTlevel(){
        return changeTrackers;
    }


    public void useRetTracker() {
        this.useRetTracker = true;
    }

    public MethodState(abstractValueType vtype) {
        // System.out.println("New Method State for new method.");
        vars = new HashMap<String, varState>();
        changeTracker = null;
        varTranslator = new MapStack();
        this.vtype = vtype;
    }

    public String untransName(String nm){
        if(nm.equals(rvname)){ 
            return nm; 
        }
        String otpt = varTranslator.untransName(nm);        
        // System.out.println(nm + " = " +  otpt);
        return  otpt;
    }

    public String transName(String nm){
        String otpt = varTranslator.transName(nm);
        // System.out.println(nm + " = " +  otpt);
        return  otpt;
    }

    private void UTsetVarValue(String var, abstractValue val){
        varState tv =  vars.get(var);
        assert(tv != null) : ( " This should never happen, because before seting the value of "+ var + ", you should have requested a LHS name. Or, alternatively, if this is a ++ increment, then you can't increment if it doesn't have an initial value, in which case tv would also not be null.");
                        
        if(changeTracker != null){
            changeTracker.setVarValue(var, val);
        }else{
            tv.update(val, vtype);
        }
    }

    public void testReturn() {
        freturn(vtype.CONST(1));
        if (cvmap.isEmpty()) {
            return;
        }
        pushReturnTracker(pathCondition(false), false);
        ChangeTracker tmpct = returnTracker;
        for (String var : cvmap) {
            tmpct.setVarValue(var, UTvarValue(var));
        }
        if (changeTracker != null) {
            changeTracker.poison();
        }
    }

    public void freturn(){
        freturn(vtype.CONST(1));        
    }
    
    public void freturn(abstractValue v){

        if(changeTracker != null){
            changeTracker.freturn(v);
        }else{
            rvflag.update(v, vtype);            
        }

    }
    
    private void UTsetVarValue(String var, abstractValue idx, abstractValue val){
        if(changeTracker != null){
            changeTracker.setVarValue(var, idx, val);
        }else{
            varState tv =  vars.get(var);
            assert(tv != null) : ( " This should never happen, because before seting the value of "+ var + ", you should have requested a LHS name. Or, alternatively, if this is a ++ increment, then you can't increment if it doesn't have an initial value, in which case tv would also not be null.");
            tv.update(idx, val, vtype);
        }
    }
    private abstractValue UTvarValue(String var){
        varState i =  UTvarState(var);
        return i.state(vtype);
    }

    public varState UTvarState(String var){
        varState i =  vars.get(var);
        if(changeTracker == null){
            assert i != null : "The variable " + var + " is causing problems";
            return i;
        }else{
            if( changeTracker.knowsAbout(var) ){
                return changeTracker.varState(var);
            }else{
                assert(i != null) : ( "The variable " + var + " is used before being declared. This is an  internal error indicating a bug in the synthesizer. \n");
                return i;
            }
        }
    }


    public varState getRvflag(){
        if(changeTracker == null){
            return rvflag;
        }else{
            return changeTracker.getRvflag();
        }
    }
    


    public void procChangeTrackersConservative (ChangeTracker ch1){
        Iterator<Entry<String, varState>> it2 = ch1.deltas.entrySet().iterator();
        while(it2.hasNext()){
            Entry<String, varState> me =  it2.next();
            varState av2 = me.getValue();
            varState oldstate = this.UTvarState(me.getKey());
            this.UTsetVarValue(me.getKey(),   vtype.BOTTOM() );
        }
    }





    /**
     * Process the ChangeTracker ch1 and merge changes with the current state. This does
     * NON-destructive update, i.e. every new value is merged with old value in current
     * state. Note that the effects also include return value (rvf). E.X. if (x) {y = 1;}
     * without else branch, then any update must be non-destructive.
     */
    public void procChangeTrackers (ChangeTracker ch1){
        // TODO xzl: it seems that all these procChangeTracker* assume that the ch being
        // merged are directly based on the current state, i.e., their "kid"s represent
        // current state. Is this true? should add into the JavaDoc if it's true.

        if (ch1.isPoisoned()) {
            // If the changeTracker was poisoned, we can ignore all other updates that
            // happened in it.
            if (ch1.rvf != null) {
                this.freturn(this.getRvflag().condjoin(ch1.condition, ch1.rvf, vtype).state(
                        vtype));
            }
            return;
        }

        HashMap<String, varState> mmap = new HashMap<String, varState>();

        for(Entry<String, varState> me : ch1.deltas.entrySet()){
            varState av2 = me.getValue();
            varState oldstate = this.UTvarState(me.getKey());
            varState merged = oldstate.condjoin(ch1.condition, av2, vtype);
            mmap.put(me.getKey(), merged);
        }

        if(ch1.rvf != null){
            this.freturn(this.getRvflag().condjoin(ch1.condition,ch1.rvf , vtype).state(vtype));
        }
        
        for(Entry<String, varState> me : mmap.entrySet()){
            varState merged = me.getValue();
            if( merged.isArr() ){
                for(Iterator<Entry<Integer, abstractValue>> ttt = merged.iterator(); ttt.hasNext(); ){
                    Entry<Integer, abstractValue> tmp  = ttt.next();
                    this.UTsetVarValue(me.getKey(), vtype.CONST(tmp.getKey()),  tmp.getValue() );
                }
            }else{
                this.UTsetVarValue(me.getKey(),   merged.state(vtype) );
            }
        }
    }

    /**
     * Process the ChangeTrackers ch1 and ch2, merging them, and applying to the current
     * state, assuming that ch1 and ch2 represent two branches of a StmtIfThen. This does
     * Destructive update whenever possible, i.e. the new value (merged from ch1 and ch2)
     * overwrites the old value in current state if the corresponding variable is updated
     * in both branches. This is correct because the control flow only diverges to two
     * branches upon an StmtIfThen, and the effects in those two branches are summarized
     * by ch1 and ch2. Note that the effects also include return value (rvf).
     */
    public void procChangeTrackers (ChangeTracker ch1, ChangeTracker ch2){

        if (ch1.rvf != null) {
            if (ch2.rvf == null) {
                this.freturn(this.getRvflag().condjoin(ch1.condition, ch1.rvf, vtype).state(
                        vtype));
            } else {
                this.freturn(ch2.rvf.condjoin(ch1.condition, ch1.rvf, vtype).state(vtype));
            }
        } else {
            if (ch2.rvf != null) {
                this.freturn(this.getRvflag().condjoin(ch2.condition, ch2.rvf, vtype).state(
                        vtype));
            }
        }
        if (ch1.isPoisoned()) {
            if (ch2.isPoisoned()) {
                // Both branches returned, so we need to poison the parent changeset.
                if (changeTracker != null) {
                    changeTracker.poison();
                }
                return;
            }
            // ch1 is poisoned but ch2 is not.
            // We unconditionally propagate the changes from ch2.
            for (Entry<String, varState> me : ch2.deltas.entrySet()) {
                String nm = me.getKey();
                varState merged = me.getValue();
                if (merged.isArr()) {
                    for (Iterator<Entry<Integer, abstractValue>> ttt = merged.iterator(); ttt.hasNext();)
                    {
                        Entry<Integer, abstractValue> tmp = ttt.next();
                        this.UTsetVarValue(me.getKey(), vtype.CONST(tmp.getKey()),
                                tmp.getValue());
                    }
                } else {
                    this.UTsetVarValue(me.getKey(), merged.state(vtype));
                }
            }
            return;
        } else {
            if (ch2.isPoisoned()) {
                // ch2 is poisoned but ch1 is not.
                // we unconditionally propagate the changes from ch1.
                for (Entry<String, varState> me : ch1.deltas.entrySet()) {
                    String nm = me.getKey();
                    varState merged = me.getValue();
                    if (merged.isArr()) {
                        for (Iterator<Entry<Integer, abstractValue>> ttt =
                                merged.iterator(); ttt.hasNext();)
                        {
                            Entry<Integer, abstractValue> tmp = ttt.next();
                            this.UTsetVarValue(me.getKey(), vtype.CONST(tmp.getKey()),
                                    tmp.getValue());
                        }
                    } else {
                        this.UTsetVarValue(me.getKey(), merged.state(vtype));
                    }
                }
                return;
            }
        }

        HashMap<String, varState> mmap = new HashMap<String, varState>();

        for(Entry<String, varState> me : ch1.deltas.entrySet()){
            String nm = me.getKey();
            varState av1 = me.getValue();
            if(ch2.deltas.containsKey( nm )){
                //This means the me.getKey() was modified on both branches.
                varState av2 = ch2.deltas.get( nm );
                varState merged = av2.condjoin(ch1.condition, av1, vtype);
                mmap.put(nm, merged);
                ch2.deltas.remove(me.getKey());
            }else{
                varState oldstate = this.UTvarState(me.getKey());
                varState merged = oldstate.condjoin(ch1.condition, av1, vtype);
                mmap.put(nm, merged);
            }
        }
        //Now, at this point, we have removed from ch2 all the items
        //that were also in ch1. So all the ones that are left in ch2
        //Are the ones that are in ch2 alone.
        for(Entry<String, varState> me : ch2.deltas.entrySet()){
            varState av2 = me.getValue();
            varState oldstate = this.UTvarState(me.getKey());
            varState merged = oldstate.condjoin(ch2.condition, av2, vtype);
            mmap.put(me.getKey(), merged);
        }
        
        
        
        
        for(Entry<String, varState> me : mmap.entrySet()){
            varState merged = me.getValue();
            if( merged.isArr() ){
                for(Iterator<Entry<Integer, abstractValue>> ttt = merged.iterator(); ttt.hasNext(); ){
                    Entry<Integer, abstractValue> tmp  = ttt.next();
                    this.UTsetVarValue(me.getKey(), vtype.CONST(tmp.getKey()),  tmp.getValue() );
                }
            }else{
                this.UTsetVarValue(me.getKey(),   merged.state(vtype) );
            }
        }
    }

    /**
     * Process the ChangeTrackers chs, merging them, and applying to the current state,
     * assuming that chs exhaustively cover all branches of a StmtSwitch. This does
     * Destructive update whenever possible, i.e. the new value (merged from all
     * ChangeTrackers in chs) overwrites the old value in current state if the
     * corresponding variable is updated in all branches. This is correct because we
     * enforce that StmtSwitch must exhaustively match all cases. Note that the effects
     * also include return value (rvf).
     */
    public void procChangeTrackers(Iterable<ChangeTracker> chs) {
        // TODO xzl: there is a more efficient way of doing this. but let's do the simple
        // way for now.

        // NOTE xzl: we want to use the destructive update version of procChangeTrackers,
        // so we want to assume that there are at least two branches. But this is not
        // always true, even if we have reduced StmtSwitch with only one branch in
        // VisitStmtSwitch, because in VisitStmtSwitch we have an optimization: if a
        // branch can be reduced to "assert(0)", we do not include its ChangeTracker in
        // chs. This may make chs a singleton or even empty!
        Iterator<ChangeTracker> it = chs.iterator();
        if (!it.hasNext()) {
            // empty chs means all branches in StmtSwitch are invalid, then the whole
            // thing can be reduced to "assert(0)", so don't care about changes
            return;
        }
        ChangeTracker head = it.next();
        if (!it.hasNext()) {
            // chs contains only one ChangeTracker "head". this means that all other
            // branches are "assert(0)", so destructively apply the changes in head.
            procChangeTrackerDestructive(head);
            return;
        }
        ChangeTracker current = it.next();
        abstractValue cond = head.condition;

        while (it.hasNext()) {
            ChangeTracker c = it.next();
            pushChangeTracker(cond, false);
            try {
                procChangeTrackers(current, c);
            } finally {
                current = popChangeTracker();
            }
        }

        procChangeTrackers(head, current);
    }

    /**
     * Destructively apply changes to the current state. USE WITH CAUTION: do not use if
     * you cannot be sure that ch1 represent the only possible control flow. do not use if
     * you don't understand.
     */
    public void procChangeTrackerDestructive(ChangeTracker ch1) {

        if (ch1.rvf != null) {
            this.freturn(ch1.rvf.state(vtype));
        }
        if (ch1.isPoisoned()) {
            // If the changeTracker was poisoned, we can ignore all other updates that
            // happened in it.
            return;
        }

        // we unconditionally propagate the changes from ch1.
        for (Entry<String, varState> me : ch1.deltas.entrySet()) {
            String nm = me.getKey();
            varState merged = me.getValue();
            if (merged.isArr()) {
                for (Iterator<Entry<Integer, abstractValue>> ttt = merged.iterator(); ttt.hasNext();)
                {
                    Entry<Integer, abstractValue> tmp = ttt.next();
                    this.UTsetVarValue(me.getKey(), vtype.CONST(tmp.getKey()),
                            tmp.getValue());
                }
            } else {
                this.UTsetVarValue(me.getKey(), merged.state(vtype));
            }
        }
    }

    public boolean compareChangeTrackers(ChangeTracker ch1, ChangeTracker ch2){
        {
            Iterator<Entry<String, varState>> it = ch1.deltas.entrySet().iterator();
            while(it.hasNext()){
                Entry<String, varState> me =  it.next();
                String nm = me.getKey();
                varState av1 = me.getValue();
                if(ch2.deltas.containsKey( nm )){
                    //This means the me.getKey() was modified on both branches.
                    varState av2 = ch2.deltas.get( nm );

                    if( !av1.compare(av2, vtype) ) return false;
                }else{
                    varState av2 = this.UTvarState(me.getKey());
                    if( !av1.compare(av2, vtype) ) return false;
                }
            }
        }

        {
            Iterator<Entry<String, varState>> it = ch2.deltas.entrySet().iterator();
            while(it.hasNext()){
                Entry<String, varState> me =  it.next();
                String nm = me.getKey();
                varState av2 = me.getValue();
                if(!ch1.deltas.containsKey( nm )){
                    varState av1 = this.UTvarState(me.getKey());
                    if( !av1.compare(av2, vtype) ) return false;
                }
            }
        }
        return true;
    }



    public abstractValue pathCondition(boolean includeReturnCond) {
        abstractValue val;
        if (changeTracker != null) {
            val = vtype.not(assertHelper(changeTracker, false, includeReturnCond));
        } else {
            if (includeReturnCond) {
                val = vtype.not(getRvflag().state(vtype));
            } else {
                val = vtype.CONST(0);
            }
            if (vtype instanceof NtsbVtype) {
                val = vtype.and(val, vtype.BOTTOM("<#PC >"));
            }
        }
        return val;
    }

    public abstractValue pathConditionBis() {
        abstractValue val = vtype.not(getRvflag().state(vtype));
        for (ChangeTracker tmpTracker = changeTracker;
                tmpTracker != null; tmpTracker = tmpTracker.kid )
        {
            if (! tmpTracker.hasCondVal ())
                continue;
            abstractValue nestCond = tmpTracker.getCondVal ();
            if(val != null){
                val = vtype.and(val, nestCond );
            }else{
                val = nestCond;
            }
        }
        if(val == null){ return vtype.CONST(1); }
        return val;
    }


    public abstractValue assertHelper(ChangeTracker tmpTracker, boolean isSuper,
            boolean includeReturnCond)
    {
        abstractValue nestCond;
        if(tmpTracker.isMethodBoundary() && isSuper){
            return vtype.CONST(0);
        }
        
        if(tmpTracker.hasCondVal()){
            nestCond = vtype.not(tmpTracker.getCondVal ());
        }else{
            nestCond = vtype.CONST(0);
        }
        if(tmpTracker.kid == null){
            if (includeReturnCond) {
                nestCond = vtype.or(nestCond, getRvflag().state(vtype));
                if (vtype instanceof NtsbVtype) {
                    nestCond = vtype.or(nestCond, vtype.not(vtype.BOTTOM("<#PC >")));
                }
                return nestCond;
            } else {
                if (vtype instanceof NtsbVtype) {
                    nestCond = vtype.or(nestCond, vtype.not(vtype.BOTTOM("<#PC >")));
                }
                return nestCond;
            }
        }else{
            return vtype.or(nestCond,
                    assertHelper(tmpTracker.kid, isSuper, includeReturnCond));
        }       
    }
    
    public void Assert(abstractValue val, StmtAssert stmt) {
        /* Compose complex expression by walking all nesting conditionals. */
        int isSuper = stmt.isSuper();
        if(changeTracker != null && isSuper != StmtAssert.UBER){        
            val =
                    vtype.or(
                            val,
                            assertHelper(changeTracker, isSuper == StmtAssert.SUPER, true));
        }else{
            if(isSuper != StmtAssert.UBER){
                if (vtype instanceof NtsbVtype) {
                    val = vtype.or(val, vtype.not(vtype.BOTTOM("<#PC >")));
                }
                val = vtype.or(val, getRvflag().state(vtype) );
            }
        }

        /*
         * The recursive procedure makes it easier to find common subexpressions. The hope
         * is that that will make the problem easier for the SAT solver to solve. for
         * (ChangeTracker tmpTracker = changeTracker; tmpTracker != null; tmpTracker =
         * tmpTracker.kid ) { if (! tmpTracker.hasCondVal ()) continue; abstractValue
         * nestCond = vtype.not(tmpTracker.getCondVal ()); val = vtype.or(val, nestCond );
         * }
         */
        vtype.Assert(val, stmt);
    }

    public void Assume(abstractValue val, StmtAssume stmt) {
        if (changeTracker != null) {
            val = vtype.or(val, assertHelper(changeTracker, false, true));
        } else {
            /*There should be no assumes in nested calls, so the caller path condition is irrelevant.
            if (vtype instanceof NtsbVtype) {
                val = vtype.or(val, vtype.not(vtype.BOTTOM("<#PC >")));
            }*/
            val = vtype.or(val, getRvflag().state(vtype));
        }
        vtype.Assume(val, stmt);
    }


    
    public void setVarValueLight(String var, abstractValue val){
        if(var.equals(rvname)){
            freturn(val);
            return;
        }
       var = this.transName(var);       
       UTsetVarValue(var,val);
    }
    
    
    public void setVarValue(String var, abstractValue val){
        if(var.equals(rvname)){
            freturn(val);
            return;
        }
       var = this.transName(var);
        if (cvmap != null && cvmap.contains(var) && !useRetTracker) {
           if(val.isVect()){
               val = getVecTernaryValue(var, val);
           }else{
               val = vtype.ternary(getRvflag().state(vtype), UTvarValue(var), val) ;
           }
       }
       UTsetVarValue(var,val);
    }
    
    private abstractValue getVecTernaryValue(String var, abstractValue val){
        List<abstractValue> lv = val.getVectValue();
        abstractValue av = UTvarValue(var);
        if (!av.isVect()) {
            return vtype.ternary(getRvflag().state(vtype), av, lv.get(0));
        }
        List<abstractValue> ov = av.getVectValue();
//System.out.println(" lv: " + " " + lv + lv.size() + " ov: " + ov + " " + ov.size());
        assert av.isVect() : "NYI!";
//        assert lv.size() == ov.size() : "NYI~";
// XZL hacking don't know if it's correct
	assert lv.size() >= ov.size() : "NYI~";
        List<abstractValue> tt = new ArrayList<abstractValue>(ov.size());
        Iterator<abstractValue> lvit = lv.iterator();
        for(abstractValue ovit : ov){
            assert lvit.hasNext() : "UNREACHABLE";
            tt.add(vtype.ternary(getRvflag().state(vtype), ovit, lvit.next()));                    
        }
        return vtype.ARR(tt);
    }
    
    public void setVarValue(String var, abstractValue idx, abstractValue val){
        var = this.transName(var);
        if (cvmap.contains(var) && !useRetTracker) {
            if(val.isVect()){
                assert idx == null : "NYI";
                val = getVecTernaryValue(var, val);
            }else{
                if(idx == null){
                    val = vtype.ternary(getRvflag().state(vtype), UTvarValue(var), val) ;
                }else{
                    abstractValue oldv = UTvarValue(var);
                    val = vtype.ternary(getRvflag().state(vtype), vtype.arracc(oldv, idx, null, true) , val) ;
                }
            }
        }
        if( idx != null)
            UTsetVarValue(var, idx, val);
        else
            UTsetVarValue(var, val);
    }


    public ChangeTracker popChangeTracker(){        
        ChangeTracker tmp = changeTracker;
        changeTracker = changeTracker.kid;
        changeTrackers--;
        return tmp;
    }


    /**
     *
     * Make all global variables volatile.
     *
     */
    public void pushParallelSection(){
        pushParallelSection(vars.keySet());
    }
    /**
     *
     * Make all the global variables listed in the modified set volatile.
     *
     * @param modified
     */
    public void pushParallelSection(Set<String> modified){

        if(modified != vars.keySet()){
            Set<String> vset = vars.keySet();
            Set<String> tmp = new HashSet<String>();
            for(String v : modified){
                String t = this.transName(v);
                if(vset.contains(t)){
                    tmp.add(t);
                }
            }
            modified = tmp;
        }

        pushChangeTracker(null, false);
        for(Iterator<String> it = modified.iterator(); it.hasNext(); ){
            varState vs = changeTracker.addToDeltas(it.next());
            vs.makeVolatile();
        }
    }

    public void popParallelSection(){
        ChangeTracker ch1 = popChangeTracker();
        {
            Iterator<Entry<String, varState>> it2 = ch1.deltas.entrySet().iterator();
            while(it2.hasNext()){
                Entry<String, varState> me =  it2.next();
                varState merged = me.getValue();
                if( merged.isArr() ){
                    for(Iterator<Entry<Integer, abstractValue>> ttt = merged.iterator(); ttt.hasNext(); ){
                        Entry<Integer, abstractValue> tmp  = ttt.next();
                        this.UTsetVarValue(me.getKey(), vtype.CONST(tmp.getKey()),  tmp.getValue() );
                    }
                }else{
                    this.UTsetVarValue(me.getKey(),   merged.state(vtype) );
                }
            }
        }

    }


    public void pushChangeTracker (abstractValue cond, boolean isNegated){
        /* Add new change tracker layer, including nesting conditional
         * expression and value. */
        ChangeTracker oldChangeTracker = changeTracker;
        changeTracker = new ChangeTracker (cond, isNegated);
        changeTracker.kid = oldChangeTracker;
        changeTrackers++;
    }

    public void pushReturnTracker(abstractValue cond, boolean isNegated) {
        /*
         * Add new change tracker layer, including nesting conditional expression and
         * value.
         */
        ChangeTracker oldChangeTracker = returnTracker;
        returnTracker = new ChangeTracker(cond, isNegated);
        returnTracker.kid = oldChangeTracker;
    }

    /** Returns a set of the TRANSLATED variables names that are currently
     * in scope. */
    public Set<String> getVarsInScope () {
        return vars.keySet ();
    }


    public void varDeclare(String var, Type t){
//       System.out.println("DECLARED " + var);
        assert var != null : "NOO!!";
        String newname = varTranslator.varDeclare(var);
        assert !vars.containsKey(newname): "You are redeclaring variable "  + var + ":" + t + "   " + newname;
        varState    tv = vtype.cleanState(newname, t, this);
        vars.put(newname, tv);
    }
    
    public void outVarDeclare(String var, Type t){
//      System.out.println("DECLARED " + var);
       assert var != null : "NOO!!";
       String newname = varTranslator.varDeclare(var);
       assert !vars.containsKey(newname): "You are redeclaring variable "  + var + ":" + t + "   " + newname;
       varState    tv = vtype.cleanState(newname, t, this);
        /*
         * if (t instanceof TypeArray) { TypeArray ta = (TypeArray) t; Integer i =
         * ta.getLength().getIValue(); if (i == null) { System.out.println(var);
         * tv.update(vtype.CONST(ta.getBase().defaultValue().getIValue()), vtype); } }
         */
       vars.put(newname, tv);
        // if (!tv.checkSpecial()) {
            cvmap.add(newname);
        // }
   }


    public abstractValue varValue(String var){
        assert var != null : "NOO!!";
        var = this.transName(var);
        return UTvarValue(var);
    }

    public Type varType(String var){
        assert var != null : "NOO!!";
        var = this.transName(var);
        varState vs = UTvarState(var);
        return vs.getType();
    }


    
    
    

    public Level pushLevel(String msg) {
        return pushLevel(new Level(msg));
    }
    
    public Level pushLevel(Level lvl) {
        varTranslator = varTranslator.pushLevel();
        levels.push(lvl);
        return lvl;
    }

    public void popLevel(Level toPop) {
        assert !toPop.isDead : "already popped " + toPop;
        if (!(levels.peek() == toPop)) {
            printFailure("popLevel() wasn't called by", levels.peek());
            printFailure("to pop", toPop);
            Exception ex = new Exception();
            ex.printStackTrace();
            assertFalse();
        }
        varTranslator = varTranslator.popLevel(vars, changeTracker);
        boolean chk = (levels.pop() == toPop);
        assert chk;
        toPop.isDead = true;
    }

    public Level pushFunCall(String comment) {
        Level lvl = pushLevel("[pushFunCall] " + comment);
        if(changeTracker != null){
            changeTracker.pushMethodBoundary();
        }
        return lvl;
    }
    public void popFunCall(Level lvl){
        popLevel(lvl);
        if(changeTracker != null){
            assert changeTracker.isMethodBoundary();
            changeTracker.popMethodBoundary();
        }
    }
    
    public static final String RVFLAG = "_rvf";
    varState rvflag;
    int rvfcnt = 0;
    String rvname;
    Stack<String> rvnamestack = new Stack<String>();
    Stack<varState> rvstack = new Stack<varState>();
    Stack<Set<String>> outparStack = new Stack<Set<String>>();
    Set<String> cvmap; // Set of output parameter names.
    public Level beginFunction(String fname){
        Level lvl = pushLevel("[beginFunction] " + fname);
        if(rvflag != null){ rvstack.push(rvflag); }
        if(cvmap != null){outparStack.push(cvmap);} 
        if(rvname != null){ rvnamestack.push(rvname); }
        rvname = RVFLAG + rvfcnt;
        rvflag = vtype.cleanState(rvname, TypePrimitive.bittype, this);
        rvflag.update(vtype.CONST(0), vtype);
        
        cvmap = new HashSet<String>();   
        return lvl;
    }

    public void handleReturnTrackers() {
        while (returnTracker != null) {
            procChangeTrackers(returnTracker);
            returnTracker = returnTracker.kid;
        }
    }

    public void endFunction(Level lvl) {
        popLevel(lvl);
        if(!rvstack.isEmpty()){ rvflag = rvstack.pop(); rvname = rvnamestack.pop() ; cvmap = outparStack.pop(); }else{ rvflag = null; }
    }
}
