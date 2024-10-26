#include <stdio.h>

int main() {
    float altura, base;

    printf("Introduzca la base: ");
    scanf("%f", &base);
    printf("Introduzca altura: ");
    scanf("%f", &altura);

    printf("El area del triangulo es: %f", base * altura / 2);

    return 0;
}