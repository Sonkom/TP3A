all: Jeu_Multi.o
	gcc -o Multi -Wall Jeu_Multi.o
	rm *.o
	rm *.gch

Jeu_Multi.o : Jeu_Multi.c Jeu_Multi.h
	gcc -c -Wall Jeu_Multi.c Jeu_Multi.h

clean:
	rm *.o
	rm *.gch
