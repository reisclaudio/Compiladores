#ifndef LEXICO_H
#define LEXICO_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern FILE * file;
char aux[127];
char lido;
int nLinhas;

enum tokens{
    IF,
    THEN, 
    ELSE,
    BEGIN,
    END,
    PRINT,
    SEMI,
    NUM,
    EQ,
    ERRO,
    WHITESPACE,
    BARRAN,
};

int getToken (FILE * file);
char * getNomeToken (int token);

#endif