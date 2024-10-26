#include <stdio.h>

int main() {
    int dividendo, divisor;

    printf("Introduzca un dividendo entero: ");
    scanf("%d", &dividendo);
    printf("Introduzca un divisor entero: ");
    scanf("%d", &divisor);

    printf("d% div %d = %d (residuo = %d)", dividendo, divisor, dividendo / divisor, dividendo % divisor);

    return 0;
}