#ifndef ERRO_H
#define ERRO_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<tabela.h>

typedef struct error Error;
Error *error_list;

int erroVariavelRedefinida(Variavel *variaveis, Variavel *var);
int erroVarivelJaDeclarada(Variavel *variaveis, Variavel*var);
void inserirErro(Error *list, int line, char *msg);
int printfError();
Error *getError();
int getTamanhoLista(Error *list);
	





#endif