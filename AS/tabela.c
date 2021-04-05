#include<stdio.h>
#include<string.h>
#include"tabela.h"
#include<ast.h>
#include<comando.h>
#include <sintatico.tab.h>
#include <erro.h>

struct variavel{
	int id;
	int type;
	char *pointer;
	char *name;
	Node *array;
	Node *value;
	int line;
	int coluna;
	char * linha;
	Variavel *prox;
};

struct funcao{
	int id;
	int type;
	char *pointer;
	char *name;
	Variavel *param;
    Variavel *var_list;
	ListaComandos *commands;
	int line;
	char * linha;
	int coluna;
	Funcao *prox;
};

struct tabela{
	Variavel *variavel;
	Funcao *funcao;
};

struct programa{
	Funcao *funcao;
};

int function_return;

void calcularValorVariavel (Variavel *tabela, Variavel *variaveis){
    int erro = 0;
    Variavel *v;
    v = variaveis;

    while (v != NULL){
        if (!erro){
            if (v->type == ID_CONS_DEFINE){
                v->value = resolverExpressao(tabela, variaveis, v->value, v, 1);
            }
            else{
                v->value = resolverExpressao(tabela, variaveis, v->value, v, 0);
            }
            if (v->value != NULL){
                if (v->type = ID_CONS_DEFINE && !isNumber (v->value)){
                    //errorDefineString(p,table->coluna);
                }
            }

            v->array = resolverExpressao(tabela, variaveis, v->array, v, 1);
            if (v->array != NULL){
                if (getValueNumber(v->array) == 0){
                    //errorArrayZero(p);
                }
                else if (getValueNumber(v->array) < 0){
                    //errorArrayNegative(p);
                }
            }
        }
        v = v->prox;
    }
}

int testeVariavelJaDefinida(Variavel *variaveis, Variavel *aux){
    int erro = 0;
    
    if (strcmp(variaveis->name, aux->name) == 0){
        if (variaveis->type != aux->type){
            erro = erroVariavelRedefinida(variaveis, aux);
        }
    }

    return erro;
}

int testeVariavelJaDeclarada(Variavel *variaveis, Variavel *aux){
    int erro = 0;

    if (strcmp(variaveis->name, aux->name) == 0){
        if (variaveis->type == aux->type){
            erro = erroVarivelJaDeclarada(variaveis, aux);
        }
    }
    return erro;
}

void testeVariavelVoid(Variavel *aux){
    if (aux->pointer == NULL && aux->type == VOID){
        // errorVarDeclaredVoid(var); FAZERRRRR!
    }
}

int testeVariavelComparacao(Variavel *variaveis, Variavel *aux, int erro){
    int error = erro;
    Variavel *v;
    v = aux;

    testeVariavelVoid(aux);

    while (v != NULL){
        if(v != aux){
            if (!error){
                error = testeVariavelJaDeclarada(v, aux);
            }
            if (!error){
                error = testeVariavelJaDefinida(v, aux);
            }
        }
        v = v->prox;
    }
    return error;
}

void testeVariavelAux (Variavel *variaveis, Variavel *aux){
    int erro = 0;
    Variavel *v;
    v = aux;

    while (v != NULL){
        erro = testeVariavelComparacao(variaveis, v, erro);
        v = v->prox;
    }
}

void testeVariavel (Variavel *variaveis){
    testeVariavelAux(variaveis, variaveis);
}

void testeSemantico (Programa *programa, Tabela *tabela){
    Funcao *funcao;

    testeVariavel(tabela->variavel);
    calcularValorVariavel(tabela->variavel, tabela->variavel);

    funcao = tabela->funcao;

    while(funcao != NULL){
        //checkParamVoid(function->param);
        funcao = funcao->prox;
    }

    funcao = programa->funcao;

    while (funcao != NULL){
        function_return = 0;

        //checkParamVoid(function->param);
		//checkPrototype(table->function, function);

        testeVariavel(funcao->var_list);
        calcularValorVariavel(tabela->variavel, funcao->var_list);

        //calculateCommands(program->function, table, function, function->commands);

        if (function_return == 0){
            if (funcao->type != VOID){
                //errorNoReturnStatement(function);
            }
        }

        funcao = funcao->prox;
    }


}

int getVariavelLinha(Variavel *var){
	return var->line;
}

int getVariavelColuna(Variavel *var){
	return var->coluna;
}

char* getVariavelNome(Variavel *var){
	return var->name;
}

void addFunction(Funcao *list, Funcao *fun){
	Function *p;
	p = list;
	while(p->prox != NULL){
		p = p->prox;
	}
	p->prox = fun;
}

void addVariable(Variavel *list, Variavel *var){
	Variable *p;
	p = list;
	while(p->prox != NULL){
		p = p->prox;
	}
	p->prox = var;
}

void addFunction(Funcao *list, Funcao *fun){
	Function *p;
	p = list;
	while(p->prox != NULL){
		p = p->prox;
	}
	p->prox = fun;
}

void addTableVariable(Tabela *table, Variavel *variable){
	if (table->variable == NULL){
		table->variable = variable;
	} else{
		addVariable(table->variable, variable);
	}
}

void addTableFunction(Tabela *table, Funcao *function){
	if (table->function == NULL){
		table->function = function;
	} else{
		addFunction(table->function, function);
	}
}

void addProgram(Programa *program, Funcao *function){
	if (program->function == NULL){
		program->function = function;
	} else{
		addFunction(program->function, function);
	}
}

Variavel *createVariable(int type, Node *pointer, char *name, Node *array, Node *value, int line,int coluna,char * linha){
	Variable *new;
	new = (Variable *) malloc(sizeof(Variable));
	new->name = name;
	new->type = type;
	if (array != NULL){
		if (pointer != NULL){
			new->id = ID_VARIABLE_POINTER_ARRAY;
			new->pointer = getValueString(pointer);
		} else{
			new->id = ID_VARIABLE_ARRAY;
			new->pointer = NULL;
		}
		new->array = array;
	} else if (pointer != NULL){
		new->id = ID_VARIABLE_POINTER;
		new->pointer = getValueString(pointer);
		new->array = NULL;
	} else{
		new->id = ID_VARIABLE;
		new->pointer = NULL;
		new->array = NULL;
	}
	if (value != NULL){
		new->value = value;
	} else{
		new->value = NULL;
	}
	new->line = line;
	if(name!=NULL)new->coluna = coluna-strlen(name)-1;
	else
		new->coluna = coluna;
	new->prox = NULL;
	return new;
}