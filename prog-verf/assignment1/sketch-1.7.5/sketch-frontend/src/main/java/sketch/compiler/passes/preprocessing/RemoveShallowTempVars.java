package sketch.compiler.passes.preprocessing;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

import sketch.compiler.ast.core.FEReplacer;
import sketch.compiler.ast.core.Function;
import sketch.compiler.ast.core.Parameter;
import sketch.compiler.ast.core.exprs.*;
import sketch.compiler.ast.core.exprs.ExprArrayRange.RangeLen;
import sketch.compiler.ast.core.stmts.Statement;
import sketch.compiler.ast.core.stmts.StmtAssign;
import sketch.compiler.ast.core.stmts.StmtExpr;
import sketch.compiler.ast.core.stmts.StmtIfThen;
import sketch.compiler.ast.core.stmts.StmtVarDecl;
import sketch.compiler.ast.core.typs.StructDef;
import sketch.compiler.ast.core.typs.Type;
import sketch.compiler.ast.core.typs.TypeArray;
import sketch.compiler.ast.core.typs.TypePrimitive;

/**
 * Simple pass to get rid of temporary variables that only pollute the output code. We
 * call such temporary variables shallow temporary variables; the class MarkShallowTemps
 * determines if a temporary variable is shallow, and if it is, it gets replaced with its
 * definition.
 * 
 * @author asolar
 */
public class RemoveShallowTempVars extends FEReplacer {
    

    final int Kcount;

    public RemoveShallowTempVars() {
        this.Kcount = 1;
    }

    public RemoveShallowTempVars(int Kcount) {
        this.Kcount = Kcount;
    }

    class IsSimpleExpr extends FEReplacer{
        boolean isSimple = true;
        boolean isBig = false;

        public Object visitExprBinary(ExprBinary eb) {
            isBig = true;
            return super.visitExprBinary(eb);
        }

        public Object visitExprField(ExprField ef) {
            isSimple = false;
            isBig = true;
            return ef;
        }

        public Object visitExprTernary(ExprTernary et){
            isSimple = false;
            isBig = true;
            return super.visitExprTernary(et);
        }
        
        public Object visitExprFunCall(ExprFunCall efc){
            isSimple = false;
            return super.visitExprFunCall(efc);
        }
        
        public Object visitExprTypeCast(ExprTypeCast etc){
            isSimple = false;
            return super.visitExprTypeCast(etc);
        }
        
        public Object visitExprArrayRange(ExprArrayRange ear){
            RangeLen rl = ear.getSelection();
            if (rl.hasLen() || !(rl.start() instanceof ExprConstInt)) {
                isSimple = false;
            }
            return super.visitExprArrayRange(ear);
        }
        public Object visitExprArrayInit(ExprArrayInit eai){
            isSimple = false;
            return super.visitExprArrayInit(eai);
        }
        
    }
    
    IsSimpleExpr ise = new IsSimpleExpr();
    
    boolean isBig(Expression e) {
        ise.isBig = false;
        e.accept(ise);
        return ise.isBig;
    }

    boolean checkSimple(Expression e){
        ise.isSimple = true;
        e.accept(ise);
        return ise.isSimple;
    }

    /**
     * In order to determine whether a temporary variable is shallow, we check
     * 
     * @author asolar
     */
    class MarkShallowTemps extends FEReplacer{
        final int Kcount;
        Map<String, Boolean> isShallow = new HashMap<String, Boolean>();
        Map<String, String> dependsOn = new HashMap<String, String>();
        Map<String, Integer> useCount = new HashMap<String, Integer>();
        Map<String, Expression> vals = new HashMap<String, Expression>();

        public MarkShallowTemps(int Kcount) {
            this.Kcount = Kcount;
        }
        boolean shallow(String name){
            if(isShallow.containsKey(name)){
                return isShallow.get(name);
            }
            return false;
        }
        public Object visitStmtVarDecl(StmtVarDecl svd){
            for (int i = 0; i < svd.getNumVars(); i++)
            {
                final String name = svd.getName(i);
                Type t = svd.getType(i);
                if(t instanceof TypePrimitive){
                    if(svd.getInit(i) != null && checkSimple(svd.getInit(i)) ){
                        isShallow.put(name, true);
                        svd.getInit(i).accept(new FEReplacer() {
                            public Object visitExprVar(ExprVar ev) {
                                dependsOn.put(ev.getName(), name);
                                return ev;
                            }
                        });
                        if (isBig(svd.getInit(i))) {
                            useCount.put(name, Kcount);
                        }
                    }else{
                        isShallow.put(name, false);
                    }
                } else {
                  /* This test would make the pass more conservative, but I don't think it's necessary. 
                   * if (t instanceof TypeArray) {
                        t.accept(new FEReplacer() {
                            public Object visitExprVar(ExprVar ev) {
                                isShallow.put(ev.getName(), false);
                                return ev;
                            }
                        });
                    }*/
                    if (t instanceof TypeArray &&
                            ((TypeArray) t).getBase() instanceof TypePrimitive)
                    {
                        if (svd.getInit(i) != null && checkSimple(svd.getInit(i))) {
                            isShallow.put(name, true);
                            if (isBig(svd.getInit(i))) {
                                useCount.put(name, 1);
                            }
                        } else {
                            isShallow.put(name, false);
                        }
                    } else {
                        isShallow.put(name, false);
                    }
                }
            }
            return super.visitStmtVarDecl(svd);
        }
        
        public Object visitExprArrayRange(ExprArrayRange ear) {
            Expression e = ear.getBase();
            if (e instanceof ExprVar) {
                isShallow.put(e.toString(), false);
            }
            return super.visitExprArrayRange(ear);
        }

        public Object visitStmtAssign(StmtAssign sa){
            if(sa.getLHS() instanceof ExprVar){
                String name = sa.getLHS().toString();
                isShallow.put(name, false);
                if (dependsOn.containsKey(name)) {
                    isShallow.put(dependsOn.get(name), false);
                }
            }
            if (sa.getLHS() instanceof ExprArrayRange) {
                String name = ((ExprArrayRange) sa.getLHS()).getAbsoluteBase().toString();
                isShallow.put(name, false);
                if (dependsOn.containsKey(name)) {
                    isShallow.put(dependsOn.get(name), false);
                }
            }
            return super.visitStmtAssign(sa);
        }
        
        public Object visitExprVar(ExprVar ev) {
            String name = ev.getName();
            if (useCount.containsKey(name)) {
                int i = useCount.get(name);
                if (i > 0) {
                    useCount.put(name, i - 1);
                } else {
                    isShallow.put(name, false);
                }
            }
            return super.visitExprVar(ev);
        }

        public Object visitExprFunCall(ExprFunCall efc){            
            Function f = RemoveShallowTempVars.this.nres.getFun(efc.getName());
            Iterator<Parameter> piter = f.getParams().iterator();
            
            for(Expression fp : efc.getParams()){
                Parameter p = piter.next();
                if(p.isParameterOutput()){
                    if(fp instanceof ExprVar){
                        isShallow.put(((ExprVar) fp).getName(), false);
                    }
                }
            }
            return super.visitExprFunCall(efc);
        }
        
        
    }
    
    MarkShallowTemps mst;
    
    public Object visitFunction(Function f){
        mst = new MarkShallowTemps(Kcount);
        f.accept(mst);
        return super.visitFunction(f);
    }

    public Object visitStructDef(StructDef ts) {
        return ts;
    }
    
    public Object visitExprVar(ExprVar ev){
        if(mst.shallow(ev.getName())){
            return mst.vals.get(ev.getName());
        }else{
            return ev;
        }
    }
    
    public Object visitStmtIfThen(StmtIfThen stmt) {
        Expression newCond = doExpression(stmt.getCond());
        Statement newCons =
                stmt.getCons() == null ? null : (Statement) stmt.getCons().accept(this);
        Statement newAlt =
                stmt.getAlt() == null ? null : (Statement) stmt.getAlt().accept(this);
        Integer cval = newCond.getIValue();
        if (cval != null) {
            if (cval == 1) {
                return newCons;
            } else {
                return newAlt;
            }
        }
        if (newCond == stmt.getCond() && newCons == stmt.getCons() &&
                newAlt == stmt.getAlt())
            return stmt;
        if (newCons == null && newAlt == null) {
            return new StmtExpr(stmt, newCond);
        }

        return new StmtIfThen(stmt, newCond, newCons, newAlt);
    }

    public Object visitStmtVarDecl(StmtVarDecl stmt){
        List<Expression> newInits = new ArrayList<Expression>();
        List<Type> newTypes = new ArrayList<Type>();
        List<String> newNames = new ArrayList<String>();
        boolean changed = false;
        for (int i = 0; i < stmt.getNumVars(); i++)
        {
            String name = stmt.getName(i);
            if(mst.shallow(name)){
                mst.vals.put(name,doExpression(stmt.getInit(i)));
                changed = true;
            }else{
                Expression oinit = stmt.getInit(i);
                Expression init = null;
                if (oinit != null)
                    init = doExpression(oinit);
                Type ot = stmt.getType(i);
                Type t = (Type) ot.accept(this);
                if(ot != t || oinit != init){
                    changed = true;
                }
                newInits.add(init);
                newTypes.add(t);
                newNames.add(stmt.getName(i));
            }            
        }
        if(!changed){ return stmt; }
        if(newInits.size() == 0) return null;
        return new StmtVarDecl(stmt, newTypes,
                newNames, newInits);
        
    }
    
    
}
