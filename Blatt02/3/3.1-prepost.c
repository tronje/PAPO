#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

int ** split(int world_size, int * arr) {
    
}

int main(int argc, char ** argv) {
    MPI_Init(&argc, &argv);

    int i, j;
    int world_size;
    int rank;
    int values_per_process;
    int rem;
    int result;
    int * values;
    int ** split_values;

    if (argc < 2)
        return EXIT_FAILURE;

    MPI_Comm_size(MPI_COMM_WORLD, &world_size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    // estimate process load with integer division
    values_per_process = (argc - 1) / world_size;

    // calculate remainder of the integer division
    rem = (argc - 1) % world_size;

    if (rem == 0) {
        localvalues = (int*) malloc(values_per_process * sizeof(int));
    } else {
        localvalues = (int*) malloc((values_per_process + 1) * sizeof(int));
    }

    if (rank == 0) {
        values = (int*) malloc((argc - 1) * sizeof(int));

        for (i = 1; i < argc; i++) {
            if (!(values[i-1] = atoi(argv[i]))) {
                printf("Issue with parameter conversion!\nPass only integers!\n");
                MPI_Finalize();
                exit(EXIT_FAILURE);
            }
        }

        split_values = split(world_size, &values);
    }




}
