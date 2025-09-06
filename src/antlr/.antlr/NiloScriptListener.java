// Generated from /home/namaria/Gram-tica-com-ANTLR/src/antlr/NiloScript.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link NiloScriptParser}.
 */
public interface NiloScriptListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link NiloScriptParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(NiloScriptParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link NiloScriptParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(NiloScriptParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link NiloScriptParser#code}.
	 * @param ctx the parse tree
	 */
	void enterCode(NiloScriptParser.CodeContext ctx);
	/**
	 * Exit a parse tree produced by {@link NiloScriptParser#code}.
	 * @param ctx the parse tree
	 */
	void exitCode(NiloScriptParser.CodeContext ctx);
	/**
	 * Enter a parse tree produced by {@link NiloScriptParser#assignment}.
	 * @param ctx the parse tree
	 */
	void enterAssignment(NiloScriptParser.AssignmentContext ctx);
	/**
	 * Exit a parse tree produced by {@link NiloScriptParser#assignment}.
	 * @param ctx the parse tree
	 */
	void exitAssignment(NiloScriptParser.AssignmentContext ctx);
	/**
	 * Enter a parse tree produced by {@link NiloScriptParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(NiloScriptParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NiloScriptParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(NiloScriptParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NiloScriptParser#term}.
	 * @param ctx the parse tree
	 */
	void enterTerm(NiloScriptParser.TermContext ctx);
	/**
	 * Exit a parse tree produced by {@link NiloScriptParser#term}.
	 * @param ctx the parse tree
	 */
	void exitTerm(NiloScriptParser.TermContext ctx);
	/**
	 * Enter a parse tree produced by {@link NiloScriptParser#fact}.
	 * @param ctx the parse tree
	 */
	void enterFact(NiloScriptParser.FactContext ctx);
	/**
	 * Exit a parse tree produced by {@link NiloScriptParser#fact}.
	 * @param ctx the parse tree
	 */
	void exitFact(NiloScriptParser.FactContext ctx);
	/**
	 * Enter a parse tree produced by {@link NiloScriptParser#print}.
	 * @param ctx the parse tree
	 */
	void enterPrint(NiloScriptParser.PrintContext ctx);
	/**
	 * Exit a parse tree produced by {@link NiloScriptParser#print}.
	 * @param ctx the parse tree
	 */
	void exitPrint(NiloScriptParser.PrintContext ctx);
	/**
	 * Enter a parse tree produced by {@link NiloScriptParser#inCase}.
	 * @param ctx the parse tree
	 */
	void enterInCase(NiloScriptParser.InCaseContext ctx);
	/**
	 * Exit a parse tree produced by {@link NiloScriptParser#inCase}.
	 * @param ctx the parse tree
	 */
	void exitInCase(NiloScriptParser.InCaseContext ctx);
}