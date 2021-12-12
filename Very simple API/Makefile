ALL: main

main: main.o vetor.o matriz.o
	gcc main.o vetor.o matriz.o -o main

main.o: main.c api.h
	gcc -c main.c

vetor.o: vetor.c api.h
	gcc -c vetor.c

matriz.o: matriz.c api.h
	gcc -c matriz.c

clean:
	rm -f *.o main
