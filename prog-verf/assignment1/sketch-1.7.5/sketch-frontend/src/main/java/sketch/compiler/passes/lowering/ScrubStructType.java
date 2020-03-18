package sketch.compiler.passes.lowering;
import sketch.compiler.ast.core.FEReplacer;
import sketch.compiler.ast.core.typs.TypePrimitive;
import sketch.compiler.ast.core.typs.StructDef;
import sketch.compiler.ast.core.typs.TypeStructRef;

public class ScrubStructType extends FEReplacer {
	
	 public Object visitStructDef (StructDef ts) {
	    	return TypePrimitive.inttype;	    	
	 }
	 public Object visitTypeStructRef (TypeStructRef t) {
	    return  TypePrimitive.inttype ;
	 }

}
