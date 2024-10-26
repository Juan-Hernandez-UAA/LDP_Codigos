#include <stdio.h>

int main() {
    int a, b;

    printf("Introduzca primer numero (entero): ");
    scanf("%d", &a);

    printf("Introduzca segundo numero (entero): ");
    scanf("%d", &b);

    if (a + b > a * b) {
        printf("La suma es mayor.\n");
    } else { // Inicio del anidamiento
        if (a * b > a + b) {
            printf("La multiplicación es mayor.\n");
        } else {
            printf("La suma y multiplicación son iguales.\n");
        } // Fin del anidamiento
    }

    return 0;
}
