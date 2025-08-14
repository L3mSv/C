CC = gcc
CFLAGS = -g -Wall 
LIBS = -lm

all: linkedList.o
	$(CC) $(CFLAGS) -o all linkedList.o $(LIBS)

linkedList.o: linkedList.c linkedList.h
	$(CC) $(CFLAGS) -c linkedList.c 

clean:
	-del /Q *.o *.exe *~ all
	-rm -rf *.o *.exe *~ all