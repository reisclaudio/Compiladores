#include<comando.h>

struct comando{
	void *cmd;
	Comando *prox;
};

struct listaComandos{
	int id;
	Comando *list;
	ListaComandos *prox;
};