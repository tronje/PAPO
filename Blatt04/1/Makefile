CC = gcc
CFLAGS = -Wall -fopenmp -g

all: 1.1.x 1.2.x 1.3.x 1.4.x

%.x: %.c
	${CC} ${CFLAGS} -o $@ $<

clean:
	rm -f *.o *.x
