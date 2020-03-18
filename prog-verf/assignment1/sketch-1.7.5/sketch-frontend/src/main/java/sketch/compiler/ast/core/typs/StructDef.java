/*
 * Copyright 2003 by the Massachusetts Institute of Technology.
 *
 * Permission to use, copy, modify, and distribute this
 * software and its documentation for any purpose and without
 * fee is hereby granted, provided that the above copyright
 * notice appear in all copies and that both that copyright
 * notice and this permission notice appear in supporting
 * documentation, and that the name of M.I.T. not be used in
 * advertising or publicity pertaining to distribution of the
 * software without specific, written prior permission.
 * M.I.T. makes no representations about the suitability of
 * this software for any purpose.  It is provided "as is"
 * without express or implied warranty.
 */

package sketch.compiler.ast.core.typs;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Map.Entry;
import java.util.Set;
import java.util.Vector;

import sketch.compiler.ast.core.Annotation;
import sketch.compiler.ast.core.FEContext;
import sketch.compiler.ast.core.FENode;
import sketch.compiler.ast.core.FEVisitor;
import sketch.compiler.ast.core.NameResolver;
import sketch.compiler.ast.core.exprs.ExprNullPtr;
import sketch.compiler.ast.core.exprs.Expression;
import sketch.util.datastructures.HashmapList;
import sketch.util.datastructures.ImmutableTypedHashMap;
import sketch.util.datastructures.ObjPairBase;
import sketch.util.datastructures.TypedHashMap;
import sketch.util.exceptions.ExceptionAtNode;

/**
 * A hetereogeneous structure type. This type has a name for itself, and an ordered list
 * of field names and types. You can retrieve the list of names, and the type a particular
 * name maps to. The names must be unique within a given structure.
 * <p>
 * There is an important assumption in testing for equality and type promotions: two
 * structure types are considered equal if they have the same name, regardless of any
 * other characteristics. This allows structures and associated structure-reference types
 * to sanely compare equal.
 * <p>
 * This is the "definition" of a structure which contains not only the struct name, but
 * also the information of its fields. On the contrary, <code>TypeStructRef</code> just
 * refers to a struct by its name.
 * 
 * @author David Maze &lt;dmaze@cag.lcs.mit.edu&gt;
 * @version $Id$
 */
public class StructDef extends FENode implements Iterable<Entry<String, Type>>
{
    private final String name;
    private String pkg;
    private final ImmutableTypedHashMap<String, Type> fieldTypMap;
    private List<String> typeargs;
    // For sake of ADT
    private String parentName;
    private int actFieldsSize;
    private boolean isInstantiable;
    private boolean immutable = false;
    private final List<String> fieldOrder;
    private HashmapList<String, Annotation> annotations =
            new HashmapList<String, Annotation>();

    public Set<Entry<String, Vector<Annotation>>> annotationSet() {
        return annotations.entrySet();
    }

    public boolean hasAnnotation(String tag) {
        return annotations.containsKey(tag);
    }

    public void setTypeargs(List<String> typeargs) {
        this.typeargs = typeargs;
    }

    public Vector<Annotation> getAnnotation(String tag) {
        return annotations.getOrEmpty(tag);
    }

    public HashmapList<String, Annotation> getAllAnnotations() {
        return annotations;
    }

    public static class TStructCreator {
        private String name;
        private String pkg;
        // ADT
        private String parentName;
        private boolean isInstantiable;
        private ImmutableTypedHashMap<String, Type> fieldTypMap;
        private List<String> fieldOrder;
        private Object base;
        private HashmapList<String, Annotation> annotations;
        private List<String> typeargs;

        public TStructCreator(FEContext ts) {
            base = ts;
        }

        public TStructCreator(StructDef ts) {
            base = ts;
            name = ts.name;
            pkg = ts.pkg;
            // ADT
            parentName = ts.parentName;
            isInstantiable = ts.isInstantiable;
            fieldOrder = ts.fieldOrder;
            fieldTypMap = ts.fieldTypMap;
            annotations = ts.annotations;
            typeargs = ts.typeargs;
        }


        public TStructCreator name(final String name) {
            this.name = name;
            return this;
        }

        public TStructCreator pkg(final String pkg) {
            this.pkg = pkg;
            return this;
        }

        public TStructCreator typeargs(List<String> typeargs) {
            this.typeargs = typeargs;
            return this;
        }

        // ADT
        public TStructCreator parentName(final String parentName) {
            this.parentName = parentName;
            return this;
        }

        // ADT
        public TStructCreator isInstantiable(boolean isInstantiable) {
            this.isInstantiable = isInstantiable;
            return this;
        }

        public TStructCreator fields(List<String> fields, List<Type> ftypes) {
            fieldOrder = new ArrayList<String>(fields.size());
            TypedHashMap<String, Type> types = new TypedHashMap<String, Type>();
            for (int i = 0; i < fields.size(); i++) {
                types.put(fields.get(i), ftypes.get(i));
                fieldOrder.add(fields.get(i));
            }
            this.fieldTypMap = types.immutable();
            return this;
        }

        public TStructCreator fields(ImmutableTypedHashMap<String, Type> fieldTypMap) {
            assert fieldTypMap.size() == fieldOrder.size();
            this.fieldTypMap = fieldTypMap;
            return this;
        }

        public TStructCreator fields(TypedHashMap<String, Type> fieldTypMap) {
            assert fieldTypMap.size() == fieldOrder.size();
            this.fieldTypMap = fieldTypMap.immutable();
            return this;
        }

        public TStructCreator annotations(HashmapList<String, Annotation> annotations) {
            this.annotations = annotations;
            return this;
        }

        public StructDef create() {
            if (base == null || base instanceof FEContext) {

                return new StructDef((FEContext) base, name, pkg, parentName,
                        isInstantiable, fieldTypMap,
                        fieldOrder, typeargs,
                        annotations);
            } else {

                return new StructDef(((StructDef) base).getContext(), name,
 pkg,
                        parentName, isInstantiable,
                        fieldTypMap, fieldOrder, typeargs,
                        annotations);
            }
        }
    }

    /**
     * This method should only be called by the parser when the TypeStruct is first
     * created. After that, the field should be considered immutable.
     * 
     * @param pkg
     */
    public void setPkg(String pkg) {
        this.pkg = pkg;
    }


    public void setIsInstantiable(boolean isInstantiable) {
        this.isInstantiable = isInstantiable;
    }

    public static TStructCreator creator(FEContext ctx, String name, String parentName,
            boolean isInstantiable, List<String> fields, List<Type> ftypes, List<String> typeargs, HashmapList<String, Annotation> annotations)
    {
        return (new TStructCreator(ctx)).name(name).parentName(parentName).isInstantiable(
                isInstantiable).fields(fields, ftypes).typeargs(typeargs).annotations(
annotations);
    }

    public TStructCreator creator() {
        return (new TStructCreator(this));
    }

    /**
     * Creates a new structured type. The fields and ftypes lists must be the same length;
     * a field in a given position in the fields list has the type in the equivalent
     * position in the ftypes list.
     * 
     * @param context
     *            file and line number the structure was declared in
     * @param name
     *            name of the structure
     * @param fields
     *            list of <code>String</code> containing the names of the fields
     * @param ftypes
     *            list of <code>Type</code> containing the types of the fields
     */
    public StructDef(FEContext context, String name, String pkg, String parentName,
            boolean isInstantiable,
            List<String> fields, List<Type> ftypes, List<String> typeargs,
            HashmapList<String, Annotation> annotations)
    {
        super(context);
        if (parentName != null && parentName.contains("@")) {
            parentName = parentName.substring(0, parentName.indexOf('@'));
        }
        this.name = name;
        this.pkg = pkg;
        this.parentName = parentName;
        this.isInstantiable = isInstantiable;
        this.actFieldsSize = -1;
        TypedHashMap<String, Type> types = new TypedHashMap<String, Type>();
        fieldOrder = fields;
        for (int i = 0; i < fields.size(); i++)
            types.put(fields.get(i), ftypes.get(i));
        this.fieldTypMap = types.immutable();
        this.annotations = annotations;
        this.typeargs = typeargs;
        if (this.hasAnnotation("Immutable"))
            this.immutable = true;
    }

    public StructDef(FEContext context, String name, String pkg, String parentName,
            boolean isInstantiable,
            TypedHashMap<String, Type> map, List<String> forder, List<String> typeargs,
            HashmapList<String, Annotation> annotations)
    {
        super(context);

        if (parentName != null && parentName.contains("@")) {
            parentName = parentName.substring(0, parentName.indexOf('@'));
        }

        fieldOrder = (forder);
        this.name = name;
        this.pkg = pkg;
        this.parentName = parentName;
        this.isInstantiable = isInstantiable;
        this.fieldTypMap = map.immutable();
        this.annotations = annotations;
        this.typeargs = typeargs;
        if (this.hasAnnotation("Immutable"))
            this.immutable = true;
        if (fieldOrder.size() != fieldTypMap.size()) {
            throw new ExceptionAtNode("You seem to have multiple fields with the same name", this);
        }
    }



    public boolean isStruct () { return true; }



    /**
     * Returns the name of the structure.
     *
     * @return the name of the structure
     */
    public String getName()
    {
        return name;
    }

    public String getFullName() {
        return name + '@' + pkg;
    }


    public void setParentName(String name) {
        parentName = name;
    }
    // ADT
    public String getParentName() {
        if (parentName == null) {
            return null;
        }
        return parentName + '@' + pkg;
    }

    public boolean isInstantiable() {
        return isInstantiable;
    }

    public boolean immutable() {
        return immutable;
    }

    public void resetImmutable() {
        immutable = false;
    }

    public void setImmutable() {
        immutable = true;
        if (!annotations.containsKey("Immutable")) {
            annotations.append("Immutable", new Annotation(this.getContext(), "Immutable", ""));
        }
    }
    /**
     * Returns the number of fields.
     *
     * @return the number of fields in the structure
     */
    public int getNumFields()
    {
        return getFieldTypMap().size();
    }

    public String getPkg() {
        return pkg;
    }

    public Collection<String> getFields ()
    {
        return fieldTypMap.keySet();
    }

    /**
     * Returns the type of the field with the specified name.
     *
     * @param f the name of the field to get the type of
     * @return  the type of the field named f
     */
    public Type getType(String f)
    {
        return getFieldTypMap().get(f);
    }

    public Type getTypeDeep(String f, NameResolver nres) {
        Type t = getFieldTypMap().get(f);
        StructDef cur = this;
        while (t == null && cur.getParentName() != null) {
            cur = nres.getStruct(cur.getParentName());
            t = cur.getFieldTypMap().get(f);
        }
        return t;
    }

    public List<String> getTypeargs() {
        return typeargs;
    }

    public boolean hasTypeargs() {
        return typeargs != null && !typeargs.isEmpty();
    }

    /** Return true iff F is a field of this struct. */
    public boolean hasField (String f) {
        return getFieldTypMap().containsKey(f);
    }

    public Expression defaultValue () {
        return ExprNullPtr.nullPtr;
    }

    /** Accept a front-end visitor. */
    public Object accept(FEVisitor v)
    {
        return v.visitStructDef (this);
    }

    // change if needed for ADT
    public TypeComparisonResult compare(StructDef other) {
        if (other instanceof StructDef) {
            StructDef that = (StructDef) other;
            return TypeComparisonResult.knownOrNeq(name.equals(that.getName()));
        }

        return TypeComparisonResult.NEQ;
    }

    public Type leastCommonPromotion(Type t, NameResolver nres) {
        if (t instanceof TypeStructRef) {
            String oname = nres.getStructName(((TypeStructRef) t).getName());
            if (oname.equals(this.getFullName())) {
                return t;
            }
        }
        return null;
    }

    public boolean promotesTo(Type that, NameResolver nres) {

        return false;
    }

    public int hashCode()
    {
        return name.hashCode();
    }

    public String toString()
    {
        return name + "_ST";
    }

    public List<StructFieldEnt> getFieldEntries() {
        ArrayList<StructFieldEnt> result = new ArrayList<StructFieldEnt>();
        for (Entry<String, Type> ent : this.getFieldTypMap().entrySet()) {
            result.add(new StructFieldEnt(ent.getKey(), ent.getValue()));
        }
        return result;
    }

    public List<StructFieldEnt> getFieldEntriesInOrder() {
        ArrayList<StructFieldEnt> result = new ArrayList<StructFieldEnt>();
        for (String s : fieldOrder) {
            result.add(new StructFieldEnt(s, fieldTypMap.get(s)));
        }
        return result;
    }

    // [start] StructFieldEnt = (String, Type)
    public static class StructFieldEnt extends ObjPairBase<String, Type> {
        public StructFieldEnt(String left, Type right) {
            super(left, right);
        }

        public String getName() { return left; }
        public Type getType() { return right; }
    }
    // [end]

    public ImmutableTypedHashMap<String, Type> getFieldTypMap() {
        return fieldTypMap;
    }

    public List<String> getOrderedFields() {
        return fieldOrder;
    }

    public Iterator<Entry<String, Type>> iterator() {
        return fieldTypMap.iterator();
    }

    public void setActFields(int actFields) {
        this.actFieldsSize = actFields;
    }

    public int getActFields() {
        return actFieldsSize;
    }
}

