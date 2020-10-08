all: chaine.o main.o
	gcc -o prog -Wall chaine.o main.o
	rm *.o
	rm *.gch

main.o : main.c
	gcc -c -Wall main.c

chaine.o : chaine.c chaine.h
		gcc -c -Wall chaine.c chaine.h

clean:
	rm *.o
	rm *.gch
