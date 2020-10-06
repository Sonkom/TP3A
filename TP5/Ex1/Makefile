all: Fraction.o main.o
	gcc -o prog -Wall Fraction.o main.o
	rm *.o
	rm *.gch

main.o : main.c
	gcc -c -Wall main.c

Fraction.o : Fraction.c Fraction.h
		gcc -c -Wall Fraction.c Fraction.h

clean:
	rm *.o
	rm *.gch
