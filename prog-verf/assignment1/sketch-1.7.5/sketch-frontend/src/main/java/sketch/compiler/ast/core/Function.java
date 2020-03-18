package sketch.compiler.ast.core;

import static sketch.util.Misc.nonnull;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map.Entry;
import java.util.Set;
import java.util.Vector;

import sketch.compiler.ast.core.stmts.Statement;
import sketch.compiler.ast.core.typs.Type;
import sketch.compiler.ast.core.typs.TypePrimitive;
import sketch.util.datastructures.HashmapList;
import sketch.util.wrapper.ScRichString;

/**
 * A function definition. This contains the name, return type, parameter list, and body of
 * a function. Generators, harnesses, models and uninterpreted functions are special kinds
 * of functions with special properties (see Sketch language documentation).
 * 
 * @author gatoatigrado (nicholas tung) [email: ntung at ntung]
 * @license This file is licensed under BSD license, available at
 *          http://creativecommons.org/licenses/BSD/. While not required, if you make
 *          changes, please consider contributing back!
 */
public class Function extends FENode {


    public boolean hasAnnotation(String tag) {
        return annotations.containsKey(tag);
    }

    public Vector<Annotation> getAnnotation(String tag) {
        return annotations.getOrEmpty(tag);
    }

    public HashmapList<String, Annotation> getAnnotations() {
        return annotations;
    }

    public static enum FcnType {
        // Uninterpreted Function
        Uninterp("uninterp"),
        // Async functions used in promela to model forks.
        Async("async"),
        // Static function, non-generator.
        Static(""),
        // Harness function. Also static.
        Harness("harness"),
        // Indicates an auto-generated wrapper function that initializes globals, also
        // static.
        Wrapper(""),
        // Used for SMT solver, which is now unused. Email developers or look for notes on
        // wiki.
        BuiltinHelper("builtin helper"),
        // Function that is inlined, producing more star values. Also helper functions for
        // PROMELA.
        Generator("generator"),

        UninterpGenerator("generator"),

        // Init("init");
        Model("model");

        /** identifier appearing in C code */
        public final String cCodeName;

        private FcnType(String cCodeName) {
            this.cCodeName = cCodeName;
        }
    }

    public static enum FcnSolveType {
        // none if uninterpreted
        // use general SAT synthesis routine.
        Default(""),
        // stencil function
        Stencil("stencil");

        /** identifier appearing in C code */
        public final String cCodeName;

        private FcnSolveType(String cCodeName) {
            this.cCodeName = cCodeName;
        }
    }

    public static enum LibraryFcnType {
        Library, Default
    }

    public static enum PrintFcnType {
        Printfcn, Default
    }

    public static enum FcnSourceDeterministic {
        Deterministic, Unknown, Nondeterministic;
    }

    public static enum CudaFcnType {
        Default(""), DeviceInline("inline __device__"), Global("__global__"), Serial(
                "SERIAL");

        /** identifier appearing in C code */
        public final String cCodeName;

        private CudaFcnType(String cCodeName) {
            this.cCodeName = cCodeName;
        }
    }

    public static class FcnInfo {
        public final FcnType fcnType;
        public final LibraryFcnType libraryType;
        public final CudaFcnType cudaType;
        public final FcnSourceDeterministic determinsitic;
        public final PrintFcnType printType;
        public final FcnSolveType solveType;

        public FcnInfo(FcnType fcnType, LibraryFcnType libraryType, CudaFcnType cudaType,
                FcnSourceDeterministic determinsitic, PrintFcnType printType,
                FcnSolveType solveType)
        {
            this.fcnType = fcnType;
            this.libraryType = libraryType;
            this.cudaType = cudaType;
            this.determinsitic = determinsitic;
            this.printType = printType;
            this.solveType = solveType;
        }

        public FcnInfo(FcnType fcnType) {
            this(fcnType, LibraryFcnType.Default, CudaFcnType.Default,
                    FcnSourceDeterministic.Unknown, PrintFcnType.Default,
                    FcnSolveType.Default);
        }
    }

    private final List<String> fixes;

    private final String name; // or null
    private final Type returnType;
    private final List<Parameter> params;
    private final List<String> typeParams;
    private final Statement body;
    private final String fImplements;
    private final FcnInfo fcnInfo;
    private String pkg;
    private final HashmapList<String, Annotation> annotations;

    public Set<Entry<String, Vector<Annotation>>> annotationSet() {
        return annotations.entrySet();
    }

    /**
     * Factory class to generate new Function nodes.
     */
    public static class FunctionCreator {
        private Object base;
        private String name;
        private String pkg;
        private Type returnType;
        private List<Parameter> params;
        private List<String> fixes;
        private List<String> typeParams;
        private Statement body;
        private String implementsName;
        private FcnInfo fcnInfo;
        private HashmapList<String, Annotation> annotations =
                new HashmapList<String, Annotation>();

        protected FunctionCreator(Function base) {
            this.base = base;
            this.name = base.name;
            this.pkg = base.pkg;
            this.returnType = base.returnType;
            this.params = base.params;
            this.body = base.body;
            this.implementsName = base.fImplements;
            this.annotations = base.annotations;
            this.fcnInfo = base.getInfo();
            this.typeParams = base.typeParams;
            this.fixes = base.fixes;
        }

        public FunctionCreator(Object n) {
            assert (n == null) || (n instanceof FENode) || (n instanceof FEContext) : "node argument must be FENode or FEContext";
            this.base = n;
            this.name = null;
            this.returnType = TypePrimitive.voidtype;
            this.params = null;
            this.body = null;
            this.implementsName = null;
            this.fcnInfo = new FcnInfo(FcnType.Static);
            this.typeParams = new ArrayList<String>();
            this.fixes = new ArrayList<String>();
        }

        public FunctionCreator name(final String name) {
            this.name = name;
            return this;
        }

        public FunctionCreator pkg(final String pkg) {
            this.pkg = pkg;
            return this;
        }

        public FunctionCreator typeParams(final List<String> tp) {
            if (tp == null) {
                this.typeParams = new ArrayList<String>();
            } else {
                this.typeParams = tp;
            }
            return this;
        }

        public FunctionCreator returnType(final Type returnType) {
            this.returnType = returnType;
            return this;
        }

        public FunctionCreator params(final List<Parameter> params) {
            this.params = params;
            return this;
        }

        public FunctionCreator fixes(final List<String> fixes) {
            this.fixes = fixes;
            return this;
        }

        public FunctionCreator body(final Statement body) {
            this.body = body;
            return this;
        }

        public FunctionCreator spec(final String specName) {
            this.implementsName = specName;
            return this;
        }

        public FunctionCreator annotations(
                final HashmapList<String, Annotation> annotations)
        {
            if (annotations == null) {
                this.annotations.clear();
            } else {
                this.annotations = annotations;
            }
            return this;
        }

        public FunctionCreator annotation(String key, String annot) {
            this.annotations.append(key, new Annotation(body.getCx(), key, annot));
            return this;
        }

        public FunctionCreator type(final FcnType typ) {
            this.fcnInfo =
                    new FcnInfo(typ, this.fcnInfo.libraryType, this.fcnInfo.cudaType,
                            this.fcnInfo.determinsitic, this.fcnInfo.printType,
                            this.fcnInfo.solveType);
            return this;
        }

        public FunctionCreator libraryType(final LibraryFcnType typ) {
            this.fcnInfo =
                    new FcnInfo(this.fcnInfo.fcnType, typ, this.fcnInfo.cudaType,
                            this.fcnInfo.determinsitic, this.fcnInfo.printType,
                            this.fcnInfo.solveType);
            return this;
        }

        public FunctionCreator cudaType(final CudaFcnType typ) {
            this.fcnInfo =
                    new FcnInfo(this.fcnInfo.fcnType, this.fcnInfo.libraryType, typ,
                            this.fcnInfo.determinsitic, this.fcnInfo.printType,
                            this.fcnInfo.solveType);
            return this;
        }

        public FunctionCreator deterministicType(final FcnSourceDeterministic typ) {
            this.fcnInfo =
                    new FcnInfo(this.fcnInfo.fcnType, this.fcnInfo.libraryType,
                            this.fcnInfo.cudaType, typ, this.fcnInfo.printType,
                            this.fcnInfo.solveType);
            return this;
        }

        public FunctionCreator printType(final PrintFcnType typ) {
            this.fcnInfo =
                    new FcnInfo(this.fcnInfo.fcnType, this.fcnInfo.libraryType,
                            this.fcnInfo.cudaType, this.fcnInfo.determinsitic, typ,
                            this.fcnInfo.solveType);
            return this;
        }

        public FunctionCreator solveType(final FcnSolveType typ) {
            this.fcnInfo =
                    new FcnInfo(this.fcnInfo.fcnType, this.fcnInfo.libraryType,
                            this.fcnInfo.cudaType, this.fcnInfo.determinsitic,
                            this.fcnInfo.printType, typ);
            return this;
        }

        public Function create() {
            if (base == null || base instanceof FEContext) {
                return new Function((FEContext) base, fcnInfo, name, pkg, returnType,
                        params, typeParams,
                        implementsName, body, fixes, annotations);
            } else {
                return new Function((FENode) base, fcnInfo, name, pkg, returnType,
                        params, typeParams,
                        implementsName, body, fixes, annotations);
            }
        }
    }

    public FunctionCreator creator() {
        return new FunctionCreator(this);
    }

    public static FunctionCreator creator(FENode n, String name, FcnType type) {
        return (new FunctionCreator(n)).name(name).type(type);
    }

    public static FunctionCreator creator(FEContext ctx, String name, FcnType type) {
        return (new FunctionCreator(ctx)).name(name).type(type);
    }

    protected Function(FENode context, FcnInfo fcnInfo, String name, String pkg,
            Type returnType,
 List<Parameter> params, List<String> typeParams,
            String fImplements, Statement body,
            List<String> fixes,
            HashmapList<String, Annotation> annotations)
    {
        super(context);
        this.fcnInfo = fcnInfo;
        this.name = nonnull(name, "It's not allowed to create a function without a name");
        this.pkg = pkg;
        this.returnType = returnType;
        this.params = params;
        this.typeParams = typeParams;
        this.body = body;
        this.fImplements = fImplements;
        this.fixes = fixes;
        this.annotations = annotations;
        assert annotations != null;
    }

    @SuppressWarnings("deprecation")
    protected Function(FEContext context, FcnInfo fcnInfo, String name, String pkg,
            Type returnType,
 List<Parameter> params, List<String> typeParams,
            String fImplements, Statement body,
            List<String> fixes,
            HashmapList<String, Annotation> annotations)
    {
        super(context);
        this.fcnInfo = fcnInfo;
        this.name = nonnull(name, "It's not allowed to create a function without a name");
        this.returnType = returnType;
        this.params = params;
        this.pkg = pkg;
        this.body = body;
        this.typeParams = typeParams;
        this.fImplements = fImplements;
        this.annotations = annotations;
        this.fixes = fixes;
        assert annotations != null;
    }

    public boolean isUninterp() {
        return getFcnType() == FcnType.Uninterp || getFcnType() == FcnType.UninterpGenerator;
    }

    public boolean isStatic() {
        return getFcnType() == FcnType.Static || getFcnType() == FcnType.Model ||
                getFcnType() == FcnType.Wrapper;
    }

    public boolean isStencil() {
        return getSolveType() == FcnSolveType.Stencil;
    }

    public boolean isSketchHarness() {
        return getFcnType() == FcnType.Harness;
    }

    public boolean isGenerator() {
        return getFcnType() == FcnType.Generator || getFcnType() == FcnType.UninterpGenerator;
    }

    public boolean isWrapper() {
        return getFcnType() == FcnType.Wrapper;
    }

    public boolean isGeneric() {
        return typeParams.size() > 0;
    }

    public boolean isModel() {
        return getFcnType() == FcnType.Model;
    }

    /** Returns the name of this function, or null if it is anonymous. */
    public String getName() {
        return name;
    }

    public String getFullName() {
        return name + "@" + pkg;
    }

    /**
     * Returns the parameters of this function, as a List of Parameter objects.
     */
    public List<Parameter> getParams() {
        return Collections.unmodifiableList(params);
    }

    public List<String> getTypeParams() {
        return typeParams;
    }

    /** Returns the return type of this function. */
    public Type getReturnType() {
        return returnType;
    }

    /**
     * Returns the body of this function, as a single statement (likely a StmtBlock).
     */
    public Statement getBody() {
        return body;
    }

    public List<String> getFixes() {
        return fixes;
    }

    public void setPkg(String pkgName) {
        pkg = pkgName;
    }

    public String getPkg() {
        return pkg;
    }

    /**
     * Returns the specification for this function. May be null, meaning this is a spec or
     * an unbound sketch.
     */
    public String getSpecification() {
        return fImplements;
    }

    /** Accepts a front-end visitor. */
    public Object accept(FEVisitor v) {
        return v.visitFunction(this);
    }

    public String printParams(){
        String s = "";
        boolean notf = false;
        boolean hasSeenOptional = false;
        for(Parameter p : params){
            if (!p.isImplicit() && hasSeenOptional) {
                hasSeenOptional = false;
                s += "]";
            }
            if(notf){ s +=", "; }
            if(p.isParameterOutput()){ s += "ref "; }
            if (p.isImplicit() && !hasSeenOptional) {
                hasSeenOptional = true;
                s += "[";
            }
            s += p.getType() + " " + p.getName();
            notf = true;
        }
        return s;
    }

    String printTypeParams() {
        if (!typeParams.isEmpty()) {
            String rv = "<";
            boolean frst = true;
            for (String s : typeParams) {
                if (!frst) {
                    rv += ", ";
                }
                rv += s;
            }
            return rv + ">";
        }
        return "";
    }

    public String getSummary() {
        final String impl = fImplements != null ? " implements " + fImplements : "";
        return new ScRichString(" ").joinNonempty(fcnInfo.solveType.cCodeName,
                fcnInfo.cudaType.cCodeName,
 fcnInfo.fcnType.cCodeName, returnType,
 name,
                printTypeParams(), "(" + printParams() + ")", impl,

                fixesString());
    }

    protected String fixesString() {
        if (fixes.size() > 0) {
            String out = " fixes ";
            for (String s : fixes) {
                out += " " + s;
            }
            return out;
        } else {
            return "";
        }
    }
    public String toString() {
        return getSummary() + "/*" + getCx() + "*/";
    }

    public Function makeStencil() {
        return this.creator().solveType(FcnSolveType.Stencil).create();
    }

    /*
     * public void makeStencil(){ cls.add(FuncType.FUNC_STENCIL); } public boolean
     * isStencil(){ return cls.contains(FuncType.FUNC_STENCIL); }
     */

    /*
     * public int hashCode() { return name.hashCode(); } public boolean equals(Object o) {
     * if (o instanceof Function) { return name.equals(((Function) o).getName()); } return
     * false; }
     */

    public FcnInfo getInfo() {
        return fcnInfo;
    }

    public FcnType getFcnType() {
        return fcnInfo.fcnType;
    }

    public FcnSolveType getSolveType() {
        return fcnInfo.solveType;
    }

    /** if the function is a SPMD subroutine, namely "device" or "global" */
    public boolean isParallel() {
        return fcnInfo.cudaType == CudaFcnType.DeviceInline ||
                fcnInfo.cudaType == CudaFcnType.Global;
    }
}
