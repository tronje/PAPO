CC = gcc
CFLAGS = -Wall -Werror

all: helloworld.x

%.x: %.c
	${CC} ${CFLAGS} -o $@ $<

clean:
	rm -rf *.x *.o
