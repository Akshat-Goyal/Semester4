package sketch.compiler.ast.core.exprs;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

import sketch.compiler.ast.core.FEContext;
import sketch.compiler.ast.core.FENode;
import sketch.compiler.ast.core.FEReplacer;
import sketch.compiler.ast.core.FEVisitor;

/**
 * Expression that represents a lambda expression. A lambda expression is of the
 * form
 * 
 * <br>
 * <br>
 * <code>(x, y) -> x + y</code> <br>
 * <br>
 * 
 * The left hand side is a list of ExprVar and the right hand side is an
 * expression.
 * 
 * 
 * @author Miguel Velez
 * @version 0.1
 */
public class ExprLambda extends Expression {

	private List<ExprVar> 	parameters;
	private Expression		expression;
	private static int missingVariableCount = 0;

	public ExprLambda(FENode node) {
		super(node);
	}

	/**
	 * Create a new lambda expression by passing context, a variable list, and
	 * an expression.
	 * 
	 * @param context
	 * @param variableList
	 * @param expression
	 */
	public ExprLambda(FEContext context, List<ExprVar> variableList, Expression expression) {
		super(context);
		this.parameters = variableList;
		this.expression = expression;
	}

	/**
	 * Create a new lambda expression by passing context, a variable list, and
	 * an expression
	 * 
	 * @param context
	 * @param variableList
	 * @param expression
	 */
	public ExprLambda(FENode context, List<ExprVar> variableList, Expression expression) {
		super(context);
		this.parameters = variableList;
		this.expression = expression;
	}

	/**
	 * Return a list of the variables in the scope of the lambda expression that
	 * are used but are not part of the formal parameters.
	 * 
	 * @return
	 */
	public Map<ExprVar, ExprVar> getMissingFormalParameters() {
		Map<ExprVar, ExprVar> variablesInScopeInExpression = new HashMap<ExprVar, ExprVar>();
		
		// Create an expression analyzer
		ExpressionAnalyzer expressionAnalyzer = new ExpressionAnalyzer();
		
		// Analyze the expression
		this.expression.accept(expressionAnalyzer);
		
		// Get the local variables in scope
		variablesInScopeInExpression = expressionAnalyzer.getVariablesInScopeInExpression();
		
		// Return
		return variablesInScopeInExpression;
	}

	@Override
	public Object accept(FEVisitor visitor) {
		// Visit a lambda expression
		return visitor.visitExprLambda(this);
	}

	/**
	 * Get the parameters of the lambda expression
	 * 
	 * @return
	 */
	public List<ExprVar> getParameters() {
		return this.parameters;
	}

	/**
	 * Set the parameters of the lambda expression
	 * 
	 * @param parameters
	 */
	public void setParameteres(List<ExprVar> parameters) {
		this.parameters = parameters;
	}

	/**
	 * Get the expression from the lambda expression
	 * 
	 * @return
	 */
	public Expression getExpression() {
		return this.expression;
	}

	/**
	 * Set the expression from the lambda expression
	 * 
	 * @param expression
	 */
	public void setExpression(Expression expression) {
		this.expression = expression;
	}

	@Override
	public String toString() {
		return this.parameters.toString() + " -> " + this.expression.toString();
	}

	private class ExpressionAnalyzer extends FEReplacer {

		private final Map<ExprVar, ExprVar> missingFormalParameters;

		public ExpressionAnalyzer() {
			this.missingFormalParameters = new HashMap<ExprVar, ExprVar>();
		}

		public Object visitExprLambda(ExprLambda exprLambda) {
			// If there is a lambda in a function call, we just return it
			return exprLambda;
		}

		public Object visitExprVar(ExprVar exprVar) {
			// If the parameters does not contain the variable in the expression
			// and the variable has not been already added to the list
			if (!parameters.contains(exprVar)
					&& !this.missingFormalParameters.containsKey(exprVar)) {
				// Create a fresh variable
				ExprVar newVar = new ExprVar(exprVar.getCx(), exprVar.getName() + missingVariableCount);

				// Add it to the list of variables in expression
				this.missingFormalParameters.put(exprVar, newVar);
				
				// Increment the number of missing variables
				missingVariableCount++;
			}

			return super.visitExprVar(exprVar);
		}

		/**
		 * Return a list of variables in scope that the expression uses
		 */
		public Map<ExprVar, ExprVar> getVariablesInScopeInExpression() {
			return this.missingFormalParameters;
		}

	}

}
