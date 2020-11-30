/* Nao usar a biblioteca do flex*/
%option noyywrap

%{
#include<stdbool.h>
#include<sintatico.tab.h>

int chars = 1;
int lines = 1;
bool first = true;

int linhaComment;
int colunaComment;

void printAux (){
    if (first) {
        first = false;
    }
    else{
        printf ("\n");
    }
}

void printString(char st[]){
    char *p = st;
    p++;

    p[strlen(p)-1] = 0;

    printf("STRING(%s)", p);
}

void printCaracter (char st[]){
    char *p = st;
    p++;

    p[strlen(p)-1] = 0;

    printf("CHARACTER(%s)", p);
}

%}

%x comment

%%
[\t\f\r ]*				{chars += strlen(yytext);}
"void"                  {chars += strlen(yytext); return VOID; }
"int"                   {chars += strlen(yytext); return INT;}
"char"                  {chars += strlen(yytext); return CHAR;}
"return"                {chars += strlen(yytext); return RETURN;}
"break"                 {chars += strlen(yytext); return BREAK;}
"switch"                {chars += strlen(yytext); return SWITCH;}
"case"                  {chars += strlen(yytext); return CASE; }
"default"               {chars += strlen(yytext); return DEFAULT;}
"do"                    {chars += strlen(yytext); return DO; }
"while"                 {chars += strlen(yytext); return WHILE; }
"for"                   {chars += strlen(yytext); return FOR; }
"if"                    {chars += strlen(yytext); return IF; }
"else"                  {chars += strlen(yytext); return ELSE; }
"typedef"               {chars += strlen(yytext); return TYPEDEF; }  
"struct"                {chars += strlen(yytext); return STRUCT; }
"+"                     {chars += strlen(yytext); return PLUS; }
"-"                     {chars += strlen(yytext); return MINUS; }
"*"                     {chars += strlen(yytext); return MULTIPLY; }
"/"                     {chars += strlen(yytext); return DIV; }
"%"                     {chars += strlen(yytext); return REMAINDER; }
"++"                    {chars += strlen(yytext); return INC; }
"--"                    {chars += strlen(yytext); return DEC; }
"&"                     {chars += strlen(yytext); return BITWISE_AND; }
"|"                     {chars += strlen(yytext); return BITWISE_OR; }
"~"                     {chars += strlen(yytext); return BITWISE_NOT; }
"^"                     {chars += strlen(yytext); return BITWISE_XOR; }
"!"                     {chars += strlen(yytext); return NOT; }
"&&"                    {chars += strlen(yytext); return LOGICAL_AND; }
"||"                    {chars += strlen(yytext); return LOGICAL_OR; }
"=="                    {chars += strlen(yytext); return EQUAL; }
"!="                    {chars += strlen(yytext); return NOT_EQUAL; }
"<"                     {chars += strlen(yytext); return LESS_THAN; }
">"                     {chars += strlen(yytext); return GREATER_THAN; }
"<="                    {chars += strlen(yytext); return LESS_EQUAL; }
">="                    {chars += strlen(yytext); return GREATER_EQUAL; }
">>"                    {chars += strlen(yytext); return R_SHIFT; }
"<<"                    {chars += strlen(yytext); return L_SHIFT; }
"="                     {chars += strlen(yytext); return ASSIGN; }
"+="                    {chars += strlen(yytext); return ADD_ASSIGN; }
"-="                    {chars += strlen(yytext); return MINUS_ASSIGN; }
";"                     {chars += strlen(yytext); return SEMICOLON; }
","                     {chars += strlen(yytext); return COMMA; }
":"                     {chars += strlen(yytext); return COLON; }
"("                     {chars += strlen(yytext); return L_PAREN; }
")"                     {chars += strlen(yytext); return R_PAREN; }
"{"                     {chars += strlen(yytext); return L_CURLY_BRACKET; }
"}"                     {chars += strlen(yytext); return R_CURLY_BRACKET; }
"["                     {chars += strlen(yytext); return L_SQUARE_BRACKET; }
"]"                     {chars += strlen(yytext); return R_SQUARE_BRACKET; }
"?"                     {chars += strlen(yytext); return TERNARY_CONDITION; }
"#"                     {chars += strlen(yytext); return NUMBER_SIGN; }
"->"                    {chars += strlen(yytext); return POINTER; }
"printf"                {chars += strlen(yytext); return PRINTF; }
"scanf"                 {chars += strlen(yytext); return SCANF; }
"define"                {chars += strlen(yytext); return DEFINE; }
"exit"                  {chars += strlen(yytext); return EXIT; }

([a-z]|"_"|[A-Z])([a-z]|"_"|[A-Z]|[0-9])*                {chars += strlen(yytext); return IDENTIFIER; }
"\'"(.|"\\".)"\'"                                        {chars += strlen(yytext); return CHARACTER; }
\"(\\.|[^"\\])*\"                                        {chars += strlen(yytext); return STRING; }

[0][x|X][0-9A-Fa-f]+                                     {chars += strlen(yytext); return NUM_HEXA; } 
[0][0-7]+                                                {chars += strlen(yytext); return NUM_OCTAL; }
[0-9]+                                                   {chars += strlen(yytext); return NUM_INTEGER; }

"/*"							                         {BEGIN(comment); linhaComment = lines, colunaComment = chars;}
<comment><<EOF>>				                         {lines++; BEGIN(INITIAL); printf("error:lexical:%d:%d: unterminated comment", linhaComment, colunaComment); exit(0);}
<comment>"*/"\n					                         {lines++; BEGIN(INITIAL);}
<comment>\n						                         {lines++; chars = 1;}
<comment>.						                         { }

"//".*[\n<<EOF>>]                                        {lines++; chars = 1;}

<<EOF>>		{ return EOF_; }
[\n]                                                     {lines++; chars = 1;}
.                                                        {return ERROR_LEXICAL;}

%%