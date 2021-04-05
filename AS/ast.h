#ifndef AST_H
#define AST_H
//Defines:

//Structures:
typedef struct node Node;

//Functions:
Node *createNode(int type, int value_number, char *value_string, int line,int coluna,char * linha);
Node *resolverExpressao(void *tabela, void *funcao, Node *node, void *var, int constante);

int isOperating(Node *node);
int isNumber(Node *node);
int isCharacter(Node *node);
int getValueNumber(Node *node);
	
#endif