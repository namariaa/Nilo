grammar NiloScript;

//DO PARSER

program : code EOF;

code : expression 
       | print
       | assignment
       | inCase;

assignment : VAR '=' expression;

expression : expression '+' term 
            | expression '-' term 
            | term; 
term :  term '*' fact 
        | term '/' fact
        | fact;
fact : '('expression')'
        | INT 
        | VAR
        | STRING
        | COMMENT;
print : 'print' '(' expression ')';
inCase : 'case' '(' expression ')' ;

//DO LEXER
INT : [0-9]+;
VAR : [a-zA-Z_]+;
STRING : '"' ~('"')* '"';  
COMMENT : ':)' ~[\r\n]+ -> skip;
TAB : [\t]+ -> skip;
ENTER : [\r\n]+ -> skip;
SPACE : [ \t\r\n] -> skip;
WHITESPACE : [\t\u000C\r\n]+ -> skip;
