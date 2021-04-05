#include "pilha.h"

void criarpilha(Pilha *p, int c){
   p->topo = -1;
   p->capa = c;
   p->elemento = (Vertice*) malloc (c * sizeof(Vertice));
}

bool estavazia (Pilha *p){
   if(p-> topo == -1) return true;   // true
   else return false;   // false
}

int estacheia (Pilha *p){
	if (p->topo == p->capa - 1) return 1;
	else return 0;
}

void empilhar (Pilha *p, Vertice v){
	p->topo++;
	p->elemento [p->topo] = v;
}

Vertice desempilhar (Pilha *p){
    Vertice aux = p->elemento [p->topo];
    p->topo--;

    return aux;

}

Vertice retornatopo (Pilha *p){
   return p->elemento [p->topo];
}