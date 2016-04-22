CC = cc
CFLAGS = -std=c99 -pedantic -Wall -g
OBJECTS = ex1.o

all: ex1

ex1.o: ex1.c
	$(CC) $(CFLAGS) -c ex1.c

ex1: $(OBJECTS)
	$(CC) $(OBJECTS) -o ex1

clean:
	rm -rf *.o *.out ex1.o.* a.*
	rm -rf ex1
	rm -rf ex1.dSYM
