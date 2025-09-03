grammar NiloScript;

//DO PARSER
expression : expression '+' term 
            | expression '-' term 
            | term
            | print; 
term :  term '*' fact 
        | term '/' fact
        | fact;
fact : '('expression')'
        | INT 
        | VAR;
print: 'print' '(' expression ')';

//DO LEXER
INT : [0-9]+;
VAR: [a-z]+;
STRING: '"' ~('"')* '"';  
TAB: [ \t]+ -> skip;
ENTER: [\r\n]+ -> skip;
WHITESPACE: [ \t\u000C\r\n]+ -> skip;
