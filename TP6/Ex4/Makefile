all: graphlib.o dessine.o main.o
	gcc -o dessin -Wall graphlib.o dessine.o main.o -lX11 -L/usr/X11R6/lib
	rm *.o
	rm *.gch

main.o : main.c
	gcc -c -Wall main.c

dessine.o : dessine.c dessine.h
	gcc -c -Wall dessine.c dessine.h

graphlib.o : graphlib.c graphlib.h
	gcc -c -Wall graphlib.c graphlib.h

clean:
	rm *.o
	rm *.gch
