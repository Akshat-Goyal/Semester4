package sketch.compiler.stencilSK;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import sketch.compiler.ast.core.FEContext;
import sketch.compiler.ast.core.Function;
import sketch.compiler.ast.core.Function.FcnType;
import sketch.compiler.ast.core.Parameter;
import sketch.compiler.ast.core.exprs.ExprBinary;
import sketch.compiler.ast.core.exprs.ExprVar;
import sketch.compiler.ast.core.exprs.Expression;
import sketch.compiler.ast.core.stmts.Statement;
import sketch.compiler.ast.core.stmts.StmtBlock;
import sketch.compiler.ast.core.stmts.StmtIfThen;
import sketch.compiler.ast.core.stmts.StmtReturn;
import sketch.compiler.ast.core.stmts.StmtVarDecl;
import sketch.compiler.ast.core.typs.Type;
import sketch.compiler.ast.core.typs.TypePrimitive;

/**
 *
 * This class represents an abstracted dense array.
 * We are assuming that output out[idx] is computed from
 * inputs { in[ex1(idx)], in[ex2(idx)]...,in[exn(idx)] }.
 * The expressions are stored in the idxArr class.
 *
 * The function will have parameters in the following order.
 * ( index parameters, outIndexParameters, symbolic parameters, otherParams, globalParameters).
 * There are exactly dim index parameters.
 * The global parameters include the global index parameters.
 *
 * @author asolar
 *
 */


public class AbstractArray {
	Type arrType;
	public static String IDXNAME="i";
	public static String outIndexParamName(int i){
		return "OUT_" + IDXNAME + "_" + i;
	}
	String arrName;
	String suffix;
	int dim;

	/**
	 * This class represents the different expressions that can index this array in the
	 * spec.
	 */
	List<Expression[] > idxArr;


	/**
	 * They correspond to the current index of the output.
	 * These are here because remember we are looking for indices relative
	 * to the output indices, so we need to know what the output indices are.
	 */
	List<StmtVarDecl> outIndexParameters;

	/**
	 * Other parameters used in the expressions.
	 */
	List<StmtVarDecl> otherParams;

	/**
	 * Global parameters used in the expressions.
	 */
	List<StmtVarDecl> globalParams;

	public void addAssignStruct(AssignStruct ass, List<Expression> indices){
		/*
		 * I need to get the output indices from the assign structure,
		 * and then replace them with the outIndexParameters in each
		 * of the indices.
		 */

		assert indices.size() == this.dim;
		assert ass.indices.size() == outIndexParameters.size() : " This is because we require the lhs to be equal tou out[i,j,k]";
		Expression[] expr = new Expression[dim];
		int i=0;
		for(Iterator<Expression> inIdxIt = indices.iterator(); inIdxIt.hasNext(); ++i){
			Expression inIdx = inIdxIt.next();
			Iterator<StmtVarDecl> outIdxNewIt = outIndexParameters.iterator();
			for(Iterator<Expression> outIdxOldIt = ass.indices.iterator(); outIdxOldIt.hasNext(); ){
				Expression outIdxOld = outIdxOldIt.next();
				assert outIdxOld instanceof ExprVar : "Currently, it is assumed that the spec only has assignments of the form "
														+ "out[i,j,k] = blah; so the ori indices must be single variables.";
				ExprVar outIdxOldVar = (ExprVar) outIdxOld;
				StmtVarDecl svd = outIdxNewIt.next();

				inIdx = (Expression)  inIdx.accept(new VarReplacer(outIdxOldVar.getName(), new ExprVar(svd, svd.getName(0))));
			}
			expr[i] = inIdx;
		}
		for(int t=0; t<idxArr.size(); ++t){
			Expression[] e1 = idxArr.get(t);
			Expression[] e2 = expr;
			if( e1.length ==  e2.length ){
				int eqn = 0;
				for(int tt=0; tt< e1.length; ++tt ){
					if( e1[tt].toString().equals(e2[tt].toString())   ){
						++eqn;
					}
				}
				if(eqn == e1.length){
					return;
				}
			}
		}
		idxArr.add(expr);
	}

	public void makeDefault(int vars){
		for(int i=0; i<vars; ++i){
			Expression[] expr = new Expression[dim];
			idxArr.add( expr );
			String vname = symParamName(i);
			for(int j=0; j<dim; ++j){
				String lvn = vname + "_" + j;
				StmtVarDecl op = new StmtVarDecl((FEContext) null, TypePrimitive.inttype, lvn , null);
				otherParams.add(op);
				//Note that we are adding stuff to the global parameters.
				expr[ j ] = new ExprVar((FEContext) null ,lvn);
			}
		}
	}


	AbstractArray(String arrName, Type arrType, String suffix, int dim, List<StmtVarDecl> globalParams, List<StmtVarDecl> outIdxParams){
		this.arrName = arrName;
		this.suffix = suffix;
		this.dim = dim;
		this.globalParams = globalParams;
		this.outIndexParameters = outIdxParams;
		this.idxArr = new ArrayList<Expression[]>();
		this.otherParams = new ArrayList<StmtVarDecl>();
		this.arrType = arrType;
	}


	public void addParamsToFunction(List<StmtVarDecl> svd){

		for(int i=0; i<numSymParams(); ++i){
			StmtVarDecl obj = new StmtVarDecl((FEContext) null, this.arrType, symParamName(i) , null) ;
			svd.add(obj);
		}
		for(Iterator<StmtVarDecl> it = otherParams.iterator(); it.hasNext(); ){
			svd.add(  it.next() );
		}
	}

	public String getFullName(){
		return arrName + "_" + suffix;
	}

	public String symParamName(int i){
		return getFullName() + "_" + i;
	}

	protected String idxParamName(int i){
		return IDXNAME + i;
	}

	public int numSymParams(){
		return idxArr.size();
	}

	public String toString(){
		String s = getFullName() + "( ";
		String body="";
		//( index parameters, outIndexParameters, symbolic parameters, otherParams, globalParameters).
		for(int i=0; i<dim; ++i){
			s += "int " + idxParamName(i) + ", ";
		}

		for(Iterator<StmtVarDecl> it = outIndexParameters.iterator(); it.hasNext(); ){
			s +=  it.next() + ", ";
		}


		int i=0;
		for(Iterator<Expression[]> it = idxArr.iterator(); it.hasNext(); ++i ){
			String spname = symParamName(i);
			s += "int " +  spname;
			Expression[] earr = it.next();
			s += ", ";
			body += "if ( " ;
			for(int j=0; j<dim; ++j){
				body += idxParamName(j) + "==" + earr[j];
				if( j != dim-1) body += " && ";
			}
			body += ") return "  + spname + "; \n";
		}

		for(Iterator<StmtVarDecl> it = otherParams.iterator(); it.hasNext(); ){
			s += it.next() + ", ";
		}

		for(Iterator<StmtVarDecl> it = globalParams.iterator(); it.hasNext(); ){
			s += it.next() + ", ";
		}

		s += "){ \n" + body + "}\n";
		return s;
	}

	private static final List<Parameter> makeParams(List<StmtVarDecl> ls) {
		return makeParams(ls,Parameter.IN);
	}
	private static final List<Parameter> makeParams(List<StmtVarDecl> ls, int ptype) {
		return makeParams(ls.iterator(),ptype);
	}
	private static final List<Parameter> makeParams(Iterator<StmtVarDecl> it, int ptype) {
		List<Parameter> ret=new ArrayList<Parameter>();
		while(it.hasNext()) {
			StmtVarDecl var=it.next();
			for(int i=0;i<var.getNumVars();i++)
                ret.add(new Parameter(var, var.getType(i), var.getName(i), ptype));
		}
		return ret;
	}
	private final Expression aggregateExp(Expression[] exprs, int s, int f) {
		assert 0<=s && s<f && f<=exprs.length;
		if(s==f-1) return new ExprBinary(null,ExprBinary.BINOP_EQ,
			new ExprVar((FEContext) null,idxParamName(s)), exprs[s]);
		return new ExprBinary(null,ExprBinary.BINOP_AND,
			aggregateExp(exprs,s,s+1),
			aggregateExp(exprs,s+1,f));
	}

	public Function toAST() {
		List<Parameter> params=new ArrayList<Parameter>();
		{
			//index parameters, outIndexParameters, symbolic parameters, otherParams, globalParameters
			for(int i=0; i<dim; ++i){
                params.add(new Parameter(null, TypePrimitive.inttype, idxParamName(i)));
			}
			params.addAll(makeParams(outIndexParameters));
			for(int i=0;i<idxArr.size();i++){
                params.add(new Parameter(null, this.arrType, symParamName(i)));
			}
			params.addAll(makeParams(otherParams));
			params.addAll(makeParams(globalParams));
		}
		List<Statement> stmts=new ArrayList<Statement>();
		{
			for(int i=0; i<idxArr.size();i++){
				String spname = symParamName(i);
				Expression[] earr = idxArr.get(i);
				Expression condition=aggregateExp(earr,0,dim);
				Statement retStmt=new StmtReturn((FEContext) null,new ExprVar((FEContext) null,spname));
				Statement ifStmt=new StmtIfThen((FEContext) null,condition,retStmt,null);
				stmts.add(ifStmt);
			}
		}
		Statement body=new StmtBlock((FEContext) null,stmts);
        return Function.creator(body, getFullName(), FcnType.Generator).returnType(arrType).params(
                params).body(body).create();
	}

}
