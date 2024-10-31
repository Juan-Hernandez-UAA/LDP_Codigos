#include <stdio.h>
#include <cstdlib>

int main() {
    system("CLS");
    printf("Alumno: Juan Pablo Hernandez Ramirez \n");


    int dividendo, divisor;

    printf("Introduzca un dividendo entero: ");
    scanf("%d", &dividendo);
    printf("Introduzca un divisor entero: ");
    scanf("%d", &divisor);

    printf("%d div %d = %d (residuo = %d)", dividendo, divisor, dividendo / divisor, dividendo % divisor);

    return 0;
}