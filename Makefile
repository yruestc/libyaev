CC = gcc
CFLAGS = -O -Wall -Isrc
LIBS = -lm

all: test

test: src/event_loop.c example/example.c 
	$(CC) $(CFLAGS) $(LIBS) src/event_loop.c example/example.c

clean:
	rm -f *.o *~ *.out


