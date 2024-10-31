#include <stdio.h>
#include <cstdlib>

int main() {
    system("CLS");
    printf("Alumno: Juan Pablo Hernandez Ramirez \n");


    float altura, base;

    printf("Introduzca la base: ");
    scanf("%f", &base);
    printf("Introduzca altura: ");
    scanf("%f", &altura);

    printf("El area del triangulo es: %f", base * altura / 2);

    return 0;
}