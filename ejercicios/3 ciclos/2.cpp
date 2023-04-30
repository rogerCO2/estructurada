#include <stdio.h>
#define N 20

int main() {
    char nombres[N][50];
    float notas[N];
    int i, aplazados = 0;

    // Entrada de datos
    for (i = 0; i < N; i++) {
        printf("Ingrese el nombre del alumno #%d: ", i + 1);
        scanf("%s", nombres[i]);


        printf("Ingrese la nota del alumno #%d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Salida de datos
    printf("Los siguientes alumnos han sido aplazados:\n");
    for (i = 0; i < N; i++) {
        if (notas[i] < 4) {
            printf("- %s (nota: %.1f)\n", nombres[i], notas[i]);
            aplazados++;
        }
    }

    printf("Total de alumnos aplazados: %d\n", aplazados);

    return 0;
}

