// Generated from /home/namaria/Gram-tica-com-ANTLR/src/antlr/NiloScript.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class NiloScriptParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, PLUS=8, MINUS=9, 
		MUL=10, DIV=11, MOD=12, POW=13, OPERATOR=14, INT=15, FLOAT=16, VAR=17, 
		STRING=18, BOOL=19, TYPE=20, RETURN_TYPE=21, EQUAL=22, OPAR=23, CPAR=24, 
		OBRA=25, CBRA=26, OKEY=27, CKEY=28, SC=29, READ=30, COMMENT=31, TAB=32, 
		ENTER=33, SPACE=34, WHITESPACE=35;
	public static final int
		RULE_program = 0, RULE_stmt = 1, RULE_assignment = 2, RULE_expression = 3, 
		RULE_term = 4, RULE_fact = 5, RULE_expo = 6, RULE_opPar = 7, RULE_typeSpecifier = 8, 
		RULE_print = 9, RULE_input = 10, RULE_inCase = 11, RULE_loop = 12, RULE_function = 13, 
		RULE_functionCall = 14, RULE_list = 15, RULE_acessList = 16;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "stmt", "assignment", "expression", "term", "fact", "expo", 
			"opPar", "typeSpecifier", "print", "input", "inCase", "loop", "function", 
			"functionCall", "list", "acessList"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'mostrar'", "'caso'", "'sen\\u00E3o'", "'enquanto'", "'funcionalidade'", 
			"','", "'retorne'", "'+'", "'-'", "'*'", "'/'", "'%'", "'**'", null, 
			null, null, null, null, null, null, null, "'='", "'('", "')'", "'{'", 
			"'}'", "'['", "']'", "';'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, "PLUS", "MINUS", "MUL", 
			"DIV", "MOD", "POW", "OPERATOR", "INT", "FLOAT", "VAR", "STRING", "BOOL", 
			"TYPE", "RETURN_TYPE", "EQUAL", "OPAR", "CPAR", "OBRA", "CBRA", "OKEY", 
			"CKEY", "SC", "READ", "COMMENT", "TAB", "ENTER", "SPACE", "WHITESPACE"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "NiloScript.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public NiloScriptParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(NiloScriptParser.EOF, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(35); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(34);
				stmt();
				}
				}
				setState(37); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 3221356598L) != 0) );
			setState(39);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StmtContext extends ParserRuleContext {
		public PrintContext print() {
			return getRuleContext(PrintContext.class,0);
		}
		public TerminalNode SC() { return getToken(NiloScriptParser.SC, 0); }
		public AssignmentContext assignment() {
			return getRuleContext(AssignmentContext.class,0);
		}
		public InputContext input() {
			return getRuleContext(InputContext.class,0);
		}
		public LoopContext loop() {
			return getRuleContext(LoopContext.class,0);
		}
		public InCaseContext inCase() {
			return getRuleContext(InCaseContext.class,0);
		}
		public FunctionContext function() {
			return getRuleContext(FunctionContext.class,0);
		}
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public ListContext list() {
			return getRuleContext(ListContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode COMMENT() { return getToken(NiloScriptParser.COMMENT, 0); }
		public StmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmt; }
	}

	public final StmtContext stmt() throws RecognitionException {
		StmtContext _localctx = new StmtContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_stmt);
		try {
			setState(63);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(41);
				print();
				setState(42);
				match(SC);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(44);
				assignment();
				setState(45);
				match(SC);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(47);
				input();
				setState(48);
				match(SC);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(50);
				loop();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(51);
				inCase();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(52);
				function();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(53);
				functionCall();
				setState(54);
				match(SC);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(56);
				list();
				setState(57);
				match(SC);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(59);
				expression();
				setState(60);
				match(SC);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(62);
				match(COMMENT);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AssignmentContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(NiloScriptParser.VAR, 0); }
		public TerminalNode RETURN_TYPE() { return getToken(NiloScriptParser.RETURN_TYPE, 0); }
		public TerminalNode EQUAL() { return getToken(NiloScriptParser.EQUAL, 0); }
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public InputContext input() {
			return getRuleContext(InputContext.class,0);
		}
		public AcessListContext acessList() {
			return getRuleContext(AcessListContext.class,0);
		}
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public AssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignment; }
	}

	public final AssignmentContext assignment() throws RecognitionException {
		AssignmentContext _localctx = new AssignmentContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_assignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(65);
			match(VAR);
			setState(66);
			match(RETURN_TYPE);
			setState(67);
			match(EQUAL);
			setState(72);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				{
				setState(68);
				term();
				}
				break;
			case 2:
				{
				setState(69);
				input();
				}
				break;
			case 3:
				{
				setState(70);
				acessList();
				}
				break;
			case 4:
				{
				setState(71);
				functionCall();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(NiloScriptParser.VAR, 0); }
		public TerminalNode EQUAL() { return getToken(NiloScriptParser.EQUAL, 0); }
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public AcessListContext acessList() {
			return getRuleContext(AcessListContext.class,0);
		}
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(74);
			match(VAR);
			setState(75);
			match(EQUAL);
			setState(79);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				{
				setState(76);
				term();
				}
				break;
			case 2:
				{
				setState(77);
				acessList();
				}
				break;
			case 3:
				{
				setState(78);
				functionCall();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TermContext extends ParserRuleContext {
		public List<FactContext> fact() {
			return getRuleContexts(FactContext.class);
		}
		public FactContext fact(int i) {
			return getRuleContext(FactContext.class,i);
		}
		public TerminalNode PLUS() { return getToken(NiloScriptParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(NiloScriptParser.MINUS, 0); }
		public TermContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_term; }
	}

	public final TermContext term() throws RecognitionException {
		TermContext _localctx = new TermContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_term);
		int _la;
		try {
			setState(86);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(81);
				fact(0);
				setState(82);
				_la = _input.LA(1);
				if ( !(_la==PLUS || _la==MINUS) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(83);
				fact(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(85);
				fact(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FactContext extends ParserRuleContext {
		public ExpoContext expo() {
			return getRuleContext(ExpoContext.class,0);
		}
		public FactContext fact() {
			return getRuleContext(FactContext.class,0);
		}
		public TerminalNode MUL() { return getToken(NiloScriptParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(NiloScriptParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(NiloScriptParser.MOD, 0); }
		public FactContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fact; }
	}

	public final FactContext fact() throws RecognitionException {
		return fact(0);
	}

	private FactContext fact(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		FactContext _localctx = new FactContext(_ctx, _parentState);
		FactContext _prevctx = _localctx;
		int _startState = 10;
		enterRecursionRule(_localctx, 10, RULE_fact, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(89);
			expo();
			}
			_ctx.stop = _input.LT(-1);
			setState(96);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new FactContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_fact);
					setState(91);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(92);
					_la = _input.LA(1);
					if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 7168L) != 0)) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					setState(93);
					expo();
					}
					} 
				}
				setState(98);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpoContext extends ParserRuleContext {
		public OpParContext opPar() {
			return getRuleContext(OpParContext.class,0);
		}
		public TerminalNode POW() { return getToken(NiloScriptParser.POW, 0); }
		public ExpoContext expo() {
			return getRuleContext(ExpoContext.class,0);
		}
		public ExpoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expo; }
	}

	public final ExpoContext expo() throws RecognitionException {
		ExpoContext _localctx = new ExpoContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_expo);
		try {
			setState(104);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(99);
				opPar();
				{
				setState(100);
				match(POW);
				setState(101);
				expo();
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(103);
				opPar();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OpParContext extends ParserRuleContext {
		public TerminalNode OPAR() { return getToken(NiloScriptParser.OPAR, 0); }
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public TerminalNode CPAR() { return getToken(NiloScriptParser.CPAR, 0); }
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public OpParContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_opPar; }
	}

	public final OpParContext opPar() throws RecognitionException {
		OpParContext _localctx = new OpParContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_opPar);
		try {
			setState(111);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPAR:
				enterOuterAlt(_localctx, 1);
				{
				setState(106);
				match(OPAR);
				setState(107);
				term();
				setState(108);
				match(CPAR);
				}
				break;
			case INT:
			case FLOAT:
			case VAR:
			case STRING:
			case BOOL:
				enterOuterAlt(_localctx, 2);
				{
				setState(110);
				typeSpecifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeSpecifierContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(NiloScriptParser.INT, 0); }
		public TerminalNode VAR() { return getToken(NiloScriptParser.VAR, 0); }
		public TerminalNode STRING() { return getToken(NiloScriptParser.STRING, 0); }
		public TerminalNode BOOL() { return getToken(NiloScriptParser.BOOL, 0); }
		public TerminalNode FLOAT() { return getToken(NiloScriptParser.FLOAT, 0); }
		public TypeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeSpecifier; }
	}

	public final TypeSpecifierContext typeSpecifier() throws RecognitionException {
		TypeSpecifierContext _localctx = new TypeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_typeSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(113);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 1015808L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PrintContext extends ParserRuleContext {
		public TerminalNode OPAR() { return getToken(NiloScriptParser.OPAR, 0); }
		public TerminalNode CPAR() { return getToken(NiloScriptParser.CPAR, 0); }
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public AcessListContext acessList() {
			return getRuleContext(AcessListContext.class,0);
		}
		public PrintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_print; }
	}

	public final PrintContext print() throws RecognitionException {
		PrintContext _localctx = new PrintContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_print);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(115);
			match(T__0);
			setState(116);
			match(OPAR);
			setState(119);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				{
				setState(117);
				term();
				}
				break;
			case 2:
				{
				setState(118);
				acessList();
				}
				break;
			}
			setState(121);
			match(CPAR);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class InputContext extends ParserRuleContext {
		public TerminalNode READ() { return getToken(NiloScriptParser.READ, 0); }
		public TerminalNode SC() { return getToken(NiloScriptParser.SC, 0); }
		public InputContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_input; }
	}

	public final InputContext input() throws RecognitionException {
		InputContext _localctx = new InputContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_input);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(123);
			match(READ);
			setState(124);
			match(SC);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class InCaseContext extends ParserRuleContext {
		public TerminalNode OPAR() { return getToken(NiloScriptParser.OPAR, 0); }
		public TerminalNode CPAR() { return getToken(NiloScriptParser.CPAR, 0); }
		public List<TerminalNode> OBRA() { return getTokens(NiloScriptParser.OBRA); }
		public TerminalNode OBRA(int i) {
			return getToken(NiloScriptParser.OBRA, i);
		}
		public List<TerminalNode> CBRA() { return getTokens(NiloScriptParser.CBRA); }
		public TerminalNode CBRA(int i) {
			return getToken(NiloScriptParser.CBRA, i);
		}
		public List<TermContext> term() {
			return getRuleContexts(TermContext.class);
		}
		public TermContext term(int i) {
			return getRuleContext(TermContext.class,i);
		}
		public TerminalNode OPERATOR() { return getToken(NiloScriptParser.OPERATOR, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public InCaseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inCase; }
	}

	public final InCaseContext inCase() throws RecognitionException {
		InCaseContext _localctx = new InCaseContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_inCase);
		int _la;
		try {
			setState(164);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(126);
				match(T__1);
				setState(127);
				match(OPAR);
				{
				setState(128);
				term();
				setState(129);
				match(OPERATOR);
				setState(130);
				term();
				}
				setState(132);
				match(CPAR);
				setState(133);
				match(OBRA);
				setState(135); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(134);
					stmt();
					}
					}
					setState(137); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 3221356598L) != 0) );
				setState(139);
				match(CBRA);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(141);
				match(T__1);
				setState(142);
				match(OPAR);
				{
				setState(143);
				term();
				setState(144);
				match(OPERATOR);
				setState(145);
				term();
				}
				setState(147);
				match(CPAR);
				setState(148);
				match(OBRA);
				setState(150); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(149);
					stmt();
					}
					}
					setState(152); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 3221356598L) != 0) );
				setState(154);
				match(CBRA);
				setState(155);
				match(T__2);
				setState(156);
				match(OBRA);
				setState(158); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(157);
					stmt();
					}
					}
					setState(160); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 3221356598L) != 0) );
				setState(162);
				match(CBRA);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LoopContext extends ParserRuleContext {
		public TerminalNode OPAR() { return getToken(NiloScriptParser.OPAR, 0); }
		public TerminalNode CPAR() { return getToken(NiloScriptParser.CPAR, 0); }
		public TerminalNode OBRA() { return getToken(NiloScriptParser.OBRA, 0); }
		public TerminalNode CBRA() { return getToken(NiloScriptParser.CBRA, 0); }
		public List<TermContext> term() {
			return getRuleContexts(TermContext.class);
		}
		public TermContext term(int i) {
			return getRuleContext(TermContext.class,i);
		}
		public TerminalNode OPERATOR() { return getToken(NiloScriptParser.OPERATOR, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public LoopContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loop; }
	}

	public final LoopContext loop() throws RecognitionException {
		LoopContext _localctx = new LoopContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_loop);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(166);
			match(T__3);
			setState(167);
			match(OPAR);
			{
			setState(168);
			term();
			setState(169);
			match(OPERATOR);
			setState(170);
			term();
			}
			setState(172);
			match(CPAR);
			setState(173);
			match(OBRA);
			setState(175); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(174);
				stmt();
				}
				}
				setState(177); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 3221356598L) != 0) );
			setState(179);
			match(CBRA);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FunctionContext extends ParserRuleContext {
		public List<TerminalNode> VAR() { return getTokens(NiloScriptParser.VAR); }
		public TerminalNode VAR(int i) {
			return getToken(NiloScriptParser.VAR, i);
		}
		public TerminalNode OPAR() { return getToken(NiloScriptParser.OPAR, 0); }
		public TerminalNode CPAR() { return getToken(NiloScriptParser.CPAR, 0); }
		public List<TerminalNode> RETURN_TYPE() { return getTokens(NiloScriptParser.RETURN_TYPE); }
		public TerminalNode RETURN_TYPE(int i) {
			return getToken(NiloScriptParser.RETURN_TYPE, i);
		}
		public TerminalNode OBRA() { return getToken(NiloScriptParser.OBRA, 0); }
		public TerminalNode SC() { return getToken(NiloScriptParser.SC, 0); }
		public TerminalNode CBRA() { return getToken(NiloScriptParser.CBRA, 0); }
		public TerminalNode TYPE() { return getToken(NiloScriptParser.TYPE, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public FunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function; }
	}

	public final FunctionContext function() throws RecognitionException {
		FunctionContext _localctx = new FunctionContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_function);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(181);
			match(T__4);
			setState(182);
			match(VAR);
			setState(183);
			match(OPAR);
			setState(186);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==VAR) {
				{
				setState(184);
				match(VAR);
				setState(185);
				match(RETURN_TYPE);
				}
			}

			setState(193);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__5) {
				{
				{
				setState(188);
				match(T__5);
				setState(189);
				match(VAR);
				setState(190);
				match(RETURN_TYPE);
				}
				}
				setState(195);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(196);
			match(CPAR);
			setState(197);
			match(RETURN_TYPE);
			setState(198);
			match(OBRA);
			setState(200); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(199);
				stmt();
				}
				}
				setState(202); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 3221356598L) != 0) );
			setState(204);
			match(T__6);
			setState(205);
			_la = _input.LA(1);
			if ( !(_la==VAR || _la==TYPE) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(206);
			match(SC);
			setState(207);
			match(CBRA);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FunctionCallContext extends ParserRuleContext {
		public List<TerminalNode> VAR() { return getTokens(NiloScriptParser.VAR); }
		public TerminalNode VAR(int i) {
			return getToken(NiloScriptParser.VAR, i);
		}
		public TerminalNode OPAR() { return getToken(NiloScriptParser.OPAR, 0); }
		public TerminalNode CPAR() { return getToken(NiloScriptParser.CPAR, 0); }
		public FunctionCallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionCall; }
	}

	public final FunctionCallContext functionCall() throws RecognitionException {
		FunctionCallContext _localctx = new FunctionCallContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_functionCall);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(209);
			match(VAR);
			setState(210);
			match(OPAR);
			setState(212);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==VAR) {
				{
				setState(211);
				match(VAR);
				}
			}

			setState(218);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__5) {
				{
				{
				setState(214);
				match(T__5);
				setState(215);
				match(VAR);
				}
				}
				setState(220);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(221);
			match(CPAR);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ListContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(NiloScriptParser.VAR, 0); }
		public TerminalNode RETURN_TYPE() { return getToken(NiloScriptParser.RETURN_TYPE, 0); }
		public TerminalNode EQUAL() { return getToken(NiloScriptParser.EQUAL, 0); }
		public TerminalNode OKEY() { return getToken(NiloScriptParser.OKEY, 0); }
		public TerminalNode CKEY() { return getToken(NiloScriptParser.CKEY, 0); }
		public List<TerminalNode> INT() { return getTokens(NiloScriptParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(NiloScriptParser.INT, i);
		}
		public List<TerminalNode> FLOAT() { return getTokens(NiloScriptParser.FLOAT); }
		public TerminalNode FLOAT(int i) {
			return getToken(NiloScriptParser.FLOAT, i);
		}
		public List<TerminalNode> STRING() { return getTokens(NiloScriptParser.STRING); }
		public TerminalNode STRING(int i) {
			return getToken(NiloScriptParser.STRING, i);
		}
		public List<TerminalNode> BOOL() { return getTokens(NiloScriptParser.BOOL); }
		public TerminalNode BOOL(int i) {
			return getToken(NiloScriptParser.BOOL, i);
		}
		public ListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_list; }
	}

	public final ListContext list() throws RecognitionException {
		ListContext _localctx = new ListContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(223);
			match(VAR);
			setState(224);
			match(RETURN_TYPE);
			setState(225);
			match(EQUAL);
			setState(226);
			match(OKEY);
			setState(228);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 884736L) != 0)) {
				{
				setState(227);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 884736L) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(234);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__5) {
				{
				{
				setState(230);
				match(T__5);
				setState(231);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 884736L) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				setState(236);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(237);
			match(CKEY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AcessListContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(NiloScriptParser.VAR, 0); }
		public TerminalNode OKEY() { return getToken(NiloScriptParser.OKEY, 0); }
		public TerminalNode INT() { return getToken(NiloScriptParser.INT, 0); }
		public TerminalNode CKEY() { return getToken(NiloScriptParser.CKEY, 0); }
		public AcessListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_acessList; }
	}

	public final AcessListContext acessList() throws RecognitionException {
		AcessListContext _localctx = new AcessListContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_acessList);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(239);
			match(VAR);
			setState(240);
			match(OKEY);
			setState(241);
			match(INT);
			setState(242);
			match(CKEY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 5:
			return fact_sempred((FactContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean fact_sempred(FactContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001#\u00f5\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0001\u0000\u0004\u0000$\b\u0000\u000b\u0000"+
		"\f\u0000%\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0003\u0001@\b\u0001\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0003\u0002I\b\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0003\u0003"+
		"P\b\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0003\u0004W\b\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0005\u0005_\b\u0005\n\u0005\f\u0005b\t\u0005"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0003\u0006"+
		"i\b\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0003\u0007p\b\u0007\u0001\b\u0001\b\u0001\t\u0001\t\u0001\t\u0001\t"+
		"\u0003\tx\b\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0004\u000b\u0088\b\u000b\u000b\u000b\f\u000b\u0089"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0004\u000b"+
		"\u0097\b\u000b\u000b\u000b\f\u000b\u0098\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0004\u000b\u009f\b\u000b\u000b\u000b\f\u000b\u00a0"+
		"\u0001\u000b\u0001\u000b\u0003\u000b\u00a5\b\u000b\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0004\f\u00b0\b\f\u000b"+
		"\f\f\f\u00b1\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0003"+
		"\r\u00bb\b\r\u0001\r\u0001\r\u0001\r\u0005\r\u00c0\b\r\n\r\f\r\u00c3\t"+
		"\r\u0001\r\u0001\r\u0001\r\u0001\r\u0004\r\u00c9\b\r\u000b\r\f\r\u00ca"+
		"\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0003\u000e\u00d5\b\u000e\u0001\u000e\u0001\u000e\u0005\u000e\u00d9"+
		"\b\u000e\n\u000e\f\u000e\u00dc\t\u000e\u0001\u000e\u0001\u000e\u0001\u000f"+
		"\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0003\u000f\u00e5\b\u000f"+
		"\u0001\u000f\u0001\u000f\u0005\u000f\u00e9\b\u000f\n\u000f\f\u000f\u00ec"+
		"\t\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0001\u0010\u0001"+
		"\u0010\u0001\u0010\u0001\u0010\u0000\u0001\n\u0011\u0000\u0002\u0004\u0006"+
		"\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e \u0000\u0005"+
		"\u0001\u0000\b\t\u0001\u0000\n\f\u0001\u0000\u000f\u0013\u0002\u0000\u0011"+
		"\u0011\u0014\u0014\u0002\u0000\u000f\u0010\u0012\u0013\u0103\u0000#\u0001"+
		"\u0000\u0000\u0000\u0002?\u0001\u0000\u0000\u0000\u0004A\u0001\u0000\u0000"+
		"\u0000\u0006J\u0001\u0000\u0000\u0000\bV\u0001\u0000\u0000\u0000\nX\u0001"+
		"\u0000\u0000\u0000\fh\u0001\u0000\u0000\u0000\u000eo\u0001\u0000\u0000"+
		"\u0000\u0010q\u0001\u0000\u0000\u0000\u0012s\u0001\u0000\u0000\u0000\u0014"+
		"{\u0001\u0000\u0000\u0000\u0016\u00a4\u0001\u0000\u0000\u0000\u0018\u00a6"+
		"\u0001\u0000\u0000\u0000\u001a\u00b5\u0001\u0000\u0000\u0000\u001c\u00d1"+
		"\u0001\u0000\u0000\u0000\u001e\u00df\u0001\u0000\u0000\u0000 \u00ef\u0001"+
		"\u0000\u0000\u0000\"$\u0003\u0002\u0001\u0000#\"\u0001\u0000\u0000\u0000"+
		"$%\u0001\u0000\u0000\u0000%#\u0001\u0000\u0000\u0000%&\u0001\u0000\u0000"+
		"\u0000&\'\u0001\u0000\u0000\u0000\'(\u0005\u0000\u0000\u0001(\u0001\u0001"+
		"\u0000\u0000\u0000)*\u0003\u0012\t\u0000*+\u0005\u001d\u0000\u0000+@\u0001"+
		"\u0000\u0000\u0000,-\u0003\u0004\u0002\u0000-.\u0005\u001d\u0000\u0000"+
		".@\u0001\u0000\u0000\u0000/0\u0003\u0014\n\u000001\u0005\u001d\u0000\u0000"+
		"1@\u0001\u0000\u0000\u00002@\u0003\u0018\f\u00003@\u0003\u0016\u000b\u0000"+
		"4@\u0003\u001a\r\u000056\u0003\u001c\u000e\u000067\u0005\u001d\u0000\u0000"+
		"7@\u0001\u0000\u0000\u000089\u0003\u001e\u000f\u00009:\u0005\u001d\u0000"+
		"\u0000:@\u0001\u0000\u0000\u0000;<\u0003\u0006\u0003\u0000<=\u0005\u001d"+
		"\u0000\u0000=@\u0001\u0000\u0000\u0000>@\u0005\u001f\u0000\u0000?)\u0001"+
		"\u0000\u0000\u0000?,\u0001\u0000\u0000\u0000?/\u0001\u0000\u0000\u0000"+
		"?2\u0001\u0000\u0000\u0000?3\u0001\u0000\u0000\u0000?4\u0001\u0000\u0000"+
		"\u0000?5\u0001\u0000\u0000\u0000?8\u0001\u0000\u0000\u0000?;\u0001\u0000"+
		"\u0000\u0000?>\u0001\u0000\u0000\u0000@\u0003\u0001\u0000\u0000\u0000"+
		"AB\u0005\u0011\u0000\u0000BC\u0005\u0015\u0000\u0000CH\u0005\u0016\u0000"+
		"\u0000DI\u0003\b\u0004\u0000EI\u0003\u0014\n\u0000FI\u0003 \u0010\u0000"+
		"GI\u0003\u001c\u000e\u0000HD\u0001\u0000\u0000\u0000HE\u0001\u0000\u0000"+
		"\u0000HF\u0001\u0000\u0000\u0000HG\u0001\u0000\u0000\u0000I\u0005\u0001"+
		"\u0000\u0000\u0000JK\u0005\u0011\u0000\u0000KO\u0005\u0016\u0000\u0000"+
		"LP\u0003\b\u0004\u0000MP\u0003 \u0010\u0000NP\u0003\u001c\u000e\u0000"+
		"OL\u0001\u0000\u0000\u0000OM\u0001\u0000\u0000\u0000ON\u0001\u0000\u0000"+
		"\u0000P\u0007\u0001\u0000\u0000\u0000QR\u0003\n\u0005\u0000RS\u0007\u0000"+
		"\u0000\u0000ST\u0003\n\u0005\u0000TW\u0001\u0000\u0000\u0000UW\u0003\n"+
		"\u0005\u0000VQ\u0001\u0000\u0000\u0000VU\u0001\u0000\u0000\u0000W\t\u0001"+
		"\u0000\u0000\u0000XY\u0006\u0005\uffff\uffff\u0000YZ\u0003\f\u0006\u0000"+
		"Z`\u0001\u0000\u0000\u0000[\\\n\u0002\u0000\u0000\\]\u0007\u0001\u0000"+
		"\u0000]_\u0003\f\u0006\u0000^[\u0001\u0000\u0000\u0000_b\u0001\u0000\u0000"+
		"\u0000`^\u0001\u0000\u0000\u0000`a\u0001\u0000\u0000\u0000a\u000b\u0001"+
		"\u0000\u0000\u0000b`\u0001\u0000\u0000\u0000cd\u0003\u000e\u0007\u0000"+
		"de\u0005\r\u0000\u0000ef\u0003\f\u0006\u0000fi\u0001\u0000\u0000\u0000"+
		"gi\u0003\u000e\u0007\u0000hc\u0001\u0000\u0000\u0000hg\u0001\u0000\u0000"+
		"\u0000i\r\u0001\u0000\u0000\u0000jk\u0005\u0017\u0000\u0000kl\u0003\b"+
		"\u0004\u0000lm\u0005\u0018\u0000\u0000mp\u0001\u0000\u0000\u0000np\u0003"+
		"\u0010\b\u0000oj\u0001\u0000\u0000\u0000on\u0001\u0000\u0000\u0000p\u000f"+
		"\u0001\u0000\u0000\u0000qr\u0007\u0002\u0000\u0000r\u0011\u0001\u0000"+
		"\u0000\u0000st\u0005\u0001\u0000\u0000tw\u0005\u0017\u0000\u0000ux\u0003"+
		"\b\u0004\u0000vx\u0003 \u0010\u0000wu\u0001\u0000\u0000\u0000wv\u0001"+
		"\u0000\u0000\u0000xy\u0001\u0000\u0000\u0000yz\u0005\u0018\u0000\u0000"+
		"z\u0013\u0001\u0000\u0000\u0000{|\u0005\u001e\u0000\u0000|}\u0005\u001d"+
		"\u0000\u0000}\u0015\u0001\u0000\u0000\u0000~\u007f\u0005\u0002\u0000\u0000"+
		"\u007f\u0080\u0005\u0017\u0000\u0000\u0080\u0081\u0003\b\u0004\u0000\u0081"+
		"\u0082\u0005\u000e\u0000\u0000\u0082\u0083\u0003\b\u0004\u0000\u0083\u0084"+
		"\u0001\u0000\u0000\u0000\u0084\u0085\u0005\u0018\u0000\u0000\u0085\u0087"+
		"\u0005\u0019\u0000\u0000\u0086\u0088\u0003\u0002\u0001\u0000\u0087\u0086"+
		"\u0001\u0000\u0000\u0000\u0088\u0089\u0001\u0000\u0000\u0000\u0089\u0087"+
		"\u0001\u0000\u0000\u0000\u0089\u008a\u0001\u0000\u0000\u0000\u008a\u008b"+
		"\u0001\u0000\u0000\u0000\u008b\u008c\u0005\u001a\u0000\u0000\u008c\u00a5"+
		"\u0001\u0000\u0000\u0000\u008d\u008e\u0005\u0002\u0000\u0000\u008e\u008f"+
		"\u0005\u0017\u0000\u0000\u008f\u0090\u0003\b\u0004\u0000\u0090\u0091\u0005"+
		"\u000e\u0000\u0000\u0091\u0092\u0003\b\u0004\u0000\u0092\u0093\u0001\u0000"+
		"\u0000\u0000\u0093\u0094\u0005\u0018\u0000\u0000\u0094\u0096\u0005\u0019"+
		"\u0000\u0000\u0095\u0097\u0003\u0002\u0001\u0000\u0096\u0095\u0001\u0000"+
		"\u0000\u0000\u0097\u0098\u0001\u0000\u0000\u0000\u0098\u0096\u0001\u0000"+
		"\u0000\u0000\u0098\u0099\u0001\u0000\u0000\u0000\u0099\u009a\u0001\u0000"+
		"\u0000\u0000\u009a\u009b\u0005\u001a\u0000\u0000\u009b\u009c\u0005\u0003"+
		"\u0000\u0000\u009c\u009e\u0005\u0019\u0000\u0000\u009d\u009f\u0003\u0002"+
		"\u0001\u0000\u009e\u009d\u0001\u0000\u0000\u0000\u009f\u00a0\u0001\u0000"+
		"\u0000\u0000\u00a0\u009e\u0001\u0000\u0000\u0000\u00a0\u00a1\u0001\u0000"+
		"\u0000\u0000\u00a1\u00a2\u0001\u0000\u0000\u0000\u00a2\u00a3\u0005\u001a"+
		"\u0000\u0000\u00a3\u00a5\u0001\u0000\u0000\u0000\u00a4~\u0001\u0000\u0000"+
		"\u0000\u00a4\u008d\u0001\u0000\u0000\u0000\u00a5\u0017\u0001\u0000\u0000"+
		"\u0000\u00a6\u00a7\u0005\u0004\u0000\u0000\u00a7\u00a8\u0005\u0017\u0000"+
		"\u0000\u00a8\u00a9\u0003\b\u0004\u0000\u00a9\u00aa\u0005\u000e\u0000\u0000"+
		"\u00aa\u00ab\u0003\b\u0004\u0000\u00ab\u00ac\u0001\u0000\u0000\u0000\u00ac"+
		"\u00ad\u0005\u0018\u0000\u0000\u00ad\u00af\u0005\u0019\u0000\u0000\u00ae"+
		"\u00b0\u0003\u0002\u0001\u0000\u00af\u00ae\u0001\u0000\u0000\u0000\u00b0"+
		"\u00b1\u0001\u0000\u0000\u0000\u00b1\u00af\u0001\u0000\u0000\u0000\u00b1"+
		"\u00b2\u0001\u0000\u0000\u0000\u00b2\u00b3\u0001\u0000\u0000\u0000\u00b3"+
		"\u00b4\u0005\u001a\u0000\u0000\u00b4\u0019\u0001\u0000\u0000\u0000\u00b5"+
		"\u00b6\u0005\u0005\u0000\u0000\u00b6\u00b7\u0005\u0011\u0000\u0000\u00b7"+
		"\u00ba\u0005\u0017\u0000\u0000\u00b8\u00b9\u0005\u0011\u0000\u0000\u00b9"+
		"\u00bb\u0005\u0015\u0000\u0000\u00ba\u00b8\u0001\u0000\u0000\u0000\u00ba"+
		"\u00bb\u0001\u0000\u0000\u0000\u00bb\u00c1\u0001\u0000\u0000\u0000\u00bc"+
		"\u00bd\u0005\u0006\u0000\u0000\u00bd\u00be\u0005\u0011\u0000\u0000\u00be"+
		"\u00c0\u0005\u0015\u0000\u0000\u00bf\u00bc\u0001\u0000\u0000\u0000\u00c0"+
		"\u00c3\u0001\u0000\u0000\u0000\u00c1\u00bf\u0001\u0000\u0000\u0000\u00c1"+
		"\u00c2\u0001\u0000\u0000\u0000\u00c2\u00c4\u0001\u0000\u0000\u0000\u00c3"+
		"\u00c1\u0001\u0000\u0000\u0000\u00c4\u00c5\u0005\u0018\u0000\u0000\u00c5"+
		"\u00c6\u0005\u0015\u0000\u0000\u00c6\u00c8\u0005\u0019\u0000\u0000\u00c7"+
		"\u00c9\u0003\u0002\u0001\u0000\u00c8\u00c7\u0001\u0000\u0000\u0000\u00c9"+
		"\u00ca\u0001\u0000\u0000\u0000\u00ca\u00c8\u0001\u0000\u0000\u0000\u00ca"+
		"\u00cb\u0001\u0000\u0000\u0000\u00cb\u00cc\u0001\u0000\u0000\u0000\u00cc"+
		"\u00cd\u0005\u0007\u0000\u0000\u00cd\u00ce\u0007\u0003\u0000\u0000\u00ce"+
		"\u00cf\u0005\u001d\u0000\u0000\u00cf\u00d0\u0005\u001a\u0000\u0000\u00d0"+
		"\u001b\u0001\u0000\u0000\u0000\u00d1\u00d2\u0005\u0011\u0000\u0000\u00d2"+
		"\u00d4\u0005\u0017\u0000\u0000\u00d3\u00d5\u0005\u0011\u0000\u0000\u00d4"+
		"\u00d3\u0001\u0000\u0000\u0000\u00d4\u00d5\u0001\u0000\u0000\u0000\u00d5"+
		"\u00da\u0001\u0000\u0000\u0000\u00d6\u00d7\u0005\u0006\u0000\u0000\u00d7"+
		"\u00d9\u0005\u0011\u0000\u0000\u00d8\u00d6\u0001\u0000\u0000\u0000\u00d9"+
		"\u00dc\u0001\u0000\u0000\u0000\u00da\u00d8\u0001\u0000\u0000\u0000\u00da"+
		"\u00db\u0001\u0000\u0000\u0000\u00db\u00dd\u0001\u0000\u0000\u0000\u00dc"+
		"\u00da\u0001\u0000\u0000\u0000\u00dd\u00de\u0005\u0018\u0000\u0000\u00de"+
		"\u001d\u0001\u0000\u0000\u0000\u00df\u00e0\u0005\u0011\u0000\u0000\u00e0"+
		"\u00e1\u0005\u0015\u0000\u0000\u00e1\u00e2\u0005\u0016\u0000\u0000\u00e2"+
		"\u00e4\u0005\u001b\u0000\u0000\u00e3\u00e5\u0007\u0004\u0000\u0000\u00e4"+
		"\u00e3\u0001\u0000\u0000\u0000\u00e4\u00e5\u0001\u0000\u0000\u0000\u00e5"+
		"\u00ea\u0001\u0000\u0000\u0000\u00e6\u00e7\u0005\u0006\u0000\u0000\u00e7"+
		"\u00e9\u0007\u0004\u0000\u0000\u00e8\u00e6\u0001\u0000\u0000\u0000\u00e9"+
		"\u00ec\u0001\u0000\u0000\u0000\u00ea\u00e8\u0001\u0000\u0000\u0000\u00ea"+
		"\u00eb\u0001\u0000\u0000\u0000\u00eb\u00ed\u0001\u0000\u0000\u0000\u00ec"+
		"\u00ea\u0001\u0000\u0000\u0000\u00ed\u00ee\u0005\u001c\u0000\u0000\u00ee"+
		"\u001f\u0001\u0000\u0000\u0000\u00ef\u00f0\u0005\u0011\u0000\u0000\u00f0"+
		"\u00f1\u0005\u001b\u0000\u0000\u00f1\u00f2\u0005\u000f\u0000\u0000\u00f2"+
		"\u00f3\u0005\u001c\u0000\u0000\u00f3!\u0001\u0000\u0000\u0000\u0015%?"+
		"HOV`how\u0089\u0098\u00a0\u00a4\u00b1\u00ba\u00c1\u00ca\u00d4\u00da\u00e4"+
		"\u00ea";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}