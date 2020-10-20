all: pile.o main.o
	gcc -o prog -Wall pile.o main.o
	rm *.o
	rm *.gch

main.o : main.c
	gcc -g -c -Wall main.c

pile.o : pile.c pile.h
	gcc -g -c -Wall pile.c pile.h

clean:
	rm *.o
	rm *.gch
