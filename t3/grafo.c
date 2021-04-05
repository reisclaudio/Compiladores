#include<stdio.h>
#include <stdlib.h>
#include"grafo.h"

void cria_grafo(Grafo* g, int n)  { 
  int i;

  g->mat = malloc (n * sizeof(int*));
  g->matAux = malloc (n * sizeof(int*));
  //g->mat[0] = NULL;

  for (i = 0; i < n; i++){
    g->mat[i] = malloc (n * sizeof(int));
    g->matAux[i] = malloc (n * sizeof(int));
  }

  g->n = n;
}

void destroi(Grafo *g) {
  int i;
  for (i = 1; i < g->n; i++){}
    free(g->mat[i]);
  free(g->mat);
}

void adiciona_aresta(Grafo *g, int v1, int v2) {
  if (v1 > v2){
    g->mat[v1][v2] = 1;
    g->matAux[v1][v2] = 1;
  }
  else{
    g->mat[v2][v1] = 1;
    g->matAux[v2][v1] = 1;
  }
}

int existe_aresta(Grafo *g, int v1, int v2) {
  return v1 > v2 ? g->mat[v1][v2] : g->mat[v2][v1];
}

void remove_aresta(Grafo *g, int v1, int v2) {
  if (v1 > v2)
    g->mat[v1][v2] = 0;
  else
    g->mat[v2][v1] = 0;
}
