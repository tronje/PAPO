#include <stdio.h>
#include <stdlib.h>

int lol = 5;

void print_usage(void) {
    fprintf(stderr, "Invalid arguments! Usage:\n./fib {num}\nWhere num is a positive integer\n");
}

int fib(int num) {
    if (num <= 2)
        return 1;
    else
        return fib(num - 1) + fib(num - 2);
}

int main(int argc, char ** argv) {
    int i;

    if (argc < 2) {
        print_usage();
        return EXIT_FAILURE;
    }

    if (!(i = atoi(argv[1]))) {
        print_usage();
        return EXIT_FAILURE;
    }
    
    if (i < 1) {
        print_usage();
        return EXIT_FAILURE;
    }

    printf("The %dth fibonacci-number is: %d\n", i, fib(i));

    return EXIT_SUCCESS;
}
