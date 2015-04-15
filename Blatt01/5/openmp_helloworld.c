#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(void) {
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
    return 0;
}
