all: fonctions.o main.o
	gcc -o dessin -Wall fonctions.o main.o
	rm *.o
	rm *.gch

Test : tests.o fonctions.o
	gcc -o Test -Wall tests.o fonctions.o
	rm *.o
	rm *.gch

main.o : main.c
	gcc -c -Wall main.c

tests.o : tests.c tests.h fonctions.h
		gcc -c -Wall tests.c tests.h fonctions.h

fonctions.o : fonctions.c fonctions.h
	gcc -c -Wall fonctions.c fonctions.h

clean:
	rm *.o
	rm *.gch
