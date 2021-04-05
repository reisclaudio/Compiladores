#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"grafo.h"
#include"utils.h"
#include"pilha.h"
#include"lista.h"


int main (){
    Grafo grafo;
    int * vetorRegistradores;

    Lista* listaVertices;
    Lista* listaAux;
    listaVertices = inicializaLista();
    listaAux = inicializaLista();

    int contGrau = 0;

    char nomeGrafo[20];
    int totalCores;
    int maiorVertice;
    int registradorAtual;
    int registradorLigado;

    char linha[1000];
    char aux[20];
    char c1, c2, c3;
    int a, b, c, d, e, f, g, h;
    int cont = 0;

    c1 = fgetc(stdin);
    while(1){
        if (feof(stdin)){
            break;
        }

        fgets(linha, 1000, stdin);
        sscanf(linha, "%d", &maiorVertice);
    }

    //printf("Maior vertice: %d\n", maiorVertice);
    cria_grafo(&grafo, maiorVertice + 1);
    vetorRegistradores = malloc((maiorVertice + 1) * sizeof(int));
    
    rewind(stdin);

    // Pegando o nome do grafo da entrada
    fgets(nomeGrafo, 20, stdin);
    int lenght = strlen(nomeGrafo);
    nomeGrafo[lenght - 2] = '\0';
    //printf("Nome do grafo: %s\n", nomeGrafo);

    // Pegando o número de cores da entrada
    fgets(aux, 20, stdin);
    sscanf(aux, "%c%c%d", &c1, &c2, &totalCores);
    //printf("Número de cores: %d\n\n", totalCores);

    printf("%s -> Physical Registers: %d\n----------------------------------------\n----------------------------------------\nK = %d\n\n", nomeGrafo, totalCores, totalCores);

    while (1){
        if (feof(stdin)){
            break;
        }

        fscanf(stdin, "%d --> ", &registradorAtual);

        while(fgetc(stdin) != '\n'){
            fseek(stdin, -1, SEEK_CUR);
            fscanf(stdin, "%d", &registradorLigado);

            grafo.mat[registradorAtual][registradorLigado] = 1;
            grafo.matAux[registradorAtual][registradorLigado] = 1;
            contGrau++;

            if (feof(stdin)){
                break;
            }
        }
        Vertice v;
        v.numero = registradorAtual;
        v.grau = contGrau;
        v.spill = false;
        v.cor = -1;

        listaVertices = insertLista(listaVertices, v);
        listaAux = insertLista(listaAux, v);

        contGrau = 0;

    }

    //printMatriz(&grafo);
 
    Pilha p;
    criarpilha(&p, maiorVertice);

    while (!listaVazia(listaVertices)){
        Vertice vt = verticeMenorGrau(listaVertices, totalCores);
        listaVertices = removeLista(listaVertices, vt.numero);

        empilhar(&p, vt);

        for (int i = 0; i < maiorVertice + 1; i++){
            grafo.mat[i][vt.numero] = 0;
        }

        int contadorAux = 0;
        for (int i = 0; i < maiorVertice + 1; i++){
            for (int j = 0; j < maiorVertice + 1; j++){
                if (grafo.mat[i][j] == 1){
                    contadorAux++;
                }
            }

            editaLista(listaVertices, i, contadorAux, -1, 1);
            contadorAux = 0;
        }

        if (vt.spill){
            printf("Push: %d *\n", vt.numero);
        } else{
            printf("Push: %d\n", vt.numero);
        }

    }

    while (!estavazia(&p)){
        Vertice v = desempilhar(&p);
        colorirVertices(listaAux, totalCores, &grafo, maiorVertice+1, &v);
        listaVertices = insertLista(listaVertices, v);
    }






   
   


    return 0;

}