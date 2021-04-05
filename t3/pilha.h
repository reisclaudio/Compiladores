#ifndef PILHA_H
#define PILHA_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lista.h"

typedef struct pilha {
	int topo; 
	int capa;
	Vertice *elemento;
} Pilha;

void criarpilha(Pilha *p, int c);
bool estavazia (Pilha *p);
int estacheia (Pilha *p);
void empilhar (Pilha *p, Vertice v);
Vertice desempilhar (Pilha *p);
Vertice retornatopo (Pilha *p);

#endif

