#include <stdio.h>
#include <mpi.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    // initialisiert den Teil des Programms,
    // der MPI benutzt. In diesem Fall praktisch
    // die gesamte main Funktion
    MPI_Init(&argc, &argv);

    // wir speichern die Anzahl unserer Prozesse
    // (nicht threads!) in einer Variable mithilfe
    // einer von mpi.h implementierten Funktion.
    // MPI_COMM_WORLD ist der Communicator der automatisch
    // alle unsere Prozesse enthält
    int num_processes;
    MPI_Comm_size(MPI_COMM_WORLD, &num_processes);

    // analog zur Prozessanzahl oben, speichern
    // wir hier den Rang. Unterschied zu MPI_Comm_size
    // ist, dass der Rang natürlich unterschiedlich
    // für alle Prozesse ist
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    
    // das print Statement, hier passiert nichts besonderes
    printf("Hello World from Process %d of %d\n", rank, num_processes);

    // hier endet die Benutzung von MPI. MPI_Finalize muss immer am Ende
    // eines MPI-Programms aufgerufen werden.
    MPI_Finalize();

    // und wir sind fertig, returnen also Erfolg and die Shell
    return EXIT_SUCCESS;
}
