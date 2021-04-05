/* Nao usar a biblioteca do flex*/
%option noyywrap

%{

#include<stdbool.h>
#include<ast.h>
#include<sintatico.tab.h>

int chars = 1;
int lines = 1;
int fileno(FILE *stream);

%}

%%

[\t\f\r ]*      {}
"+"     {return PLUS;}
"-"     {return MINUS;}
"*"     {return MULTIPLY;}
"/"     {return DIV;}
"^"     {return POW;}
"%"     {return REMAINDER;}
"("     {return L_PAREN;}
")"     {return R_PAREN;}
";"     {return SEMICOLON;}
":"     {return COLON;}
","     {return COMMA;}
"sen"   {return SENO;}
"cos"   {return COSSENO;}
"tan"   {return TANGENTE;}
"abs"   {return ABS;}


"about"             {return ABOUT;}
"show settings"     {return SHOW_SETTINGS;}
"reset settings"    {return RESET_SETTINGS;}
"set h_view"        {return SET_HVIEW;}
"set v_view"        {return SET_VVIEW;}
"set axis on"       {return SET_AXIS_ON;}
"set axis off"      {return SET_AXIS_OFF;}
"set integral_steps"    {return SET_INTEGRAL_STEPS;}
"integrate"         {return INTEGRATE;}
"quit"              {return QUIT;}
 

(""|-)[0-9]+"."[0-9]+     {yylval.real = atof(yytext); return NUM_REAL;}
(""|-)[0-9]+              {yylval.integer = atoi(yytext); return NUM_INT;}
(""|-)"x"                       {return VARIAVEL;}
"\n"                      {yy_flush_buffer(YY_CURRENT_BUFFER); return EOL;}


<<EOF>> {return EOF_;}
.                       {printf("\nSimbolo Invalido -> %s\n\n", yytext); yy_flush_buffer(YY_CURRENT_BUFFER); return ERROR_LEXICAL;}
%%

void limparBuffer(){
    yy_flush_buffer(YY_CURRENT_BUFFER);
}

