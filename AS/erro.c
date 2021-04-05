#include"erro.h"

char buffer[500];

struct error{
	int line;
	char *msg;
	Error *prox;
};

Error *createError(int line, char *msg){
	Error *new;
	new = (Error *) malloc(sizeof(Error));
	new->line = line;
	if (msg != NULL){
		new->msg = (char *) malloc((strlen(msg) + 1) * sizeof(char));
		strcpy(new->msg, msg);
	} else{
		new->msg = NULL;
	}
	new->prox = NULL;
	return new;
}

int printfError(){
	int erro = 0;
	int count = 0;
	Error *error, *p;
	error = getError();

	//Error:
	p = error;
	if (getTamanhoLista(error_list) > 0){
		erro = 1;
		if (count == 0){
			printf("%s", p->msg);
		} else{
			printf("\n%s", p->msg);
		}
		exit(0);
	}
	return erro;
}

int getTamanhoLista(Error *list){
	int count = 0;
	Error *p;
	p = list;
	if (list != NULL){
		if (p->prox == NULL){
			if (p->msg != NULL){
				count = 1;
			}
		} else{
			while(p != NULL){
				count++;
				p = p->prox;
			}
		}
	}

	return count;
}

Error *getError(){
	int menor = 9999;
	Error *error, *p;
	error = NULL;
	p = error_list;
	while(p != NULL){
		if (p->msg != NULL){
			if (p->line < menor){
				menor = p->line;
				error = p;
			}
		}
		p = p->prox;
	}
	return error;
}

void inserirErro(Error *list, int line, char *msg){
	Error *p;
	p = list;
	if (p->msg == NULL){
		p->line = line;
		p->msg = (char *) malloc((strlen(msg) + 1) * sizeof(char));
		strcpy(p->msg, msg);
	} else{
		while(p->prox != NULL){
			p = p->prox;
		}
		p->prox = createError(line, msg);
	}
}

int erroVariavelRedefinida(Variavel *variaveis, Variavel *var){
    int j = 0;
    int i;
    char aux[5000];

    FILE *f = fopen("gambiarra.txt","r");

    for(i=0;i<getVariavelLinha(variaveis);i++){
		fgets(aux,5000,f);
	}

    fclose(f);

    char *pos;
    if ((pos==strchr(aux, '\n')) != NULL)
        *pos = '\0';
    
    j += snprintf(buffer, sizeof(buffer), "error:semantic:%d:%d: redefinition of '%s' previous defined in line %d column %d\n%s\n", getVariavelLinha(variaveis), getVariavelColuna(variaveis), getVariavelNome(variaveis), getVariavelLinha(var), getVariavelColuna(var), aux);

    for (i = 0; i < getVariavelColuna(variaveis) - 1; i++){
        j+= snprintf(buffer+j, sizeof(buffer), " ");
    }

    j+=snprintf(buffer+j,sizeof(buffer),"^");
    inserirErro(error_list, getVariavelLinha(variaveis), buffer);
    return 1;
}

int erroVarivelJaDeclarada(Variavel *variaveis, Variavel*var){
    int j = 0;
    int i;
    char aux[5000];

    FILE *f = fopen("gambiarra.txt","r");

    for(i=0;i<getVariavelLinha(variaveis);i++){
		fgets(aux,5000,f);
	}

    fclose(f);

    char *pos;
    if ((pos==strchr(aux, '\n')) != NULL)
        *pos = '\0';
    
    j += snprintf(buffer, sizeof(buffer), "rror:semantic:%d:%d: variable '%s' already declared, previous declaration in line %d column %d\n%s\n", getVariavelLinha(variaveis), getVariavelColuna(variaveis), getVariavelNome(var), getVariavelLinha(var), getVariavelColuna(var), aux);

    for (i = 0; i < getVariavelColuna(variaveis) - 1; i++){
        j+= snprintf(buffer+j, sizeof(buffer), " ");
    }

    j+=snprintf(buffer+j,sizeof(buffer),"^");
    inserirErro(error_list, getVariavelLinha(var), buffer);
    return 1;
}