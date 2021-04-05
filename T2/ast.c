#include <ast.h>
#include <sintatico.tab.h>
#include<stdlib.h>
#include<stdio.h>

extern void limparBuffer();

void RPN_Walk(TreeNode* aux)
{
	if(aux)
	{
		RPN_Walk(aux->left);
		RPN_Walk(aux->right);
		switch(aux->node_type)
		{
			case PLUS:{printf("+ ");};break;
			case MINUS:{printf("- ");};break;
			case MULTIPLY:{printf("* ");};break;
			case DIV:{printf("/ ");};break;
            case POW:{printf("^ ");};break;
            case REMAINDER:{printf("%% ");};break;
            case SENO:{printf("SEN ");};break;
            case COSSENO:{printf("COS ");};break;
            case TANGENTE:{printf("TAN ");};break;
            case ABS:{printf("ABS ");};break;
			case NUM_INT:{printf("%d ",aux->value);};break;
            case NUM_REAL:{printf("%f ",aux->valueReal);};break;
            case VARIAVEL:{printf("x ");};break;
		}
        limparBuffer();
	}
}

void Delete_Tree(TreeNode* aux)
{
    if(aux)
    {
        Delete_Tree(aux->left);
        Delete_Tree(aux->right);
        free(aux);
    }
}