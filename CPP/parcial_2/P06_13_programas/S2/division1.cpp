#include <stdio.h>

int main() {
    int dividendo, divisor, cociente, residuo;

    printf("Introduzca dividendo (entero): ");
    scanf("%d", &dividendo);
    printf("Introduzca divisor (entero): ");
    scanf("%d", &divisor);

    cociente = dividendo / divisor;
    residuo = dividendo % divisor;Q

    printf("%d div %d = %d (resto = %d)\n", dividendo, divisor, cociente, residuo);

    return 0;
}