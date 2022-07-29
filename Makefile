all:			
	gcc Desafio1.c -o desafio1.o
	gcc Desafio2.c -o desafio2.o
	gcc Desafio3.c -o desafio3.o
	gcc Desafio4.c -o desafio4.o -lm
	gcc Desafio5.c -o desafio5.o


clean:
	rm -f desafio1.o
	rm -f desafio2.o
	rm -f desafio3.o
	rm -f desafio4.o
	rm -f desafio5.o

re:				clean all
