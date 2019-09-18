CC=gcc
OBJ=hello.o name.o
DEPS=hello.h
CFLAGS=-O2

hello: hello.c name.o
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

name: name.c
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

all: hello name
clean:
	rm -f *.o *~ core hello name