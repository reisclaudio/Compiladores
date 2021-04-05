%{

#include<stdio.h>
#include<string.h>
#include<ast.h>
#include<tabela.h>
#include<erro.h>

extern int yylex();
extern char* yytext;
void yyerror(char *s);

void imprimeErro(int linha);
void imprimeCursor (int coluna);

extern int lines;
extern int chars;

int define_line;

Programa *programa = NULL;
Tabela *tabela = NULL;


%}

%union{
	
	Node *ast;
        Variavel *var;
        Function *fun;

}

%token VOID
%token INT
%token CHAR
%token RETURN
%token BREAK
%token SWITCH
%token CASE
%token DEFAULT
%token DO
%token WHILE
%token FOR
%token IF
%token ELSE
%token TYPEDEF
%token STRUCT
%token PLUS
%token MINUS
%token MULTIPLY
%token DIV
%token REMAINDER
%token INC
%token DEC
%token BITWISE_AND
%token BITWISE_OR
%token BITWISE_NOT
%token BITWISE_XOR
%token NOT
%token LOGICAL_AND
%token LOGICAL_OR
%token EQUAL
%token NOT_EQUAL
%token GREATER_THAN
%token LESS_THAN
%token GREATER_EQUAL
%token LESS_EQUAL
%token R_SHIFT
%token L_SHIFT
%token ASSIGN
%token ADD_ASSIGN
%token MINUS_ASSIGN
%token SEMICOLON
%token COMMA
%token COLON
%token L_PAREN
%token R_PAREN
%token L_CURLY_BRACKET
%token R_CURLY_BRACKET
%token L_SQUARE_BRACKET
%token R_SQUARE_BRACKET
%token TERNARY_CONDITION
%token NUMBER_SIGN
%token POINTER
%token PRINTF
%token SCANF
%token DEFINE
%token EXIT
%token IDENTIFIER
%token CHARACTER
%token STRING
%token NUM_HEXA
%token NUM_OCTAL
%token NUM_INTEGER
%token EOF_
%token UNTERMINATED_COMMENT
%token ERROR_LEXICAL

%type <ast> tipo
%type <fun> programa_aux


%start start


%%

start : s {
		//Print-Debug
		//printfProgram(program, table);
		testeSemantico(programa, tabela);
		printfError();
		
		}
		
	
;

s: programa;

programa: programa_aux programa EOF_ {printf("SUCCESSFUL COMPILATION."); return 0;}
        | programa_aux EOF_ {printf("SUCCESSFUL COMPILATION."); return 0;};

programa_aux: declaracoes {}
        | funcao {
              addProgram(programa, $1);  
        };

declaracoes: NUMBER_SIGN DEFINE IDENTIFIER expressao {
        addTableVariable(tabela, createVariable(ID_CONS_DEFINE, NULL, $3, NULL, $4, define_line, chars, yytext));
}
            | dec_variaveis {
                    addTableVariable(tabela, $1);
            }
            | dec_prototipos {
                    addTableVariable(tabela, $1);
            };

dec_variaveis: tipo dec_variaveis_aux SEMICOLON {};

dec_variaveis_aux: asterisco IDENTIFIER dec_variaveis_aux2 ASSIGN expressao_at dec_variaveis_aux3 {}
                | asterisco IDENTIFIER dec_variaveis_aux2 dec_variaveis_aux3 {};

asterisco: MULTIPLY asterisco {}
        | {};

dec_variaveis_aux2: L_SQUARE_BRACKET expressao R_SQUARE_BRACKET dec_variaveis_aux2 {}
                | {};

dec_variaveis_aux3: COMMA dec_variaveis_aux {}
                | {};

dec_prototipos: tipo asterisco IDENTIFIER parametros SEMICOLON {};

funcao: tipo asterisco IDENTIFIER parametros L_CURLY_BRACKET funcao_aux comandos R_CURLY_BRACKET {};

funcao_aux: dec_variaveis funcao_aux {}
        | {};

parametros: L_PAREN parametros_aux R_PAREN {};

parametros_aux: tipo asterisco IDENTIFIER dec_variaveis_aux2 parametros_aux2 {}
        | {};

parametros_aux2: COMMA parametros_aux
        | {};

tipo: INT {
        $$ = createNode(INT, 0, NULL, lines + 1, chars, yytext);
      }
      | CHAR {
        $$ = createNode(CHAR, 0, NULL, lines + 1, chars, yytext); 
      }
      | VOID {
        $$ = createNode(VOID, 0, NULL, lines + 1, chars, yytext);
      };

bloco: L_CURLY_BRACKET comandos R_CURLY_BRACKET {};

comandos: lista_comandos comandos_aux {};

comandos_aux: comandos {}
        | {};

lista_comandos: DO bloco WHILE L_PAREN expressao R_PAREN SEMICOLON {}
        | IF L_PAREN expressao R_PAREN bloco lista_comandos_aux {}
        | WHILE L_PAREN expressao R_PAREN bloco {}
        | FOR L_PAREN lista_comandos_aux2 SEMICOLON lista_comandos_aux2 SEMICOLON lista_comandos_aux2 R_PAREN bloco {}
        | PRINTF L_PAREN STRING lista_comandos_aux3 R_PAREN SEMICOLON {}
        | SCANF L_PAREN STRING COMMA BITWISE_AND IDENTIFIER R_PAREN SEMICOLON {}
        | EXIT L_PAREN expressao R_PAREN SEMICOLON {}
        | RETURN lista_comandos_aux2 SEMICOLON {}
        | expressao SEMICOLON {}
        | SEMICOLON {}
        | bloco {};

lista_comandos_aux: ELSE bloco {}
        | {};

lista_comandos_aux2: expressao {}
        | {};

lista_comandos_aux3: COMMA expressao {}
        | {};

expressao: expressao_at expressao_aux {};

expressao_aux: COMMA expressao_at expressao_aux {}
        | {};

expressao_at: expressao_cond {}
        | expressao_una expressao_at_aux expressao_at {};

expressao_at_aux: ASSIGN {}
        | ADD_ASSIGN {}
        | MINUS_ASSIGN {};

expressao_cond: expressao_orLogico expressao_cond_aux {};

expressao_cond_aux: TERNARY_CONDITION expressao COLON expressao_cond {}
        | {};

expressao_orLogico: expressao_andLogico expressao_orLogico_aux {};

expressao_orLogico_aux: LOGICAL_OR expressao_andLogico expressao_orLogico_aux {}
        | {};

expressao_andLogico: expressao_or expressao_andLogico_aux {};

expressao_andLogico_aux: LOGICAL_AND expressao_or expressao_andLogico_aux {}
        | {};

expressao_or: expressao_xor expressao_or_aux {};

expressao_or_aux: BITWISE_OR expressao_xor expressao_or_aux {}
        | {};

expressao_xor: expressao_and expressao_xor_aux {};

expressao_xor_aux: BITWISE_XOR expressao_and expressao_xor_aux {}
        | {};

expressao_and: expressao_igual expressao_and_aux {};

expressao_and_aux: BITWISE_AND expressao_igual expressao_and_aux {}
        | {};

expressao_igual: expressao_relac expressao_igual_aux {};

expressao_igual_aux: EQUAL expressao_relac expressao_igual_aux {}
        | NOT_EQUAL expressao_relac expressao_igual_aux {}
        | {};

expressao_relac: expressao_shift expressao_relac_aux {};

expressao_relac_aux: LESS_THAN expressao_shift expressao_relac_aux {}
        | LESS_EQUAL expressao_shift expressao_relac_aux {}
        | GREATER_THAN expressao_shift expressao_relac_aux {}
        | GREATER_EQUAL expressao_shift expressao_relac_aux {}
        | {};

expressao_shift: expressao_add expressao_shift_aux {};

expressao_shift_aux: L_SHIFT expressao_add expressao_shift_aux {}
        | R_SHIFT expressao_add expressao_shift_aux {}
        | {};

expressao_add: expressao_multi expressao_add_aux {};

expressao_add_aux: PLUS expressao_multi expressao_add_aux {}
        | MINUS expressao_multi expressao_add_aux {}
        | {};

expressao_multi: expressao_cast expressao_multi_aux {};

expressao_multi_aux: MULTIPLY expressao_cast expressao_multi_aux {}
        | DIV expressao_cast expressao_multi_aux {}
        | REMAINDER expressao_cast expressao_multi_aux {}
        | {};

expressao_cast: expressao_una {}
        | L_PAREN tipo asterisco R_PAREN expressao_cast {};

expressao_una: expressao_pFixa {}
        | INC expressao_una {}
        | DEC expressao_una {}
        | BITWISE_AND expressao_cast {}
        | MULTIPLY expressao_cast {}
        | PLUS expressao_cast {}
        | MINUS expressao_cast {}
        | BITWISE_NOT expressao_cast {}
        | NOT expressao_cast {};

expressao_pFixa: expressao_prim {}
        | expressao_pFixa expressao_pFixa_aux {};

expressao_pFixa_aux: L_SQUARE_BRACKET expressao R_SQUARE_BRACKET {}
        | INC {}
        | DEC {}
        | L_PAREN expressao_pFixa_aux2 R_PAREN {};

expressao_pFixa_aux2: expressao_at expressao_pFixa_aux3 {}
        | {};

expressao_pFixa_aux3: COMMA expressao_pFixa_aux2 {}
        | {};

expressao_prim: IDENTIFIER {}
        | numero {}
        | CHARACTER {}
        | STRING {}
        | L_PAREN expressao R_PAREN {};

numero: NUM_INTEGER {}
        | NUM_HEXA {}
        | NUM_OCTAL {};

%%

void yyerror(char *s){
        if (yychar == ERROR_LEXICAL){
                printf("error:lexical:%d:%d: %s", lines, chars, yytext);
        }
        else if (yychar == EOF_){
                printf("error:syntax:%d:%d: expected declaration or statement at end of input\n", lines, chars);
        }
        else{
                int column = chars - strlen(yytext);
                printf("error:syntax:%d:%d: %s\n", lines, column, yytext);
                imprimeErro(lines);
                imprimeCursor(column);

        }
}

void imprimeErro(int linha){
        int i=1;
	char lido;

        
	fseek(stdin, 0, SEEK_SET);

	while(i < linha){
		lido = fgetc(stdin);
		if(lido == 10){
                        i++;
                }
		if(lido == EOF){
                        break;
                }
	}

	lido = fgetc(stdin);
	while(lido != 10 && lido != EOF){
		printf("%c", lido);
		lido = fgetc(stdin);
	}
}

void imprimeCursor (int coluna){
        int i;

        printf("\n");
        for(i=1;i<coluna;i++){
                printf(" ");
        }
	printf("^");
}

int main (int argc, char **argv){
        yyparse();
}