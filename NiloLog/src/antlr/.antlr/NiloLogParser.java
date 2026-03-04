// Generated from /home/namaria/Gram-tica-com-ANTLR/NiloLog/src/antlr/NiloLog.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class NiloLogParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		STRING=1, BOOL=2, INT=3, FLOAT=4, NILOCODE=5, PHASE=6, SHOW=7, OPAR=8, 
		CPAR=9, OBRA=10, CBRA=11, OKEY=12, CKEY=13, OASTSLA=14, CASTSLA=15, ENTRY=16, 
		PROGRAM=17, COLON=18, LEXER=19, PARSER=20, IR=21, TAB=22, ENTER=23, SPACE=24, 
		WHITESPACE=25;
	public static final int
		RULE_log = 0, RULE_input = 1, RULE_program = 2;
	private static String[] makeRuleNames() {
		return new String[] {
			"log", "input", "program"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, null, null, "'exiba'", "'('", "')'", "'{'", 
			"'}'", "'['", "']'", "'/*'", "'*/'", "'entrada'", "'programa'", "':'", 
			"'lexer'", "'parser'", "'representa\\u00E7\\u00E3o intermedi\\u00E1ria'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "STRING", "BOOL", "INT", "FLOAT", "NILOCODE", "PHASE", "SHOW", 
			"OPAR", "CPAR", "OBRA", "CBRA", "OKEY", "CKEY", "OASTSLA", "CASTSLA", 
			"ENTRY", "PROGRAM", "COLON", "LEXER", "PARSER", "IR", "TAB", "ENTER", 
			"SPACE", "WHITESPACE"
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
	public String getGrammarFileName() { return "NiloLog.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public NiloLogParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LogContext extends ParserRuleContext {
		public TerminalNode SHOW() { return getToken(NiloLogParser.SHOW, 0); }
		public TerminalNode OPAR() { return getToken(NiloLogParser.OPAR, 0); }
		public TerminalNode PHASE() { return getToken(NiloLogParser.PHASE, 0); }
		public TerminalNode CPAR() { return getToken(NiloLogParser.CPAR, 0); }
		public TerminalNode OBRA() { return getToken(NiloLogParser.OBRA, 0); }
		public TerminalNode ENTER() { return getToken(NiloLogParser.ENTER, 0); }
		public ProgramContext program() {
			return getRuleContext(ProgramContext.class,0);
		}
		public TerminalNode CBRA() { return getToken(NiloLogParser.CBRA, 0); }
		public TerminalNode EOF() { return getToken(NiloLogParser.EOF, 0); }
		public InputContext input() {
			return getRuleContext(InputContext.class,0);
		}
		public LogContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_log; }
	}

	public final LogContext log() throws RecognitionException {
		LogContext _localctx = new LogContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_log);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(6);
			match(SHOW);
			setState(7);
			match(OPAR);
			setState(8);
			match(PHASE);
			setState(9);
			match(CPAR);
			setState(10);
			match(OBRA);
			setState(12);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ENTRY) {
				{
				setState(11);
				input();
				}
			}

			setState(14);
			match(ENTER);
			setState(15);
			program();
			setState(16);
			match(CBRA);
			setState(17);
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
	public static class InputContext extends ParserRuleContext {
		public Token listValues;
		public TerminalNode ENTRY() { return getToken(NiloLogParser.ENTRY, 0); }
		public TerminalNode COLON() { return getToken(NiloLogParser.COLON, 0); }
		public TerminalNode OKEY() { return getToken(NiloLogParser.OKEY, 0); }
		public TerminalNode CKEY() { return getToken(NiloLogParser.CKEY, 0); }
		public TerminalNode ENTER() { return getToken(NiloLogParser.ENTER, 0); }
		public List<TerminalNode> STRING() { return getTokens(NiloLogParser.STRING); }
		public TerminalNode STRING(int i) {
			return getToken(NiloLogParser.STRING, i);
		}
		public List<TerminalNode> BOOL() { return getTokens(NiloLogParser.BOOL); }
		public TerminalNode BOOL(int i) {
			return getToken(NiloLogParser.BOOL, i);
		}
		public List<TerminalNode> INT() { return getTokens(NiloLogParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(NiloLogParser.INT, i);
		}
		public List<TerminalNode> FLOAT() { return getTokens(NiloLogParser.FLOAT); }
		public TerminalNode FLOAT(int i) {
			return getToken(NiloLogParser.FLOAT, i);
		}
		public InputContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_input; }
	}

	public final InputContext input() throws RecognitionException {
		InputContext _localctx = new InputContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_input);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(19);
			match(ENTRY);
			setState(20);
			match(COLON);
			setState(21);
			match(OKEY);
			setState(23); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(22);
				((InputContext)_localctx).listValues = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 30L) != 0)) ) {
					((InputContext)_localctx).listValues = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				setState(25); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 30L) != 0) );
			setState(27);
			match(CKEY);
			setState(28);
			match(ENTER);
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
	public static class ProgramContext extends ParserRuleContext {
		public TerminalNode PROGRAM() { return getToken(NiloLogParser.PROGRAM, 0); }
		public TerminalNode COLON() { return getToken(NiloLogParser.COLON, 0); }
		public TerminalNode NILOCODE() { return getToken(NiloLogParser.NILOCODE, 0); }
		public TerminalNode ENTER() { return getToken(NiloLogParser.ENTER, 0); }
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_program);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(30);
			match(PROGRAM);
			setState(31);
			match(COLON);
			setState(32);
			match(NILOCODE);
			setState(33);
			match(ENTER);
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

	public static final String _serializedATN =
		"\u0004\u0001\u0019$\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001"+
		"\u0000\u0001\u0000\u0003\u0000\r\b\u0000\u0001\u0000\u0001\u0000\u0001"+
		"\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0004\u0001\u0018\b\u0001\u000b\u0001\f\u0001\u0019\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0000\u0000\u0003\u0000\u0002\u0004\u0000\u0001"+
		"\u0001\u0000\u0001\u0004\"\u0000\u0006\u0001\u0000\u0000\u0000\u0002\u0013"+
		"\u0001\u0000\u0000\u0000\u0004\u001e\u0001\u0000\u0000\u0000\u0006\u0007"+
		"\u0005\u0007\u0000\u0000\u0007\b\u0005\b\u0000\u0000\b\t\u0005\u0006\u0000"+
		"\u0000\t\n\u0005\t\u0000\u0000\n\f\u0005\n\u0000\u0000\u000b\r\u0003\u0002"+
		"\u0001\u0000\f\u000b\u0001\u0000\u0000\u0000\f\r\u0001\u0000\u0000\u0000"+
		"\r\u000e\u0001\u0000\u0000\u0000\u000e\u000f\u0005\u0017\u0000\u0000\u000f"+
		"\u0010\u0003\u0004\u0002\u0000\u0010\u0011\u0005\u000b\u0000\u0000\u0011"+
		"\u0012\u0005\u0000\u0000\u0001\u0012\u0001\u0001\u0000\u0000\u0000\u0013"+
		"\u0014\u0005\u0010\u0000\u0000\u0014\u0015\u0005\u0012\u0000\u0000\u0015"+
		"\u0017\u0005\f\u0000\u0000\u0016\u0018\u0007\u0000\u0000\u0000\u0017\u0016"+
		"\u0001\u0000\u0000\u0000\u0018\u0019\u0001\u0000\u0000\u0000\u0019\u0017"+
		"\u0001\u0000\u0000\u0000\u0019\u001a\u0001\u0000\u0000\u0000\u001a\u001b"+
		"\u0001\u0000\u0000\u0000\u001b\u001c\u0005\r\u0000\u0000\u001c\u001d\u0005"+
		"\u0017\u0000\u0000\u001d\u0003\u0001\u0000\u0000\u0000\u001e\u001f\u0005"+
		"\u0011\u0000\u0000\u001f \u0005\u0012\u0000\u0000 !\u0005\u0005\u0000"+
		"\u0000!\"\u0005\u0017\u0000\u0000\"\u0005\u0001\u0000\u0000\u0000\u0002"+
		"\f\u0019";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}