#ifndef SINTATICO_H
#define SINTATICO_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

extern int tokenAux;
void eat();
void advance();
void error(char* func);

bool S();
void L();
void E();

#endif