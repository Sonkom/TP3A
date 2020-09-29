all: tests.o fonctions.o
	gcc -o Test -lm -Wall fonctions.o tests.o
	rm *.o
	rm *.gch

tests.o : tests.c
	gcc -c -lm -Wall tests.c

fonctions.o : fonctions.c fonctions.h
	gcc -c -Wall -lm fonctions.c fonctions.h

clean:
	rm *.o
	rm *.gch
