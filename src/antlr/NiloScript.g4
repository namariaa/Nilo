//  _      _  _     ____    ____  ____ ____  _  ____ _____ 
// / \  /|/ \/ \   /  _ \  / ___\/   _Y  __\/ \/  __Y__ __\
// | |\ ||| || |   | / \|  |    \|  / |  \/|| ||  \/| / \  
// | | \||| || |_/\| \_/|  \___ ||  \_|    /| ||  __/ | |  
// \_/  \|\_/\____/\____/  \____/\____|_/\_\\_/\_/    \_/                                                                                          
//                                                                      %%**********#%@                
//                                                                   %#*****************%%@            
//                                              @%#%@             @%***********************#%          
//                                           @%#***#@           %#*********%%@#*****##********%@       
//                                       %%%*******%          %#*********#    #*******#**********#%    
//                                    @%**********#@       @%***********#%    %********#%%%#####%@     
//                                  @%************%      %#*************%     %#********#@             
//                      @@%%%%%%%%%%%#####******#%%%%%%#***************#@      %*********%             
//                @%%##************************************************%        %#*******#@            
//            @%#*****************************************************%           %%*****%             
//         %%#*******************************************************#%              %***@             
//      @%#**********************************************************%                %#%              
//     %************************************************************%                                                           
//      @=:++=+***************************************************%                                    
//       %-.--...:*+#*******************************#************#%                                    
//        %=..+. ..=:.+*******************************##%%%%#***%                                      
//         %+..--...:=:.:+*************************************##%                                                               
//             #-..=-. . .+-.+******%****************##**************#%%                               
//               @+-.:=-.  .:=-:-=+++**##*************#%%#***************%@                            
//                  %*+::-==.. .:-=-......::::---::-+#%   @%%%%%%%#%%%%@@                              
//                       @#+-:+*-......-=++++*%%@@                                                     
//                              @@@@@@@@@@                                                             
                                                                                                    
grammar NiloScript;

//DO PARSER

program : (stmt)+ EOF; 

stmt : print SC
       | assignment SC
       | input SC
       | loop 
       | inCase
       | function
       | functionCall SC
       | list SC
       | expression SC
       | COMMENT;

assignment : VAR RETURN_TYPE EQUAL (term | input | acessList | functionCall);

expression : VAR EQUAL (term | acessList | functionCall);

term : term (PLUS | MINUS) term 
        | fact; 

fact :  fact (MUL | DIV | MOD) fact 
        | expo;

expo : expo (POW expo)
      | opPar;

opPar : OPAR term CPAR
        | typeSpecifier;

typeSpecifier : INT 
                | VAR
                | STRING  
                | BOOL
                | FLOAT;

// SYSCALL .-*+...-*+...-*+...-*+.. 
print : 'mostrar' OPAR (term | acessList) CPAR;
input : READ SC; 

// CONDICIONAL .-*+...-*+...-*+...-*+.. 
inCase : 'caso' OPAR (term OPERATOR term) CPAR OBRA (stmt)+ CBRA
                | 'caso' OPAR (term OPERATOR term) CPAR OBRA (stmt)+ CBRA 'senão' OBRA (stmt)+ CBRA;

// LOOP .-*+...-*+...-*+...-*+.. 
loop : 'enquanto' OPAR (term OPERATOR term) CPAR OBRA (stmt)+ CBRA;

// FUNCTION .-*+...-*+...-*+...-*+.. 
function : 'funcionalidade' VAR OPAR (VAR RETURN_TYPE)? (',' VAR RETURN_TYPE)* CPAR RETURN_TYPE OBRA (stmt)+ 'retorne' (TYPE | VAR) SC CBRA;
functionCall : VAR OPAR VAR? (',' VAR)* CPAR;

// ARRAY .-*+...-*+...-*+...-*+.. 
list : VAR RETURN_TYPE EQUAL OKEY (INT | FLOAT | STRING | BOOL)? (',' (INT | FLOAT | STRING | BOOL))* CKEY;
acessList : VAR OKEY INT CKEY;

//DO LEXER

// OPERATORS .-*+...-*+...-*+...-*+.. 
PLUS : '+';
MINUS : '-';
MUL : '*';
DIV : '/';
MOD : '%';
POW : '**';
OPERATOR : '==' | '!=' | '>' | '<' | '>=' | '<=' ;

// TYPES .-*+...-*+...-*+...-*+.. 
INT : [0-9]+;
FLOAT : [0-9]+ ',' [0-9]+;
VAR : [a-zA-Z_][a-zA-Z0-9_]*;
STRING : '"' ~('"')* '"';  
BOOL : 'verdadeiro' | 'falso';
TYPE : INT | FLOAT | STRING | BOOL;
RETURN_TYPE: ':' ('inteiro' | 'flutuante' | 'caracter' | 'bool' | 'nada');

// UTILS .-*+...-*+...-*+...-*+.. 
EQUAL : '=';
OPAR : '(';
CPAR : ')';
OBRA : '{';
CBRA : '}';
OKEY: '[';
CKEY: ']';
SC: ';' ;
READ : 'pegaInteiro' | 'pegaFlutuante' | 'pegaCaracter';

// SKIP .-*+...-*+...-*+...-*+.. 
COMMENT : ':)' ~[\r\n]+ -> skip;
TAB : [\t]+ -> skip; 
ENTER: [\r\n]+ -> skip;
SPACE : [ \t\r\n] -> skip;
WHITESPACE : [\t\u000C\r\n]+ -> skip;       
                                                                                                    
