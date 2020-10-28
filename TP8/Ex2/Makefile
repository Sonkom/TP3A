all: main.o fonction.o
	gcc -o prog main.o fonction.o
	rm *.o
	rm *.gch

main.o: main.c
	gcc -c main.c -ansi -pedantic -Wall

fonction.o: fonction.c fonction.h
	gcc -c fonction.c -ansi -pedantic -Wall

clean:
	rm -rf *.o
