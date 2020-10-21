all: Liste.o main.o
	gcc -o Prog -Wall Liste.o main.o
	rm *.o
	rm *.gch

main.o : main.c
	gcc -g -c -Wall main.c

Liste.o : Liste.c Liste.h
		gcc -g -c -Wall Liste.c Liste.h

clean:
	rm *.o
	rm *.gch
