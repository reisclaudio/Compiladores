%{

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ast.h>

extern int yylex();
extern char* yytext;
void yyerror(char *s);
extern void limparBuffer();

TreeNode* AST = NULL;

int consoleExpressao;
bool quitou = false;

float aux_h_view_lo;
float aux_h_view_hi;
float aux_v_view_lo;
float aux_v_view_hi;
int aux_integral_steps;


/*
about --> 1
show_settings --> 2
reset_settings --> 3
set_hview --> 4
set_vview --> 5
set_axis_on --> 6
set_axis_off --> 7
set_integral_steps --> 8
*/

%}

%union{
        TreeNode* ast;
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
%token COLON
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
%token SHOW_SETTINGS
%token RESET_SETTINGS
%token SET_HVIEW
%token SET_VVIEW
%token SET_AXIS_ON
%token SET_AXIS_OFF
%token SET_INTEGRAL_STEPS
%token QUIT
%token ERROR_LEXICAL

%type <integer> console
%type <integer> inicio
%type <real> h_view1
%type <real> h_view2
%type <real> v_view1
%type <real> v_view2
%type <integer> i_steps
%type <real> NUM_REAL
%type <integer> NUM_INT
%type <ast> funcao
%type <ast> funcao1
%type <ast> funcao2
%type <ast> funcao3
%type <ast> funcao4
%type <ast> funcao5
%type <integer> VARIAVEL

%start inicio

%%

inicio: console EOL {consoleExpressao = $1; return 0;};
        | funcao EOL { AST = $1;
                           if(AST){
                                   printf("\nFunction in RPN format:\n");
                                   RPN_Walk(AST);
                                   Delete_Tree(AST);
                           }
                           else{
                                   printf("AST is NULL\n");
                           }
                           printf("\n\n>");
                           limparBuffer();
                     };

funcao: funcao1         {$$ = $1;}
        | funcao PLUS funcao1 {TreeNode* aux = (TreeNode*) malloc(sizeof(struct node));
                                aux->node_type = PLUS;
                                aux->value = 0;
                                aux->left = $1;
                                aux->right = $3;
                                $$ = aux;
                               }
        | funcao MINUS funcao1 {TreeNode* aux = (TreeNode*) malloc(sizeof(struct node));
                                aux->node_type = MINUS;
                                aux->value = 0;
                                aux->left = $1;
                                aux->right = $3;
                                $$ = aux;
                               };

funcao1: funcao2        {$$ = $1;}
        | funcao1 MULTIPLY funcao2 {TreeNode* aux = (TreeNode*) malloc(sizeof(struct node));
                                    aux->node_type = MULTIPLY;
                                    aux->value = 0;
                                    aux->left = $1;
                                    aux->right = $3;
                                    $$ = aux;
                                   }
        | funcao1 DIV funcao2 {TreeNode* aux = (TreeNode*) malloc(sizeof(struct node));
                                aux->node_type = DIV;
                                aux->value = 0;
                                aux->left = $1;
                                aux->right = $3;
                                $$ = aux;
                               }
        | funcao1 MOD funcao2 {TreeNode* aux = (TreeNode*) malloc(sizeof(struct node));
                                aux->node_type = MOD;
                                aux->value = 0;
                                aux->left = $1;
                                aux->right = $3;
                                $$ = aux;
                               };
        
funcao2: funcao3 {$$ = $1;}
        | funcao2 POW funcao3 {TreeNode* aux = (TreeNode*) malloc(sizeof(struct node));
                                aux->node_type = POW;
                                aux->value = 0;
                                aux->left = $1;
                                aux->right = $3;
                                $$ = aux;
                               };

funcao3: funcao4 {$$ = $1;}
        | SENO L_PAREN funcao R_PAREN {TreeNode* aux = (TreeNode*) malloc(sizeof(struct node));
                                aux->node_type = SENO;
                                aux->value = 0;
                                aux->left = $3;
                                aux->right = NULL;
                                $$ = aux;
                               }
        | COSSENO L_PAREN funcao R_PAREN {TreeNode* aux = (TreeNode*) malloc(sizeof(struct node));
                                aux->node_type = COSSENO;
                                aux->value = 0;
                                aux->left = $3;
                                aux->right = NULL;
                                $$ = aux;
                               }
        | TANGENTE L_PAREN funcao R_PAREN {TreeNode* aux = (TreeNode*) malloc(sizeof(struct node));
                                aux->node_type = TANGENTE;
                                aux->value = 0;
                                aux->left = $3;
                                aux->right = NULL;
                                $$ = aux;
                               }
        | ABS L_PAREN funcao R_PAREN {TreeNode* aux = (TreeNode*) malloc(sizeof(struct node));
                                aux->node_type = ABS;
                                aux->value = 0;
                                aux->left = $3;
                                aux->right = NULL;
                                $$ = aux;
                               };
        
funcao4: funcao5  {$$ = $1;}
        | L_PAREN funcao R_PAREN {$$ = $2;};

funcao5: NUM_REAL { TreeNode* aux = (TreeNode*)malloc(sizeof(struct node)); 
                   aux->node_type = NUM_REAL;
                   aux->value = $1;
                   aux->left = NULL;
                   aux->right = NULL;
                   $$ = (TreeNode*) aux;
                  }
        | NUM_INT { TreeNode* aux = (TreeNode*)malloc(sizeof(struct node)); 
                   aux->node_type = NUM_INT;
                   aux->value = $1;
                   aux->left = NULL;
                   aux->right = NULL;
                   $$ = (TreeNode*) aux;
                  }
        | VARIAVEL { TreeNode* aux = (TreeNode*)malloc(sizeof(struct node)); 
                   aux->node_type = VARIAVEL;
                   aux->value = $1;
                   aux->left = NULL;
                   aux->right = NULL;
                   $$ = (TreeNode*) aux;
                    };

console: ABOUT SEMICOLON {$$ = 1;}
        | SHOW_SETTINGS SEMICOLON {$$ = 2;}
        | RESET_SETTINGS SEMICOLON {$$ = 3;}
        | SET_HVIEW h_view1 COLON h_view2 SEMICOLON  {$$ = 4; aux_h_view_lo = $2; aux_h_view_hi = $4;}
        | SET_VVIEW v_view1 COLON v_view2 SEMICOLON  {$$ = 5; aux_v_view_lo = $2; aux_v_view_hi = $4;}
        | SET_AXIS_ON SEMICOLON {$$ = 6;}
        | SET_AXIS_OFF SEMICOLON {$$ = 7;}
        | SET_INTEGRAL_STEPS i_steps SEMICOLON {$$ = 8; aux_integral_steps = $2;}
        | QUIT {quitou = true; exit (1);}
        | EOF_ {return 666;}
        |  {$$ = 666;};

h_view1: NUM_REAL {$$ = $1;};

h_view2: NUM_REAL {$$ = $1;};

v_view1: NUM_REAL {$$ = $1;};

v_view2: NUM_REAL {$$ = $1;};

i_steps: NUM_INT {$$ = $1;};

%%

void yyerror(char *s){
        if (strcmp(yytext, "") != 0){
                printf("Erro de Sintaxe: [%s]\n", yytext);
        }
        limparBuffer();
        consoleExpressao = 666;
}

float h_view_lo = -6.500000;
float h_view_hi = 6.500000;
float v_view_lo = -3.500000;
float v_view_hi = 3.500000;
int integral_steps = 1000;
bool draw_axis = true;
bool connect_dots = false;
float h_view_lo_padrao = -6.500000;
float h_view_hi_padrao = 6.500000;
float v_view_lo_padrao = -3.500000;
float v_view_hi_padrao = 3.500000;
int integral_steps_padrao = 1000;
bool draw_axis_padrao = true;
bool connect_dots_padrao = false;


void about (){
        printf("\n+--------------------------------------------+\n");
	printf("|                                            |\n");
	printf("|   201800560028 - Claudio B. Reis Neto      |\n");
	printf("|                                            |\n");
	printf("+--------------------------------------------+\n\n"); 
}

void show_settings (){
        printf("\nh_view_lo: %f\n", h_view_lo);
        printf("h_view_hi: %f\n", h_view_hi);
        printf("v_view_lo: %f\n", v_view_lo);
        printf("v_view_hi: %f\n", v_view_hi);
        printf("integral_steps: %d\n\n", integral_steps);

        if (draw_axis){
                printf("Draw Axis: ON\n");
        } else{
                printf("Draw Axis: OFF\n");
        }
        if (connect_dots){
                printf("Connect Dots: ON\n\n");
        } else{
                printf("Connect Dots: OFF\n\n");
        }
}

void reset_settings (){
        h_view_lo = h_view_lo_padrao;
        h_view_hi = h_view_hi_padrao;
        v_view_lo = v_view_lo_padrao;
        v_view_hi = v_view_hi_padrao;
        integral_steps = integral_steps_padrao;
        draw_axis = draw_axis_padrao;
        connect_dots = connect_dots_padrao;
}

void set_hview(){
        if (aux_h_view_lo >= aux_h_view_hi){
                printf("\nERROR: h_view_lo must be smaller than h_view_hi\n\n");
        } else{
                h_view_lo = aux_h_view_lo;
                h_view_hi = aux_h_view_hi;
        }
}

void set_vview(){
        if (aux_v_view_lo >= aux_v_view_hi){
                printf("\nERROR: v_view_lo must be smaller than v_view_hi\n\n");
        } else{
                v_view_lo = aux_v_view_lo;
                v_view_hi = aux_v_view_hi;
        }
}

void set_axis_on(){
        draw_axis = true;
}

void set_axis_of(){
        draw_axis = false;
}

void set_integral_steps(){
        if (aux_integral_steps <= 0){
                printf("\nERROR: integral_steps must be a positive non-zero integer\n\n");
        }
        else{
                integral_steps = aux_integral_steps;
        }
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
                else if (consoleExpressao == 2){
                        show_settings();
                }
                else if (consoleExpressao == 3){
                        reset_settings();
                }
                else if (consoleExpressao == 4){
                        set_hview();
                }
                else if (consoleExpressao == 5){
                        set_vview();
                }
                else if (consoleExpressao == 6){
                        set_axis_on();
                }
                else if (consoleExpressao == 7){
                        set_axis_of();
                }
                else if (consoleExpressao == 8){
                        set_integral_steps();
                }
                else if (consoleExpressao == 666){

                }
        }
}