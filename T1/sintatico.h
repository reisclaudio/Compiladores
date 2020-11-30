#ifndef SINTATICO_H
#define SINTATICO_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern int tokenAux;
void eat();
void advance();
void error(char* func);

void S();
void L();
void E();

#endif