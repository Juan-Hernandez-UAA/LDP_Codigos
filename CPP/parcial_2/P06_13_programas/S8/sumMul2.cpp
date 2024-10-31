#include <stdio.h>
#include <cstdlib>

int main() {
    system("CLS");
    printf("Alumno: Juan Pablo Hernandez Ramirez \n");


    int a, b;

    printf("Introduzca primer numero (entero): ");
    scanf("%d", &a);

    printf("Introduzca segundo numero (entero): ");
    scanf("%d", &b);

    if (a + b > a * b) {
        printf("La suma es mayor.\n");
    } else { // Inicio del anidamiento
        if (a * b > a + b) {
            printf("La multiplicacion es mayor.\n");
        } else {
            printf("La suma y multiplicacion son iguales.\n");
        } // Fin del anidamiento
    }

    return 0;
}
