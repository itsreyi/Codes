frazione: frazione.o main.o
	gcc -g -o frazione frazione.o main.o


main.o: main.c frazione.h
	gcc -g -c main.c

frazione.o: frazione.c frazione.h
	gcc -g -c frazione.c