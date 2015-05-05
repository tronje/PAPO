CC = gcc
CFLAGS = -ggdb -Wall

all: fib.x valgrind-foo.x mpi_helloworld

%.x: %.c
	${CC} ${CFLAGS} -o $@ $<

mpi_helloworld:
	mpicc -ggdb -Wall -o mpi_helloworld.x mpi_helloworld.c

clean:
	rm -rf *.x *.o
