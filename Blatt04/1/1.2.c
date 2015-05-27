#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

int main(int argc, char ** argv) {
    int actualargc = argc - 1;
    int * actualargv = malloc(sizeof(int) * actualargc);
    int i;
    unsigned long sum = 0;
    struct timespec before;
    struct timespec after;

    for (i = 1; i < argc; i++) {
        actualargv[i-1] = atoi(argv[i]);
    }

    clock_gettime(CLOCK_REALTIME, &before);

    #pragma omp critical
    for (i = 0; i < actualargc; i++) {
        sum += actualargv[i];
    }

    clock_gettime(CLOCK_REALTIME, &after);

    printf("Time taken: %ld seconds %ld nanoseconds\n", after.tv_sec - before.tv_sec, after.tv_nsec - before.tv_nsec);
    printf("The sum is: %ld\n", sum);

    free(actualargv);
    return EXIT_SUCCESS;
}
