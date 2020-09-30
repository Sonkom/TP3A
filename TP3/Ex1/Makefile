all: tests.o fonctions.o
	gcc -o Test -Wall fonctions.o tests.o -lm
	rm *.o
	rm *.gch

tests.o : tests.c
	gcc -c -Wall tests.c -lm

fonctions.o : fonctions.c fonctions.h
	gcc -c -Wall fonctions.c fonctions.h -lm

clean:
	rm *.o
	rm *.gch
