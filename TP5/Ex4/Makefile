all: listeTableau.o main.o
	gcc -o prog -Wall listeTableau.o main.o
	rm *.o
	rm *.gch

main.o : main.c
	gcc -c -Wall main.c

listeTableau.o : listeTableau.c listeTableau.h
		gcc -c -Wall listeTableau.c listeTableau.h

clean:
	rm *.o
	rm *.gch
