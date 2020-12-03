/* Nao usar a biblioteca do flex*/
%option noyywrap

%{

#include<stdbool.h>
#include<sintatico.tab.h>

int chars = 1;
int lines = 1;

%}

%x comment

%%

[\t\f\r ]*      {}
"+"     {return PLUS;}
"-"     {return MINUS;}
"*"     {return MULTIPLY;}
"/"     {return DIV;}
"^"     {return POW;}
"%"     {return MOD;}
"("     {return L_PAREN;}
")"     {return R_PAREN;}
";"     {return SEMICOLON;}
"sen"   {return SENO;}
"cos"   {return COSSENO;}
"tan"   {return TANGENTE;}
"abs"   {return ABS;}
[0-9]+"."[0-9]+     {yylval.real = atof(yytext); return NUM_REAL;}
[0-9]+              {yylval.integer = atoi(yytext); return NUM_INT;}
"x"     {return VARIAVEL;}
"\n"    {yy_flush_buffer(YY_CURRENT_BUFFER); return EOL;}
<<EOF>> {return EOF_;}

"about"     {return ABOUT;}
"quit"      {return QUIT;}
([a-z]|[A-Z])* {printf("palavrinha ae ne meu (%s)\n", yytext); yy_flush_buffer(YY_CURRENT_BUFFER); return ERROR_LEXICAL;}
. {printf("Simbolo Invalido -> %s\n", yytext); yy_flush_buffer(YY_CURRENT_BUFFER); return ERROR_LEXICAL;}
%%

void limparBuffer(){
    yy_flush_buffer(YY_CURRENT_BUFFER);
}