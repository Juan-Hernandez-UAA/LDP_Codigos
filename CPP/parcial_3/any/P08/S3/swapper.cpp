#include <stdio.h>

// Programa que intercambia los valores de dos variables
// Prototipo de la funcion
void swap();

// Variables globales
int a, b, auxiliar;

int main() {
    // Notar que no hay declaracion de variables aqui dentro
    // Se estan usando las variables globales
    printf("Introduzca a: ");
    scanf("%d", &a);
    printf("Introduzca b: ");
    scanf("%d", &b);

    printf("\nAntes del intercambio\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    swap(); // Llamar a la funcion de intercambio

    printf("\nDespues del intercambio\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}

void swap() {
    // Notar que no hay declaracion de variables aqui dentro
    // Se estan usando las variables globales

    // Para el intercambio es necesario apoyarnos de una variable auxiliar
    auxiliar = a;
    a = b;
    b = auxiliar;
}
