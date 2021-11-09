CC=cc
CFLAGS=-I -std=c99 -pedantic -Wall
DEPS = DataStructures.h
OBJ = Driver.o DataStructures.o

DS_Test: $(OBJ) 
	$(CC) -o DS_Test $(OBJ)
	chmod 755 DS_Test
	./DS_Test

clean:
	rm -f *.o DS_Test