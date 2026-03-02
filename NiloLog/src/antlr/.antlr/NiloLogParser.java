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
		STRING=1, BOOL=2, INT=3, FLOAT=4, NILOCODE=5, FORMAT=6, PHASE=7, SHOW=8, 
		OPAR=9, CPAR=10, OBRA=11, CBRA=12, OKEY=13, CKEY=14, OASTSLA=15, CASTSLA=16, 
		PDF=17, PNG=18, ENTRY=19, COLON=20, IN=21, LEXER=22, PARSER=23, IR=24, 
		TAB=25, ENTER=26, SPACE=27, WHITESPACE=28;
	public static final int
		RULE_stmts = 0, RULE_log = 1, RULE_input = 2, RULE_program = 3;
	private static String[] makeRuleNames() {
		return new String[] {
			"stmts", "log", "input", "program"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, "'exiba'", "'('", "')'", 
			"'{'", "'}'", "'['", "']'", "'/*'", "'*/'", "'PDF'", "'PNG'", "'entrada'", 
			"':'", "'em'", "'lexer'", "'parser'", "'representa\\u00E7\\u00E3o intermedi\\u00E1ria'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "STRING", "BOOL", "INT", "FLOAT", "NILOCODE", "FORMAT", "PHASE", 
			"SHOW", "OPAR", "CPAR", "OBRA", "CBRA", "OKEY", "CKEY", "OASTSLA", "CASTSLA", 
			"PDF", "PNG", "ENTRY", "COLON", "IN", "LEXER", "PARSER", "IR", "TAB", 
			"ENTER", "SPACE", "WHITESPACE"
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
	public static class StmtsContext extends ParserRuleContext {
		public LogContext log() {
			return getRuleContext(LogContext.class,0);
		}
		public TerminalNode EOF() { return getToken(NiloLogParser.EOF, 0); }
		public StmtsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmts; }
	}

	public final StmtsContext stmts() throws RecognitionException {
		StmtsContext _localctx = new StmtsContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_stmts);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(8);
			log();
			setState(9);
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
	public static class LogContext extends ParserRuleContext {
		public TerminalNode SHOW() { return getToken(NiloLogParser.SHOW, 0); }
		public TerminalNode OPAR() { return getToken(NiloLogParser.OPAR, 0); }
		public TerminalNode PHASE() { return getToken(NiloLogParser.PHASE, 0); }
		public TerminalNode CPAR() { return getToken(NiloLogParser.CPAR, 0); }
		public TerminalNode IN() { return getToken(NiloLogParser.IN, 0); }
		public TerminalNode FORMAT() { return getToken(NiloLogParser.FORMAT, 0); }
		public TerminalNode OBRA() { return getToken(NiloLogParser.OBRA, 0); }
		public TerminalNode ENTER() { return getToken(NiloLogParser.ENTER, 0); }
		public ProgramContext program() {
			return getRuleContext(ProgramContext.class,0);
		}
		public TerminalNode CBRA() { return getToken(NiloLogParser.CBRA, 0); }
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
		enterRule(_localctx, 2, RULE_log);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(11);
			match(SHOW);
			setState(12);
			match(OPAR);
			setState(13);
			match(PHASE);
			setState(14);
			match(CPAR);
			setState(15);
			match(IN);
			setState(16);
			match(FORMAT);
			setState(17);
			match(OBRA);
			setState(19);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ENTRY) {
				{
				setState(18);
				input();
				}
			}

			setState(21);
			match(ENTER);
			setState(22);
			program();
			setState(23);
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
	public static class InputContext extends ParserRuleContext {
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
		enterRule(_localctx, 4, RULE_input);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(25);
			match(ENTRY);
			setState(26);
			match(COLON);
			setState(27);
			match(OKEY);
			setState(29); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(28);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 30L) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				setState(31); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 30L) != 0) );
			setState(33);
			match(CKEY);
			setState(34);
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
		public TerminalNode NILOCODE() { return getToken(NiloLogParser.NILOCODE, 0); }
		public TerminalNode ENTER() { return getToken(NiloLogParser.ENTER, 0); }
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_program);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(36);
			match(NILOCODE);
			setState(37);
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
		"\u0004\u0001\u001c(\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0001\u0000\u0001\u0000\u0001"+
		"\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0003\u0001\u0014\b\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0004\u0002\u001e\b\u0002\u000b\u0002\f\u0002\u001f\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0000\u0000\u0004\u0000\u0002\u0004\u0006\u0000\u0001\u0001\u0000\u0001"+
		"\u0004%\u0000\b\u0001\u0000\u0000\u0000\u0002\u000b\u0001\u0000\u0000"+
		"\u0000\u0004\u0019\u0001\u0000\u0000\u0000\u0006$\u0001\u0000\u0000\u0000"+
		"\b\t\u0003\u0002\u0001\u0000\t\n\u0005\u0000\u0000\u0001\n\u0001\u0001"+
		"\u0000\u0000\u0000\u000b\f\u0005\b\u0000\u0000\f\r\u0005\t\u0000\u0000"+
		"\r\u000e\u0005\u0007\u0000\u0000\u000e\u000f\u0005\n\u0000\u0000\u000f"+
		"\u0010\u0005\u0015\u0000\u0000\u0010\u0011\u0005\u0006\u0000\u0000\u0011"+
		"\u0013\u0005\u000b\u0000\u0000\u0012\u0014\u0003\u0004\u0002\u0000\u0013"+
		"\u0012\u0001\u0000\u0000\u0000\u0013\u0014\u0001\u0000\u0000\u0000\u0014"+
		"\u0015\u0001\u0000\u0000\u0000\u0015\u0016\u0005\u001a\u0000\u0000\u0016"+
		"\u0017\u0003\u0006\u0003\u0000\u0017\u0018\u0005\f\u0000\u0000\u0018\u0003"+
		"\u0001\u0000\u0000\u0000\u0019\u001a\u0005\u0013\u0000\u0000\u001a\u001b"+
		"\u0005\u0014\u0000\u0000\u001b\u001d\u0005\r\u0000\u0000\u001c\u001e\u0007"+
		"\u0000\u0000\u0000\u001d\u001c\u0001\u0000\u0000\u0000\u001e\u001f\u0001"+
		"\u0000\u0000\u0000\u001f\u001d\u0001\u0000\u0000\u0000\u001f \u0001\u0000"+
		"\u0000\u0000 !\u0001\u0000\u0000\u0000!\"\u0005\u000e\u0000\u0000\"#\u0005"+
		"\u001a\u0000\u0000#\u0005\u0001\u0000\u0000\u0000$%\u0005\u0005\u0000"+
		"\u0000%&\u0005\u001a\u0000\u0000&\u0007\u0001\u0000\u0000\u0000\u0002"+
		"\u0013\u001f";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}