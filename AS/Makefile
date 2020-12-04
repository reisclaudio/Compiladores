FLEX=flex
BISON=bison
CC=gcc
FLAGS=-std=c99

ANALISADOR = sintatico
LEXICO = lexico.l
SINTATICO = sintatico.y

$(ANALISADOR): $(LEXICO) $(SINTATICO) 
	$(BISON) -d $(SINTATICO)
	$(FLEX) $(LEXICO)
	$(CC) -c *.c -I. $(FLAGS)
	$(CC) *.o -o $(ANALISADOR) $(FLAGS)

clean:
	rm -f *.yy.c
	rm -f *.tab.c
	rm -f *.tab.h
	rm -f *.o
	rm -f *.exe
	rm -f sintatico
	rm -f lexico
