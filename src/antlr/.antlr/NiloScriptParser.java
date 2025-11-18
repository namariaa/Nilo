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
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, INT=7, FLOAT=8, VAR=9, 
		STRING=10, BOOL=11, TYPE=12, PLUS=13, MINUS=14, MUL=15, DIV=16, MOD=17, 
		POW=18, OPERATOR=19, EQUAL=20, OPAR=21, CPAR=22, READ=23, COMMENT=24, 
		TAB=25, ENTER=26, SPACE=27, WHITESPACE=28;
	public static final int
		RULE_program = 0, RULE_code = 1, RULE_assignment = 2, RULE_expression = 3, 
		RULE_term = 4, RULE_pot = 5, RULE_fact = 6, RULE_print = 7, RULE_inCase = 8, 
		RULE_input = 9, RULE_loop = 10, RULE_function = 11;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "code", "assignment", "expression", "term", "pot", "fact", 
			"print", "inCase", "input", "loop", "function"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'mostrar'", "'caso'", "'{'", "'}'", "'enquanto'", "':'", null, 
			null, null, null, null, null, "'+'", "'-'", "'*'", "'/'", "'%'", "'**'", 
			null, "'='", "'('", "')'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, "INT", "FLOAT", "VAR", "STRING", 
			"BOOL", "TYPE", "PLUS", "MINUS", "MUL", "DIV", "MOD", "POW", "OPERATOR", 
			"EQUAL", "OPAR", "CPAR", "READ", "COMMENT", "TAB", "ENTER", "SPACE", 
			"WHITESPACE"
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
		public List<CodeContext> code() {
			return getRuleContexts(CodeContext.class);
		}
		public CodeContext code(int i) {
			return getRuleContext(CodeContext.class,i);
		}
		public List<TerminalNode> ENTER() { return getTokens(NiloScriptParser.ENTER); }
		public TerminalNode ENTER(int i) {
			return getToken(NiloScriptParser.ENTER, i);
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
			setState(31); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(24);
				code();
				setState(28);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==ENTER) {
					{
					{
					setState(25);
					match(ENTER);
					}
					}
					setState(30);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				}
				setState(33); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 19926950L) != 0) );
			setState(35);
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
	public static class CodeContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public PrintContext print() {
			return getRuleContext(PrintContext.class,0);
		}
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
		public CodeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_code; }
	}

	public final CodeContext code() throws RecognitionException {
		CodeContext _localctx = new CodeContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_code);
		try {
			setState(44);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(37);
				expression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(38);
				print();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(39);
				assignment();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(40);
				input();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(41);
				loop();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(42);
				inCase();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(43);
				function();
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
		public TerminalNode EQUAL() { return getToken(NiloScriptParser.EQUAL, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
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
			setState(46);
			match(VAR);
			setState(47);
			match(EQUAL);
			setState(48);
			expression(0);
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
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode PLUS() { return getToken(NiloScriptParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(NiloScriptParser.MINUS, 0); }
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 6;
		enterRecursionRule(_localctx, 6, RULE_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(51);
			term(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(61);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(59);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
					case 1:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(53);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(54);
						match(PLUS);
						setState(55);
						term(0);
						}
						break;
					case 2:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(56);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(57);
						match(MINUS);
						setState(58);
						term(0);
						}
						break;
					}
					} 
				}
				setState(63);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
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
	public static class TermContext extends ParserRuleContext {
		public PotContext pot() {
			return getRuleContext(PotContext.class,0);
		}
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public TerminalNode MUL() { return getToken(NiloScriptParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(NiloScriptParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(NiloScriptParser.MOD, 0); }
		public TermContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_term; }
	}

	public final TermContext term() throws RecognitionException {
		return term(0);
	}

	private TermContext term(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TermContext _localctx = new TermContext(_ctx, _parentState);
		TermContext _prevctx = _localctx;
		int _startState = 8;
		enterRecursionRule(_localctx, 8, RULE_term, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(65);
			pot();
			}
			_ctx.stop = _input.LT(-1);
			setState(78);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(76);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
					case 1:
						{
						_localctx = new TermContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_term);
						setState(67);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(68);
						match(MUL);
						setState(69);
						pot();
						}
						break;
					case 2:
						{
						_localctx = new TermContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_term);
						setState(70);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(71);
						match(DIV);
						setState(72);
						pot();
						}
						break;
					case 3:
						{
						_localctx = new TermContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_term);
						setState(73);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(74);
						match(MOD);
						setState(75);
						pot();
						}
						break;
					}
					} 
				}
				setState(80);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
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
	public static class PotContext extends ParserRuleContext {
		public FactContext fact() {
			return getRuleContext(FactContext.class,0);
		}
		public TerminalNode POW() { return getToken(NiloScriptParser.POW, 0); }
		public PotContext pot() {
			return getRuleContext(PotContext.class,0);
		}
		public PotContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pot; }
	}

	public final PotContext pot() throws RecognitionException {
		PotContext _localctx = new PotContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_pot);
		try {
			setState(86);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(81);
				fact();
				{
				setState(82);
				match(POW);
				setState(83);
				pot();
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(85);
				fact();
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
		public TerminalNode OPAR() { return getToken(NiloScriptParser.OPAR, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode CPAR() { return getToken(NiloScriptParser.CPAR, 0); }
		public TerminalNode INT() { return getToken(NiloScriptParser.INT, 0); }
		public TerminalNode VAR() { return getToken(NiloScriptParser.VAR, 0); }
		public TerminalNode STRING() { return getToken(NiloScriptParser.STRING, 0); }
		public TerminalNode COMMENT() { return getToken(NiloScriptParser.COMMENT, 0); }
		public TerminalNode BOOL() { return getToken(NiloScriptParser.BOOL, 0); }
		public TerminalNode FLOAT() { return getToken(NiloScriptParser.FLOAT, 0); }
		public FactContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fact; }
	}

	public final FactContext fact() throws RecognitionException {
		FactContext _localctx = new FactContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_fact);
		try {
			setState(98);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPAR:
				enterOuterAlt(_localctx, 1);
				{
				setState(88);
				match(OPAR);
				setState(89);
				expression(0);
				setState(90);
				match(CPAR);
				}
				break;
			case INT:
				enterOuterAlt(_localctx, 2);
				{
				setState(92);
				match(INT);
				}
				break;
			case VAR:
				enterOuterAlt(_localctx, 3);
				{
				setState(93);
				match(VAR);
				}
				break;
			case STRING:
				enterOuterAlt(_localctx, 4);
				{
				setState(94);
				match(STRING);
				}
				break;
			case COMMENT:
				enterOuterAlt(_localctx, 5);
				{
				setState(95);
				match(COMMENT);
				}
				break;
			case BOOL:
				enterOuterAlt(_localctx, 6);
				{
				setState(96);
				match(BOOL);
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 7);
				{
				setState(97);
				match(FLOAT);
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
	public static class PrintContext extends ParserRuleContext {
		public TerminalNode OPAR() { return getToken(NiloScriptParser.OPAR, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode CPAR() { return getToken(NiloScriptParser.CPAR, 0); }
		public PrintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_print; }
	}

	public final PrintContext print() throws RecognitionException {
		PrintContext _localctx = new PrintContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_print);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(100);
			match(T__0);
			setState(101);
			match(OPAR);
			setState(102);
			expression(0);
			setState(103);
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
	public static class InCaseContext extends ParserRuleContext {
		public TerminalNode OPAR() { return getToken(NiloScriptParser.OPAR, 0); }
		public TerminalNode CPAR() { return getToken(NiloScriptParser.CPAR, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode OPERATOR() { return getToken(NiloScriptParser.OPERATOR, 0); }
		public TerminalNode BOOL() { return getToken(NiloScriptParser.BOOL, 0); }
		public List<CodeContext> code() {
			return getRuleContexts(CodeContext.class);
		}
		public CodeContext code(int i) {
			return getRuleContext(CodeContext.class,i);
		}
		public InCaseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inCase; }
	}

	public final InCaseContext inCase() throws RecognitionException {
		InCaseContext _localctx = new InCaseContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_inCase);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(105);
			match(T__1);
			setState(106);
			match(OPAR);
			setState(113);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				{
				setState(107);
				expression(0);
				setState(108);
				match(OPERATOR);
				setState(109);
				expression(0);
				}
				break;
			case 2:
				{
				setState(111);
				match(BOOL);
				setState(112);
				expression(0);
				}
				break;
			}
			setState(115);
			match(CPAR);
			setState(116);
			match(T__2);
			setState(118); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(117);
				code();
				}
				}
				setState(120); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 19926950L) != 0) );
			setState(122);
			match(T__3);
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
		public TerminalNode EQUAL() { return getToken(NiloScriptParser.EQUAL, 0); }
		public TerminalNode VAR() { return getToken(NiloScriptParser.VAR, 0); }
		public TerminalNode READ() { return getToken(NiloScriptParser.READ, 0); }
		public InputContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_input; }
	}

	public final InputContext input() throws RecognitionException {
		InputContext _localctx = new InputContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_input);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(125);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==VAR) {
				{
				setState(124);
				match(VAR);
				}
			}

			setState(127);
			match(EQUAL);
			setState(129);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==READ) {
				{
				setState(128);
				match(READ);
				}
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
	public static class LoopContext extends ParserRuleContext {
		public TerminalNode OPAR() { return getToken(NiloScriptParser.OPAR, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode OPERATOR() { return getToken(NiloScriptParser.OPERATOR, 0); }
		public TerminalNode CPAR() { return getToken(NiloScriptParser.CPAR, 0); }
		public List<CodeContext> code() {
			return getRuleContexts(CodeContext.class);
		}
		public CodeContext code(int i) {
			return getRuleContext(CodeContext.class,i);
		}
		public LoopContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loop; }
	}

	public final LoopContext loop() throws RecognitionException {
		LoopContext _localctx = new LoopContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_loop);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(131);
			match(T__4);
			setState(132);
			match(OPAR);
			setState(133);
			expression(0);
			setState(134);
			match(OPERATOR);
			setState(135);
			expression(0);
			setState(136);
			match(CPAR);
			setState(137);
			match(T__2);
			setState(139); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(138);
				code();
				}
				}
				setState(141); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 19926950L) != 0) );
			setState(143);
			match(T__3);
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
		public TerminalNode OPAR() { return getToken(NiloScriptParser.OPAR, 0); }
		public TerminalNode CPAR() { return getToken(NiloScriptParser.CPAR, 0); }
		public List<TerminalNode> TYPE() { return getTokens(NiloScriptParser.TYPE); }
		public TerminalNode TYPE(int i) {
			return getToken(NiloScriptParser.TYPE, i);
		}
		public TerminalNode VAR() { return getToken(NiloScriptParser.VAR, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<CodeContext> code() {
			return getRuleContexts(CodeContext.class);
		}
		public CodeContext code(int i) {
			return getRuleContext(CodeContext.class,i);
		}
		public FunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function; }
	}

	public final FunctionContext function() throws RecognitionException {
		FunctionContext _localctx = new FunctionContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_function);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(146);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==VAR) {
				{
				setState(145);
				match(VAR);
				}
			}

			setState(148);
			match(OPAR);
			setState(151); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(149);
				match(TYPE);
				setState(150);
				expression(0);
				}
				}
				setState(153); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==TYPE );
			setState(155);
			match(CPAR);
			setState(156);
			match(T__5);
			setState(157);
			match(TYPE);
			setState(158);
			match(T__2);
			setState(160); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(159);
				code();
				}
				}
				setState(162); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 19926950L) != 0) );
			setState(164);
			match(T__3);
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
		case 3:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		case 4:
			return term_sempred((TermContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 3);
		case 1:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean term_sempred(TermContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 4);
		case 3:
			return precpred(_ctx, 3);
		case 4:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001\u001c\u00a7\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001"+
		"\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004"+
		"\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007"+
		"\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b"+
		"\u0001\u0000\u0001\u0000\u0005\u0000\u001b\b\u0000\n\u0000\f\u0000\u001e"+
		"\t\u0000\u0004\u0000 \b\u0000\u000b\u0000\f\u0000!\u0001\u0000\u0001\u0000"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0003\u0001-\b\u0001\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0005\u0003<\b\u0003"+
		"\n\u0003\f\u0003?\t\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0005\u0004M\b\u0004\n\u0004\f\u0004P\t\u0004"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0003\u0005"+
		"W\b\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0003\u0006"+
		"c\b\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0003"+
		"\br\b\b\u0001\b\u0001\b\u0001\b\u0004\bw\b\b\u000b\b\f\bx\u0001\b\u0001"+
		"\b\u0001\t\u0003\t~\b\t\u0001\t\u0001\t\u0003\t\u0082\b\t\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0004\n\u008c\b\n\u000b"+
		"\n\f\n\u008d\u0001\n\u0001\n\u0001\u000b\u0003\u000b\u0093\b\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0004\u000b\u0098\b\u000b\u000b\u000b\f"+
		"\u000b\u0099\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0004\u000b\u00a1\b\u000b\u000b\u000b\f\u000b\u00a2\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0000\u0002\u0006\b\f\u0000\u0002\u0004\u0006\b\n\f"+
		"\u000e\u0010\u0012\u0014\u0016\u0000\u0000\u00b6\u0000\u001f\u0001\u0000"+
		"\u0000\u0000\u0002,\u0001\u0000\u0000\u0000\u0004.\u0001\u0000\u0000\u0000"+
		"\u00062\u0001\u0000\u0000\u0000\b@\u0001\u0000\u0000\u0000\nV\u0001\u0000"+
		"\u0000\u0000\fb\u0001\u0000\u0000\u0000\u000ed\u0001\u0000\u0000\u0000"+
		"\u0010i\u0001\u0000\u0000\u0000\u0012}\u0001\u0000\u0000\u0000\u0014\u0083"+
		"\u0001\u0000\u0000\u0000\u0016\u0092\u0001\u0000\u0000\u0000\u0018\u001c"+
		"\u0003\u0002\u0001\u0000\u0019\u001b\u0005\u001a\u0000\u0000\u001a\u0019"+
		"\u0001\u0000\u0000\u0000\u001b\u001e\u0001\u0000\u0000\u0000\u001c\u001a"+
		"\u0001\u0000\u0000\u0000\u001c\u001d\u0001\u0000\u0000\u0000\u001d \u0001"+
		"\u0000\u0000\u0000\u001e\u001c\u0001\u0000\u0000\u0000\u001f\u0018\u0001"+
		"\u0000\u0000\u0000 !\u0001\u0000\u0000\u0000!\u001f\u0001\u0000\u0000"+
		"\u0000!\"\u0001\u0000\u0000\u0000\"#\u0001\u0000\u0000\u0000#$\u0005\u0000"+
		"\u0000\u0001$\u0001\u0001\u0000\u0000\u0000%-\u0003\u0006\u0003\u0000"+
		"&-\u0003\u000e\u0007\u0000\'-\u0003\u0004\u0002\u0000(-\u0003\u0012\t"+
		"\u0000)-\u0003\u0014\n\u0000*-\u0003\u0010\b\u0000+-\u0003\u0016\u000b"+
		"\u0000,%\u0001\u0000\u0000\u0000,&\u0001\u0000\u0000\u0000,\'\u0001\u0000"+
		"\u0000\u0000,(\u0001\u0000\u0000\u0000,)\u0001\u0000\u0000\u0000,*\u0001"+
		"\u0000\u0000\u0000,+\u0001\u0000\u0000\u0000-\u0003\u0001\u0000\u0000"+
		"\u0000./\u0005\t\u0000\u0000/0\u0005\u0014\u0000\u000001\u0003\u0006\u0003"+
		"\u00001\u0005\u0001\u0000\u0000\u000023\u0006\u0003\uffff\uffff\u0000"+
		"34\u0003\b\u0004\u00004=\u0001\u0000\u0000\u000056\n\u0003\u0000\u0000"+
		"67\u0005\r\u0000\u00007<\u0003\b\u0004\u000089\n\u0002\u0000\u00009:\u0005"+
		"\u000e\u0000\u0000:<\u0003\b\u0004\u0000;5\u0001\u0000\u0000\u0000;8\u0001"+
		"\u0000\u0000\u0000<?\u0001\u0000\u0000\u0000=;\u0001\u0000\u0000\u0000"+
		"=>\u0001\u0000\u0000\u0000>\u0007\u0001\u0000\u0000\u0000?=\u0001\u0000"+
		"\u0000\u0000@A\u0006\u0004\uffff\uffff\u0000AB\u0003\n\u0005\u0000BN\u0001"+
		"\u0000\u0000\u0000CD\n\u0004\u0000\u0000DE\u0005\u000f\u0000\u0000EM\u0003"+
		"\n\u0005\u0000FG\n\u0003\u0000\u0000GH\u0005\u0010\u0000\u0000HM\u0003"+
		"\n\u0005\u0000IJ\n\u0002\u0000\u0000JK\u0005\u0011\u0000\u0000KM\u0003"+
		"\n\u0005\u0000LC\u0001\u0000\u0000\u0000LF\u0001\u0000\u0000\u0000LI\u0001"+
		"\u0000\u0000\u0000MP\u0001\u0000\u0000\u0000NL\u0001\u0000\u0000\u0000"+
		"NO\u0001\u0000\u0000\u0000O\t\u0001\u0000\u0000\u0000PN\u0001\u0000\u0000"+
		"\u0000QR\u0003\f\u0006\u0000RS\u0005\u0012\u0000\u0000ST\u0003\n\u0005"+
		"\u0000TW\u0001\u0000\u0000\u0000UW\u0003\f\u0006\u0000VQ\u0001\u0000\u0000"+
		"\u0000VU\u0001\u0000\u0000\u0000W\u000b\u0001\u0000\u0000\u0000XY\u0005"+
		"\u0015\u0000\u0000YZ\u0003\u0006\u0003\u0000Z[\u0005\u0016\u0000\u0000"+
		"[c\u0001\u0000\u0000\u0000\\c\u0005\u0007\u0000\u0000]c\u0005\t\u0000"+
		"\u0000^c\u0005\n\u0000\u0000_c\u0005\u0018\u0000\u0000`c\u0005\u000b\u0000"+
		"\u0000ac\u0005\b\u0000\u0000bX\u0001\u0000\u0000\u0000b\\\u0001\u0000"+
		"\u0000\u0000b]\u0001\u0000\u0000\u0000b^\u0001\u0000\u0000\u0000b_\u0001"+
		"\u0000\u0000\u0000b`\u0001\u0000\u0000\u0000ba\u0001\u0000\u0000\u0000"+
		"c\r\u0001\u0000\u0000\u0000de\u0005\u0001\u0000\u0000ef\u0005\u0015\u0000"+
		"\u0000fg\u0003\u0006\u0003\u0000gh\u0005\u0016\u0000\u0000h\u000f\u0001"+
		"\u0000\u0000\u0000ij\u0005\u0002\u0000\u0000jq\u0005\u0015\u0000\u0000"+
		"kl\u0003\u0006\u0003\u0000lm\u0005\u0013\u0000\u0000mn\u0003\u0006\u0003"+
		"\u0000nr\u0001\u0000\u0000\u0000op\u0005\u000b\u0000\u0000pr\u0003\u0006"+
		"\u0003\u0000qk\u0001\u0000\u0000\u0000qo\u0001\u0000\u0000\u0000rs\u0001"+
		"\u0000\u0000\u0000st\u0005\u0016\u0000\u0000tv\u0005\u0003\u0000\u0000"+
		"uw\u0003\u0002\u0001\u0000vu\u0001\u0000\u0000\u0000wx\u0001\u0000\u0000"+
		"\u0000xv\u0001\u0000\u0000\u0000xy\u0001\u0000\u0000\u0000yz\u0001\u0000"+
		"\u0000\u0000z{\u0005\u0004\u0000\u0000{\u0011\u0001\u0000\u0000\u0000"+
		"|~\u0005\t\u0000\u0000}|\u0001\u0000\u0000\u0000}~\u0001\u0000\u0000\u0000"+
		"~\u007f\u0001\u0000\u0000\u0000\u007f\u0081\u0005\u0014\u0000\u0000\u0080"+
		"\u0082\u0005\u0017\u0000\u0000\u0081\u0080\u0001\u0000\u0000\u0000\u0081"+
		"\u0082\u0001\u0000\u0000\u0000\u0082\u0013\u0001\u0000\u0000\u0000\u0083"+
		"\u0084\u0005\u0005\u0000\u0000\u0084\u0085\u0005\u0015\u0000\u0000\u0085"+
		"\u0086\u0003\u0006\u0003\u0000\u0086\u0087\u0005\u0013\u0000\u0000\u0087"+
		"\u0088\u0003\u0006\u0003\u0000\u0088\u0089\u0005\u0016\u0000\u0000\u0089"+
		"\u008b\u0005\u0003\u0000\u0000\u008a\u008c\u0003\u0002\u0001\u0000\u008b"+
		"\u008a\u0001\u0000\u0000\u0000\u008c\u008d\u0001\u0000\u0000\u0000\u008d"+
		"\u008b\u0001\u0000\u0000\u0000\u008d\u008e\u0001\u0000\u0000\u0000\u008e"+
		"\u008f\u0001\u0000\u0000\u0000\u008f\u0090\u0005\u0004\u0000\u0000\u0090"+
		"\u0015\u0001\u0000\u0000\u0000\u0091\u0093\u0005\t\u0000\u0000\u0092\u0091"+
		"\u0001\u0000\u0000\u0000\u0092\u0093\u0001\u0000\u0000\u0000\u0093\u0094"+
		"\u0001\u0000\u0000\u0000\u0094\u0097\u0005\u0015\u0000\u0000\u0095\u0096"+
		"\u0005\f\u0000\u0000\u0096\u0098\u0003\u0006\u0003\u0000\u0097\u0095\u0001"+
		"\u0000\u0000\u0000\u0098\u0099\u0001\u0000\u0000\u0000\u0099\u0097\u0001"+
		"\u0000\u0000\u0000\u0099\u009a\u0001\u0000\u0000\u0000\u009a\u009b\u0001"+
		"\u0000\u0000\u0000\u009b\u009c\u0005\u0016\u0000\u0000\u009c\u009d\u0005"+
		"\u0006\u0000\u0000\u009d\u009e\u0005\f\u0000\u0000\u009e\u00a0\u0005\u0003"+
		"\u0000\u0000\u009f\u00a1\u0003\u0002\u0001\u0000\u00a0\u009f\u0001\u0000"+
		"\u0000\u0000\u00a1\u00a2\u0001\u0000\u0000\u0000\u00a2\u00a0\u0001\u0000"+
		"\u0000\u0000\u00a2\u00a3\u0001\u0000\u0000\u0000\u00a3\u00a4\u0001\u0000"+
		"\u0000\u0000\u00a4\u00a5\u0005\u0004\u0000\u0000\u00a5\u0017\u0001\u0000"+
		"\u0000\u0000\u0011\u001c!,;=LNVbqx}\u0081\u008d\u0092\u0099\u00a2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}