CC = gcc
CFLAGS = -Wall -Werror -fopenmp

all: openmp_helloworld.x

%.x: %.c
	${CC} ${CFLAGS} -o $@ $<

clean:
	rm -rf *.x *.o
