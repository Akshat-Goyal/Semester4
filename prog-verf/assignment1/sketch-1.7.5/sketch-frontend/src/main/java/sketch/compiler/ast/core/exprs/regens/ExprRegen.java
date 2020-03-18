/**
 *
 */
package sketch.compiler.ast.core.exprs.regens;
import sketch.compiler.ast.core.FEContext;
import sketch.compiler.ast.core.FENode;
import sketch.compiler.ast.core.FEVisitor;
import sketch.compiler.ast.core.exprs.Expression;
import sketch.compiler.parser.RegenParser;


/**
 * The container expression "{| expr |}" indicating that the enclosed expression contains
 * unknown choices and should be treated in regular-expression style. This is used for
 * generating choices in a regular-expression style. This kind of choices is just a
 * syntactic sugar and are always boiled down to using holes (ExprStar).
 */
public class ExprRegen extends Expression {

	private Expression expr;

	public ExprRegen (FENode cx, String gen) {
		super (cx);
		gen = gen.replaceAll(" ", "");
		this.expr = RegenParser.parse (gen.substring (2, gen.length () - 2),
									   cx.getCx ());
	}

	public ExprRegen (FENode cx, Expression expr) {
		super (cx);
		this.expr = expr;
	}

	/** @deprecated */
	public ExprRegen (FEContext cx, String gen) {
		super (cx);
		gen = gen.replaceAll(" ", "");
		try{
		this.expr = RegenParser.parse (gen.substring (2, gen.length () - 2),
									   cx);
		}catch(RuntimeException e){
			System.err.println(cx + ": Error Parsing regen " + gen );
			throw e;
		}
	}

	public Expression getExpr () { return expr; }

	public boolean isLValue () {
		return expr.isLValue ();
	}

	public String toString () {
		return "{| "+ expr +" |}";
	}

	@Override
	public Object accept (FEVisitor v) {
		return v.visitExprRegen (this);
	}

}
