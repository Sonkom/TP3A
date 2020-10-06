all: pile.o main.o
	gcc -o prog -Wall pile.o main.o
	rm *.o
	rm *.gch

main.o : main.c
	gcc -c -Wall main.c

pile.o : pile.c pile.h
		gcc -c -Wall pile.c pile.h

clean:
	rm *.o
	rm *.gch
