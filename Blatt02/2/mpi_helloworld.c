#include <stdio.h>
#include <mpi.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    MPI_Init(&argc, &argv);

    int num_processes;
    MPI_Comm_size(MPI_COMM_WORLD, &num_processes);

    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    
    int arr[3];
    arr[0] = rank - 1;
    arr[1] = rank;
    arr[2] = rank + 1;

    printf("%d%d%d\n", arr[0], arr[1], arr[2]);
    printf("Hello World from Process %d of %d\n", rank, num_processes);

    MPI_Finalize();

    return EXIT_SUCCESS;
}
