#include <stdio.h>
#include <stdlib.h>
#define TAM 10 // Para declarar constantes

/* Declaracion e inicializacion de un
vector en la misma linea de codigo */

int main() {
    /* Declarando un vector de enteros
    de tamano TAM */

    int vec1[TAM] = {1, 4, 2, 3, 7, 5, 8, 1, 0, 10}; // Asegurate de declarar solo 5 elementos
    int vec2[TAM] = {0}; /* Cuando se quiere que todas las casillas del vector
                            se inicien en 0, es suficiente poner un 0 asi {0} */

    int i; // Para usarse en el ciclo

    // Imprimiendo el vector vec1
    printf("Alumno: Juan Pablo Hernandez Ramirez\n");
    printf("Imprimiendo el vector vec1\n");
    for(i = 0; i < TAM; i++) { // Recorriendo el vector con el ciclo
        printf("Vector1[%d]: %d\n", i, vec1[i]);
    }

    // Imprimiendo el vector vec2
    printf("El vector vec2:\n");
    for(i = 0; i < TAM; i++) { // Recorriendo el vector con el ciclo
        printf("Vector2[%d]: %d\n", i, vec2[i]);
    }

    printf("\n");
    system("pause");

    return 0;
}
