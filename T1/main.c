#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lexico.h"
#include"sintatico.h"

int main (){
    file = stdin;

    do{
        tokenAux = getToken(file);
        S();
        //printf("%s\n", getNomeToken(tokenAux));
    }
    while (tokenAux ==WHITESPACE);








    //printf ("PROGRAMA CORRETO.");




    return 0;
}

