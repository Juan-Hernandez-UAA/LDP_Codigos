#include <stdio.h>

// Programa que intercambia los valores de dos variables
// Prototipo de la función
void swap();

// Variables globales
int a, b, auxiliar;

int main() {
    // Notar que no hay declaración de variables aquí dentro
    // Se están usando las variables globales
    printf("Introduzca a: ");
    scanf("%d", &a);
    printf("Introduzca b: ");
    scanf("%d", &b);

    printf("\nAntes del intercambio\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    swap(); // Llamar a la función de intercambio

    printf("\nDespues del intercambio\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}

void swap() {
    // Notar que no hay declaración de variables aquí dentro
    // Se están usando las variables globales

    // Para el intercambio es necesario apoyarnos de una variable auxiliar
    auxiliar = a;
    a = b;
    b = auxiliar;
}
