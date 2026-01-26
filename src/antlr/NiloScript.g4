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
       | loop 
       | inCase
       | function
       | functionCall SC
       | list SC
       | expression SC
       | COMMENT;

assignment : VAR (COLON RETURN_TYPE) EQUAL (term | input | acessList | functionCall);

expression : VAR EQUAL (term | acessList | functionCall | input);

term : term (PLUS | MINUS) fact 
        | fact; 

fact :  fact (MUL | DIV | MOD) expo 
        | expo;

expo : opPar (POW expo)
      | opPar;

opPar : OPAR term CPAR
        | typeSpecifier;

typeSpecifier : INT 
                | VAR
                | STRING  
                | BOOL
                | FLOAT;

// SYSCALL .-*+...-*+...-*+...-*+.. 
print : SHOW OPAR (term | acessList) CPAR;
input : READ; 

// CONDICIONAL .-*+...-*+...-*+...-*+.. 
inCase : CASE OPAR (term OPERATOR term) CPAR OBRA (thenBlock+=stmt)+ CBRA (ELSE OBRA (elseStmt+=stmt)+ CBRA)?;

// LOOP .-*+...-*+...-*+...-*+.. 
loop : 'enquanto' OPAR (term OPERATOR term) CPAR OBRA (stmt)+ CBRA;

// FUNCTION .-*+...-*+...-*+...-*+.. 
function : 'funcionalidade' VAR OPAR (VAR RETURN_TYPE)? (',' VAR  RETURN_TYPE)* CPAR  RETURN_TYPE OBRA (stmt)+ 'retorne' (TYPE | VAR) SC CBRA;
functionCall : VAR OPAR VAR? (',' VAR)* CPAR;

// ARRAY .-*+...-*+...-*+...-*+.. 
list : VAR  RETURN_TYPE EQUAL OKEY (INT | FLOAT | STRING | BOOL)? (',' (INT | FLOAT | STRING | BOOL))* CKEY;
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

// UTILS .-*+...-*+...-*+...-*+.. 
EQUAL : '=';
OPAR : '(';
CPAR : ')';
OBRA : '{';
CBRA : '}';
OKEY: '[';
CKEY: ']';
SC: ';' ;
READ : 'pegaInteiro' | 'pegaFlutuante' | 'pegaCaracteres';
SHOW: 'mostrarInteiro' | 'mostrarFlutuante' | 'mostrarCaracteres' | 'mostrarBool';
CASE: 'caso';
ELSE: 'senao';

// TYPES .-*+...-*+...-*+...-*+.. 
STRING : '"' ~('"')* '"';  
BOOL : 'verdadeiro' | 'falso';
RETURN_TYPE: ('inteiro' | 'flutuante' | 'caracter' | 'bool' | 'nada');
COLON: ':';
INT : [0-9]+;
FLOAT : [0-9]+ ',' [0-9]+;
VAR : [a-zA-Z_][a-zA-Z0-9_]*;
TYPE : INT | FLOAT | STRING | BOOL;

// SKIP .-*+...-*+...-*+...-*+.. 
COMMENT : ':)' ~[\r\n]+ -> skip;
TAB : [\t]+ -> skip; 
ENTER: [\r\n]+ -> skip;
SPACE : [ \t\r\n] -> skip;
WHITESPACE : [\t\u000C\r\n]+ -> skip;       
                                                                                                    
