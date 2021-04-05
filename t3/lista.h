#ifndef LISTA_H
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"grafo.h"

typedef struct StVertice{
    int numero;
    int grau;
    bool spill;
    int cor;
} Vertice;

struct lista{
    Vertice vertice;
    struct lista* prox;
};

typedef struct lista Lista;

Lista* inicializaLista();


Lista* insertLista(Lista* l, Vertice v);
void imprimeLista (Lista* l);
bool listaVazia (Lista* l);  
Lista* removeLista (Lista* l, int numero);  
Vertice verticeMenorGrau (Lista* l, int numeroCores);
Lista* editaLista (Lista* l, int numero, int grau, int cor, int tipo);
int colorirVertices (Lista* l,int cores, Grafo *g, int tamanhoMatriz, Vertice *v);
Vertice buscaVertice(int numero, Lista* l);



#endif