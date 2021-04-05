#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ast.h>
//#include <cmd.h>
#include <tabela.h>
#include <error.h>
#include <sintatico.tab.h>
/*	Defines	*/

/*	Structures	*/
struct node{
	int id;
	int type;
	int value_number;
	char *value_string;
	char *pointer;
	int line;
	int coluna;
	char * linha;
	Node *left, *right;
};
/*	Variables	*/

Node *createNode(int type, int value_number, char *value_string, int line,int coluna,char * linha){
	Node *new;
	new = (Node *) malloc(sizeof(Node));
	new->id = ID_NODE;
	new->type = type;
	new->value_number = value_number;
	new->value_string = value_string;
	new->pointer = NULL;
	new->line = line;
	new->left = NULL;
	new->right = NULL;
	new->coluna = coluna;
	if(linha!=NULL)
	{
	new->linha = malloc(sizeof(char)*(1+strlen(linha)));
	strcpy(new->linha,linha);
	}
	return new;
}

int isOperating(Node *node){
	int operating = 0;
	switch(node->type){
		case NUM_HEXA: operating = 1; break;
		case NUM_OCTAL: operating = 1; break;
		case NUM_INTEGER: operating = 1; break;
		case CHARACTER: operating = 1; break;
		case STRING: operating = 1; break;
		case IDENTIFIER: operating = 1; break;
	}

	return operating;
}

int isNumber(Node *node){
	int number = 0;
	switch(node->type){
		case INT: number = 1; break;
		case NUM_HEXA: number = 1; break;
		case NUM_OCTAL: number = 1; break;
		case NUM_INTEGER: number = 1; break;
		case ID_CONS_DEFINE: number = 1; break;
	}

	return number;
}

int isCharacter(Node *node){
	int character = 0;
	switch(node->type){
		case CHARACTER: character = 1; break;
		case STRING: character = 1;	break;
		case IDENTIFIER: character = 1;	break;
	}
	return character;
}

Node *resolverExpressao(void *tabela, void *funcao, Node *node, void *var, int constante){
	Variavel *aux;
	aux = NULL;
	if (node != NULL){
		if (!isOperating(node)){
			//node = expressionCalculator(tabela, funcao, node, var, constante);
		} else{
			if (!isNumber(node)){
				//node = solveGetValue(tabela, funcao, node, var, constante);
			}
		}
	}

	return node;
}

int getValueNumber(Node *node){
	return node->value_number;
}

