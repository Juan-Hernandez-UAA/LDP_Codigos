#include <stdio.h>
#include <stdlib.h>

/* MANEJO DE UN VECTOR ESTABLECIENDO
   SU TAMANO CON UNA LITERAL
   NUMERICA, es decir, directo
   el numero dentro de los corchetes */

int main() {
    /* Declarando un vector de reales
       de tamano 4 */
    float vec[4];
    int i; // Para usarse en el ciclo
    float acumulador = 0; // Inicializando el acumulador a 0
    float promedio; // Para el promedio

    // Se puede ajustar el tamaño como constante para mejorar la flexibilidad y evitar el "hardcoding"
    const int TAMANO_VECTOR = 4;

    printf("Alumno: Juan Pablo Hernandez Ramirez");
    printf("\nTamano del vector es %d\n", TAMANO_VECTOR);

    // Llenando el vector desde teclado
    printf("\n\nLlenado del vector\n");
    for(i = 0; i < TAMANO_VECTOR; i++) { // Recorriendo el vector con el ciclo
        printf("Dame el valor para la casilla %d: ", i);
        // Validando entrada de datos
        if (scanf("%f", &vec[i]) != 1) {
            printf("Error en la entrada de datos. Debes ingresar un numero real.\n");
            return 1; // Terminamos el programa si la entrada es incorrecta
        }
    }

    // Imprimiendo el vector
    printf("Imprimiendo el vector:\n");
    for(i = 0; i < TAMANO_VECTOR; i++) { // Recorriendo el vector con el ciclo
        printf("\nEn la casilla %d: %.2f\n", i, vec[i]);
    }

    // Obtener el promedio de los numeros del vector
    for(i = 0; i < TAMANO_VECTOR; i++) { // Recorriendo el vector con el ciclo
        acumulador += vec[i]; // Acumulando los valores
    }

    promedio = acumulador / TAMANO_VECTOR; // Obtener el promedio

    // Imprimir el promedio
    printf("\n\nEl promedio de los valores del vector es: %.2f\n", promedio);

    printf("\n");
    system("pause");
    return 0;
}