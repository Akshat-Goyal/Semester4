package sketch.compiler.passes.preprocessing.cuda;

import java.util.List;

import sketch.compiler.ast.core.exprs.ExprFunCall;
import sketch.compiler.ast.core.exprs.Expression;
import sketch.compiler.ast.cuda.stmts.CudaSyncthreads;
import sketch.compiler.passes.annotations.CompilerPassDeps;
import sketch.compiler.passes.preprocessing.BuiltinFcnCall;

/**
 * replace __syncthreads() with a special node
 * 
 * @author gatoatigrado (nicholas tung) [email: ntung at ntung]
 * @license This file is licensed under BSD license, available at
 *          http://creativecommons.org/licenses/BSD/. While not required, if you make
 *          changes, please consider contributing back!
 */
@CompilerPassDeps(runsBefore = {}, runsAfter = {})
public class SyncthreadsCall extends BuiltinFcnCall {
    static final String usageStr = "__syncthreads() usage: __syncthreads()";

    public SyncthreadsCall() {
        super("__syncthreads", 0);
    }

    @Override
    public Object builtinReplacement(ExprFunCall ctx, List<Expression> args) {
        return new CudaSyncthreads(ctx.getCx());
    }
}