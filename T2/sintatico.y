%{

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

extern int yylex();
extern char* yytext;
void yyerror(char *s);
extern void limparBuffer();

int consoleExpressao;
bool quitou = false;


/*
ABOUT --> 1
*/

%}

%union{
	int integer;
	float real;
}

%token PLUS
%token MINUS
%token MULTIPLY
%token DIV
%token POW
%token MOD
%token L_PAREN
%token R_PAREN
%token SEMICOLON
%token SENO
%token COSSENO
%token TANGENTE
%token ABS
%token NUM_INT
%token NUM_REAL
%token VARIAVEL
%token EOL
%token EOF_
%token ABOUT
%token QUIT
%token ERROR_LEXICAL

%type <integer> console
%type <integer> inicio


%start inicio

%%

inicio: console EOL {consoleExpressao = $1; return 0;};

console: ABOUT SEMICOLON {$$ = 1;}
        | QUIT {quitou = true; exit (1);}
        | EOF_ {return 666;}
        |  {$$ = 666;}

%%

void about (){
        printf("+--------------------------------------------+\n");
	printf("|                                            |\n");
	printf("|   201800560028 - Claudio B. Reis Neto      |\n");
	printf("|                                            |\n");
	printf("+--------------------------------------------+\n"); 
}

void yyerror(char *s){
        if (strcmp(yytext, "") != 0){
                printf("Erro de Sintaxe: [%s]\n", yytext);
        }
        limparBuffer();
        consoleExpressao = 666;
}


int main (int argc, char **argv){
        while (!quitou){
                printf(">");
                if (!yyparse()){

                }

                if (consoleExpressao == 1){
                        about();
                        limparBuffer();
                }
                else if (consoleExpressao == 666){

                }
        }
}