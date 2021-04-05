#include"sintatico.h"
#include"lexico.h"
#include<stdbool.h>

int tokenAux = ERRO;

int o;

void eat (int token){
    if ((tokenAux == token)) {
        advance();
    }
    else {
        error("i");
    }
}

void advance(){
    int token;
    token = getToken(file);

    while (token == WHITESPACE || token == BARRAN){
        token = getToken(file);
    }

    if (token != EOF){
        tokenAux = token;
    }
}

void error(char* func){
    if (strcmp(func, "s") == 0){
        printf("ERRO SINTATICO EM: %s ESPERADO: if, begin, print\n", aux);
    }
    else if (strcmp(func, "l") == 0){
        printf("ERRO SINTATICO EM: %s ESPERADO: end, ;\n", aux);
    }
    else if (strcmp(func, "e") == 0){
        printf("ERRO SINTATICO EM: %s ESPERADO: num\n", aux);
    }
    else {
        printf("ERRO SINTATICO: CADEIA INCOMPLETA\n");
    }
    //exit(1);
    tokenAux = getToken(file);
    while (tokenAux == BARRAN){
        tokenAux = getToken(file);
        if (tokenAux != EOF){
            printf("%s\n", getNomeToken(tokenAux));
        }
    }

    tokenAux = getToken(file);
    //S();
}

bool S(){
    switch(tokenAux){
        case IF: eat(IF); E(); eat(THEN); S(); eat(ELSE); S(); return true; break;
        case BEGIN: eat(BEGIN); S(); L(); return true;break;
        case PRINT: eat(PRINT); E(); return true; break;
        default: error("s");
    }
}

void L(){
    switch(tokenAux){
        case END: eat(END); break;
        case SEMI: eat(SEMI); S(); L(); break;
        default: error("l");
    }
}

void E(){
    switch(tokenAux){
        case NUM: eat(NUM); eat(EQ); eat(NUM); break;
        default: error("e");
    }
}