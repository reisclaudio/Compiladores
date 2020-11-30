#include"lexico.h"

FILE * file;
char lido;

int nLinhas = 1, nColunas = 0;
int cursor = 0;
int cursorDef = 0;
int start = 0;

char aux[127];

char * getNomeToken (int token){
    if (token == ELSE) return "ELSE";
    else if (token == IF) return "IF";
    else if (token == THEN) return "THEN";
    else if (token == SEMI) return "SEMI";
    else if (token == EQ) return "EQ";
    else if (token == BEGIN) return "BEGIN";
    else if (token == END) return "END";
    else if (token == PRINT) return "PRINT";
    else if (token == NUM) return "NUM";
    else if (token == ERRO) return "ERRO"; 
    else if (token == -1) return "EOF"; 
    else if (token == -2) return "ERRO LEXICO. " ;
}

int getTokenFinalState (int estado){
    if (estado == 3) return IF;
    else if (estado == 7) return THEN;
    else if (estado == 11) return ELSE;
    else if (estado == 13) return END;
    else if (estado == 18) return BEGIN;
    else if (estado == 23) return PRINT;
    else if (estado == 24) return SEMI;
    else if (estado == 25) return EQ;
    else if (estado == 26) return NUM;
    else if (estado == 27) return WHITESPACE;
    else if (estado == 28) return BARRAN;
    else return ERRO;
}

int defineIndex (char c){
    if (c == 'a') return 0;
    else if (c == 'b') return 1;
    else if (c == 'c') return 2;
    else if (c == 'd') return 3;
    else if (c == 'e') return 4;
    else if (c == 'f') return 5;
    else if (c == 'g') return 6;
    else if (c == 'h') return 7;
    else if (c == 'i') return 8;
    else if (c == 'j') return 9;
    else if (c == 'k') return 10;
    else if (c == 'l') return 11;
    else if (c == 'm') return 12;
    else if (c == 'n') return 13;
    else if (c == 'o') return 14;
    else if (c == 'p') return 15;
    else if (c == 'q') return 16;
    else if (c == 'r') return 17;
    else if (c == 's') return 18;
    else if (c == 't') return 19;
    else if (c == 'u') return 20;
    else if (c == 'v') return 21;
    else if (c == 'w') return 22;
    else if (c == 'x') return 23;
    else if (c == 'y') return 24;
    else if (c == 'z') return 25;
    else if (c == '0') return 26;
    else if (c == '1') return 27;
    else if (c == '2') return 28;
    else if (c == '3') return 29;
    else if (c == '4') return 30;
    else if (c == '5') return 31;
    else if (c == '6') return 32;
    else if (c == '7') return 33;
    else if (c == '8') return 34;
    else if (c == '9') return 35;
    else if (c == '+') return 36;
    else if (c == '-') return 37;
    else if (c == '=') return 38;
    else if (c == ';') return 39;
    else if (c == ' ') return 40;
    else if (c == '\n') return 41;
    else if (c == -1) return 42;
    else return 43;
}

// Matriz automato
int edges[][128] ={ 
                /*   a b c d e f g h i j k l m n o p q r s t u v w x y z 0 1 2 3 4 5 6 7 8 9 + - = ; ws \n */
        /*state 00*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        /*state 01*/{0,14,0,0,8,0,0,0,2,0,0,0,0,0,0,19,0,0,0,4,0,0,0,0,0,0,26,26,26,26,26,26,26,26,26,26,26,26,25,24,0,1},
        /*state 02*/{0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
        /*state 03*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
        /*state 04*/{0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
        /*state 05*/{0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5},
        /*state 06*/{0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6},
        /*state 07*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7},
        /*state 08*/{0,0,0,0,0,0,0,0,0,0,0,9,0,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8},
        /*state 09*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9},
        /*state 10*/{0,0,0,0,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10},
        /*state 11*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11},
        /*state 12*/{0,0,0,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12},
        /*state 13*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13},
        /*state 14*/{0,0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14},
        /*state 15*/{0,0,0,0,0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15},
        /*state 16*/{0,0,0,0,0,0,0,0,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16},
        /*state 17*/{0,0,0,0,0,0,0,0,0,0,0,0,0,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17},
        /*state 18*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18},
        /*state 19*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19},
        /*state 20*/{0,0,0,0,0,0,0,0,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20},
        /*state 21*/{0,0,0,0,0,0,0,0,0,0,0,0,0,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21},
        /*state 22*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22},
        /*state 23*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23},
        /*state 24*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24},
        /*state 25*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25},
        /*state 26*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,26,26,26,26,26,26,26,26,26,26,0,0,0,0,26},
        /*state 27*/{0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
        /*state 28*/{0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
};

int getToken (FILE * file){

    // Estados
    int initialState = 1;
    int currentState = 1;
    int nextState;
    int lastFinalState = 0;


    while (1){
        if (feof(file)){
            return -1;
        }

        lido = fgetc(file);

        if (defineIndex(lido) == 43){
            nextState = 666;
        }
        else{
            nextState = edges[currentState][defineIndex(lido)];
        }

        if (nextState == 0){
            int lastState = getTokenFinalState(currentState);

            int range = cursor -start;
	        
            if(lido != EOF){
		        fseek(file, start, SEEK_SET);

                if(range+1 <= 127){
                    fgets(aux, range+1, file);
                }
                else{
                    fgets(aux, 127, file);
                }
	        }

            if (lido == -1){
                return lastState;
            }
            
            if (lastFinalState != 0 && lastState != ERRO){
                start = cursor;
            }
            else if (lastFinalState != 0 && lastState == ERRO){
                start = cursorDef;
                cursor = cursorDef;
            }
            else{
                start = start + 1;
                cursor = cursor + 1;
            }

            if (lido != EOF){
                fseek(file, start, SEEK_SET);
            }
            
            if (lastState != ERRO){
                return lastState;
            }
        }

        else{
            currentState = nextState;
            cursor = cursor + 1;

            if (getTokenFinalState(currentState) != ERRO){
                cursorDef = cursor;
                lastFinalState = currentState;
            }

        }

        if (lido == '\n'){
            nLinhas = nLinhas + 1;
            nColunas = 0;
        }

        nColunas = nColunas + 1;

        if (feof(file)){
            return ERRO;
        }
    }

}