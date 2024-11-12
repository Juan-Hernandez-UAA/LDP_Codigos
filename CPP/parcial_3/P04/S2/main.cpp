#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Para el uso de rand y srand
#define TAM 5 // Para declarar constantes

/* Manejo de un vector establecido
Su tamano con una constante */

int main() {
    /* Declarando un vector de enteros
    De tamano TAM */
    int vec[TAM];
    int i; // Para usarse en el ciclo
    int num; // Para guardar el numero aleatorio
    int acum; /* Acum va float para no tener problema
                     De falta de decimales en el promedio */
    float prom; // Para guardar promedio

    srand(time(0)); // Semilla para los aleatorios

    printf("\n\nLlenado del vector\n");

    // Llenando el vector con numeros aleatorios
    // Entre 10 y 50
    for(i = 0; i < TAM; i++) { // Recorriendo el vector con el ciclo
        num = 10 + rand() % (50 - 10 + 1); // Generando un numero aleatorio entre 10 y 50
        printf("\nGenere el %d para la casilla %d", num, i);
        vec[i] = num;
    }

    // Imprimiendo el vector
    printf("\n\nImprimiendo el vector");

    for(i = 0; i < TAM; i++) { // Recorriendo el vector con el ciclo
        printf("\nEn la casilla %d: %d", i, vec[i]);
    }

    // Obtener el promedio de los numeros del vector
    acum = 0; // Inicializar el acumulador en 0
    for(i = 0; i < TAM; i++) { // Recorriendo el vector con el ciclo
        acum += vec[i]; // Acumulando los valores del vector
    }

    prom = (float)acum / TAM; // Obtener el promedio dividiendo entre TAM

    // Imprimiendo el promedio
    printf("\n\nEl promedio de los valores del vector es: %.2f", prom);

    return 0;
}
