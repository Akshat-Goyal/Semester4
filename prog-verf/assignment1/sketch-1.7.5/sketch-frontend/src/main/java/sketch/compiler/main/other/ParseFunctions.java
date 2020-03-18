package sketch.compiler.main.other;

import java.io.File;

import sketch.compiler.main.seq.SequentialSketchMain;
import sketch.compiler.passes.printers.FunctionDeclPrinter;

public class ParseFunctions extends SequentialSketchMain {
    public ParseFunctions(String[] args) {
        super(args);
    }

    @Override
    public void run() {
        parseProgram();
        FunctionDeclPrinter printer =
                new FunctionDeclPrinter(new File("function_list.xml"));
        prog.accept(printer);
        printer.write();
    }

    public static void main(String[] args) {
        checkJavaVersion(1, 6);
        for (String arg : args) {
            System.out.println("processing file " + arg);
            String[] new_args = { arg };
            new ParseFunctions(new_args).run();
        }
    }
}
