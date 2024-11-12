#include <stdio.h>
#include <stdlib.h>
#define TAM 5 // Para declarar constantes

/* Declaracion e inicializacion de un
vector en la misma linea de codigo */

int main() {
    /* Declarando un vector de enteros
    de tamano TAM */

    int vec1[TAM] = {10,15,50,30,29,34,67,12,98,34} /* Cuidado solo teclear tantos valores
                                                       como TAM indique */

    int vec2[TAM] = {0} /* Cuando se quiere que toda las casillas del vector
                           se inicien en 0, es suficiente poner un 0 asi {0}, esto solo funciona
                           con el 0, no funciona con otros numeros */

    int i; // Para usarse en el ciclo

    // Imprimiendo el vector
    printf("Imprimiendo el vector vec1\n");
    for(i = 0; i < TAM; i++) { // Recorriendo el vector con el ciclo
        printf("Vector[%d]: %d\n", i, vec[i]);
    }

    // Imprimiendo el vector
    printf("El vector vector vec2:\n");
    for(i = 0; i < TAM; i++) { // Recorriendo el vector con el ciclo
        printf("Vector[%d]: %d\n", i, vec[i]);
    }

    printf("\n");
    system("pause");

    return 0;
}
