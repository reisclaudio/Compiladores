#ifndef GRAFO_H
#define GRAFO_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

typedef struct grafo {
  int n;      
  int **mat;
  int **matAux;  
} Grafo;

void cria_grafo(Grafo* g, int n);
void destroi(Grafo *g);
void adiciona_aresta(Grafo *g, int v1, int v2);
int existe_aresta(Grafo *g, int v1, int v2);
void remove_aresta(Grafo *g, int v1, int v2);
  

#endif