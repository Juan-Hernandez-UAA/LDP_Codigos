#include <stdio.h>
#include <cstdlib>

int main() {
    system("CLS");
    printf("Alumno: Juan Pablo Hernandez Ramirez \n");

    int a, b, suma;

    printf("Introduzca primer numero (entero): ");
    scanf("%d", &a);

    printf("Introduzca segundo numero (entero): ");
    scanf("%d", &b);

    suma = a + b;

    if (suma > 0)
        printf("LA SUMA SI ES MAYOR QUE CERO.\n");
    else
        printf("LA SUMA NO ES MAYOR QUE CERO.\n");

    return 0;
}