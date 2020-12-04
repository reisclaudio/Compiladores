FLEX=flex
BISON=bison
CC=gcc
FLAGS=-std=c99

T2 = dcmat
LEXICO = lexico.l
SINTATICO = sintatico.y

$(T2): $(LEXICO) $(SINTATICO) 
	$(BISON) -d $(SINTATICO)
	$(FLEX) $(LEXICO)
	$(CC) -c *.c -I. $(FLAGS)
	$(CC) *.o -o $(T2) $(FLAGS)

clean:
	rm -f *.yy.c
	rm -f *.tab.c
	rm -f *.tab.h
	rm -f *.o
	rm -f *.exe
	rm -f sintatico
	rm -f lexico
	rm -f dcmat
