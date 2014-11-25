CC = gcc
CFLAGS = -O -Wall -m32 -Isrc
LIBS = -lm

all: test

test: src/event_loop.c tests/1_tests.c
	$(CC) $(CFLAGS) $(LIBS) src/event_loop.c tests/1_tests.c -o tests/tests 

clean:
	rm -f *.o tests *~


