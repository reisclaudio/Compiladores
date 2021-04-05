#ifndef TABELA_H
#define TABELA_H

#define ID_NODE 1
#define ID_CONS_DEFINE 21


typedef struct variavel Variavel;
typedef struct funcao Funcao;
typedef struct programa Programa;
typedef struct tabela Tabela;



int getVariavelLinha(Variavel *var);
int getVariavelColuna(Variavel *var);
char* getVariavelNome(Variavel *var);
void calcularValorVariavel (Variavel *tabela, Variavel *variaveis);

int testeVariavelJaDefinida(Variavel *variaveis, Variavel *aux);

int testeVariavelJaDeclarada(Variavel *variaveis, Variavel *aux);

void testeVariavelVoid(Variavel *aux);

int testeVariavelComparacao(Variavel *variaveis, Variavel *aux, int erro);

void testeVariavelAux (Variavel *variaveis, Variavel *aux);

void testeVariavel (Variavel *variaveis);

void testeSemantico (Programa *programa, Tabela *tabela);

void addFunction(Funcao *list, Funcao *fun);
void addTableVariable(Tabela *table, Variavel *variable);

void addTableFunction(Tabela *table, Funcao *function);
void addProgram(Programa *program, Funcao *function);
Variavel *createVariable(int type, Node *pointer, char *name, Node *array, Node *value, int line,int coluna,char * linha);




#endif