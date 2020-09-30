all: matrice.o main.o
	gcc -o dessin -Wall graphlib.o matrice.o main.o
	rm *.o
	rm *.gch

main.o : main.c
	gcc -c -Wall main.c

matrice.o : matrice.c matrice.h
		gcc -c -Wall matrice.c matrice.h

clean:
	rm *.o
	rm *.gch
