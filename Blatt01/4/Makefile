CC = mpicc
CFLAGS = -Wall -Werror -O3 # O3? Warum nicht?

all: mpi_helloworld.x

%.x: %.c
	${CC} ${CFLAGS} -o $@ $<

clean:
	rm -rf *.x *.o
