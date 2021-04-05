#include"lista.h"

Lista* inicializaLista(){
    return NULL;
}

Lista* insertLista(Lista* l, Vertice v){
    Lista* novo = (Lista*) malloc(sizeof(Lista));   
    novo->vertice = v;   
    novo->prox = l;   
    
    return novo;
}

void imprimeLista (Lista* l){   
    Lista* p;   /* variável auxiliar para percorrer a lista */   
    for (p = l; p != NULL; p = p->prox) {}     
    printf("numero = %d\ngrau = %d\ncor = %d\n", p->vertice.numero, p->vertice.grau, p->vertice.cor);
}

bool listaVazia (Lista* l){   
    if (l == NULL) return true;   
    else return false;
}

Lista* removeLista (Lista* l, int numero) {   
    Lista* ant = NULL;   
    Lista* p = l;      
    
    while (p != NULL && p->vertice.numero != numero) {      
        ant = p;      
        p = p->prox;   
    }    
    
    if (p == NULL)      
        return l;    
        
    if (ant == NULL) {         
        l = p->prox;   
    }   else {          
        ant->prox = p->prox;   
    }   
    
    free(p);   
    
    return l;
    
}

Vertice verticeMenorGrau (Lista* l, int numeroCores){
    Lista* p;
    Vertice menor;
    
    for (p = l; p != NULL; p = p->prox){
        menor = p->vertice;
    } 

    for (p = l; p != NULL; p = p->prox){
        if (p->vertice.grau < numeroCores){
            if (p->vertice.grau == menor.grau){
                if (p->vertice.numero < menor.numero){
                    menor = p->vertice;
                } 
            } else if(p->vertice.grau < menor.grau){
                menor = p->vertice;
            }
        }
    } 

    if (menor.grau >= numeroCores){

        //printf("%d : %d\n", menor.grau, numeroCores);
        menor.spill = true;
    }
    
    return menor;     

}

Lista* editaLista (Lista* l, int numero, int grau, int cor, int tipo){   
    Lista* p;  
    if (tipo == 1){
        for (p = l; p != NULL; p = p->prox) {
            if (p->vertice.numero == numero){
                p->vertice.grau = grau;
            }
        }
    } else if (tipo == 2){
        for (p = l; p != NULL; p = p->prox) {
            if (p->vertice.numero == numero){
                p->vertice.cor = cor;
            }
        }
    } else if (tipo == 3){
        for (p = l; p != NULL; p = p->prox) {
            if (p->vertice.numero == numero){
                p->vertice.spill = true;
            }
        }
    }


    return l;     
}

bool existeLista(Lista* l, int numero){
    bool existe = false;
    Lista* p;   /* variável auxiliar para percorrer a lista */   
    for (p = l; p != NULL; p = p->prox) {
        if (p->vertice.numero == numero){
            return true;
        }
    }

    return false;
}

int colorirVertices (Lista* l,int cores, Grafo *g, int tamanhoMatriz, Vertice *v){
    Lista* p;
    bool achou;

    /*
    for (p = l; p != NULL; p = p->prox) {
        Vertice v = p->vertice;

        int menorCorDisponivel = -1;
        for (int i = 0; i < cores; i++){
            if (menorCorDisponivel == -1){
                menorCorDisponivel = i;

                for (int j = 0; j<tamanhoMatriz ; j++){
                    if (g->matAux[v.numero][j] == 1){
                        Vertice aux = buscaVertice(j, l);

                        if (aux.cor == menorCorDisponivel){
                            menorCorDisponivel = -1;
                        }
                    }
                }
            }    
        }

        p->vertice.cor = menorCorDisponivel;

        printf("Pop: %d -> %d\n", p->vertice.numero, p->vertice.cor);    
    }
    */

   int menorCorDisponivel = -1;
   for (int i = 0; i < cores; i++){
       if (menorCorDisponivel == -1){
           menorCorDisponivel = i;
           //printf("menor: %d\n", i);

           for (int j = 0; j < tamanhoMatriz; j++){
               if (g->matAux[v->numero][j] == 1){
                    //printf("g[%d][%d] == %d\n", v.numero, j, g->matAux[v.numero][j]);

                    Vertice aux = buscaVertice(j, l);
                    
                    //printf("%d = %d\n", aux.cor, menorCorDisponivel);
                    if (aux.cor == menorCorDisponivel){
                        menorCorDisponivel = -1;
                    }
                    if(menorCorDisponivel == j){
                        menorCorDisponivel = -1;
                    }
                    
                }
           }
       }
   }

    editaLista(l, v->numero, 0, menorCorDisponivel, 2);
   printf("Pop: %d -> %d\n", v->numero, menorCorDisponivel);

}

Vertice buscaVertice(int numero, Lista* l){
    Lista* p;   /* variável auxiliar para percorrer a lista */   
    for (p = l; p != NULL; p = p->prox) {
        if (p->vertice.numero == numero){
            return p->vertice;
        }
    }
}
