#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lexico.h"
#include"sintatico.h"

int main (){
    file = stdin;
    int o;

    do{
        tokenAux = getToken(file);

        if(S()){
            printf("CADEIA ACEITA\n");
        }
    }
    while (tokenAux ==WHITESPACE);








    //printf ("PROGRAMA CORRETO.");




    return 0;
}

