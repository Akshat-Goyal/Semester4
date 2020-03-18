package sketch.compiler.codegenerators;

import java.util.Iterator;
import java.util.Map.Entry;

import sketch.compiler.ast.core.Function;
import sketch.compiler.ast.core.Program;
import sketch.compiler.ast.core.Package;
import sketch.compiler.ast.core.typs.Type;
import sketch.compiler.ast.core.typs.StructDef;

public class NodesToH extends NodesToC {

	private NodesToC _converter;
	private String filename; 
	
    public NodesToH(String filename, boolean pythonPrintStatements) {
        super(null, filename, pythonPrintStatements);
        _converter = new NodesToC(null, filename, pythonPrintStatements);
		this.filename=filename;
		this.addIncludes = false;
	}
	
	public String outputStructure(StructDef struct){
    	String result = "";
    	result += indent + "class " + escapeCName(struct.getName()) + "{\n  public:";
    	addIndent();
        for (Entry<String, Type> entry : struct) {
            result +=
                    indent + typeForDecl(entry.getValue()) + " " + entry.getKey() + ";\n";
        }
    	unIndent();
    	result += indent + "};\n";
    	return result;
    }
	
	
	@Override
	public Object visitProgram(Program prog)
	{
		String defname=filename.toUpperCase()+"_H";
		defname = defname.replace('.', '_');
		String ret="#ifndef "+defname+"\n";
		ret+="#define "+defname+"\n\n";
		ret+="#include \"bitvec.h\"\n";
		ret+="#include \"fixedarr.h\"\n";
		
		

		ret+=super.visitProgram(prog);
		ret+="\n#endif\n";
		return ret;
	}

	public Object visitPackage(Package spec){
		String result = "";
        nres.setPackage(spec);

        for (Iterator iter = spec.getStructs().iterator(); iter.hasNext();) {
            StructDef struct = (StructDef) iter.next();
            result += "class " + escapeCName(struct.getName()) + "; \n";
        }

        for (Iterator iter = spec.getStructs().iterator(); iter.hasNext();) {
            StructDef struct = (StructDef) iter.next();
            result += outputStructure(struct);
        }

		for (Iterator iter = spec.getFuncs().iterator(); iter.hasNext(); )
		{
			Function oldFunc = (Function)iter.next();            
			result += (String)oldFunc.accept(this);            
		}
		return result;
	}
	
	public Object visitFunction(Function func)
	{
        _converter.setNres(nres);
		String result = indent + "extern ";
		result += _converter.convertType(func.getReturnType()) + " ";
		result += escapeCName(func.getName());
		String prefix = null;
		result += _converter.doParams(func.getParams(), prefix) + ";\n";
		return result;
    }

}
