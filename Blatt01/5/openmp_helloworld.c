#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char* argv[]) {

    if(argc > 2) {
        fprintf(stderr, "Too many arguments!");
        return EXIT_FAILURE;
    }

    // schnell und dreckig die Option,
    // thread Anzahl festzulegen eingebaut
    // nuetzlich fuer aufgabe 6
    if(argc == 2) {
        int temp;
        if(!(temp = atoi(argv[1]))) {
            fprintf(stderr, "Invalid argument!\n");
            fprintf(stderr, "Usage: ./openmp_helloworld.x [num]\n");
            return EXIT_FAILURE;
        }
        omp_set_num_threads(temp);
    }

    // Das pragma, das openmp Parallelisierung initiiert.
    // Hier wurde das Minimum an Argumenten/Optionen verwendet
    // Mehr muss auch nicht gemacht werden, um mit openmp
    // so ein simples Programm zu parallelisieren.
    // Man koennte noch die Anzahl der Threads festlegen.
    // So wie es jetzt ist, also ohne Festlegung, bestimmt
    // einfach openmp (glaube ich) wieviele Threads benutzt
    // werden sollen
    #pragma omp parallel
    printf("Hello World from Thread %d\n", omp_get_thread_num());
    return EXIT_SUCCESS;
}
