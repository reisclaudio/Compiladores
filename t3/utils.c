#include"utils.h"

void printMatriz (Grafo *grafo){
    for(int i = 0; i < grafo->n; i++){
        printf("%d| ", i);
        for(int j = 0; j <grafo->n; j++){
            printf("%d ", grafo->mat[i][j]);
        }
        printf("\n");
    }
}