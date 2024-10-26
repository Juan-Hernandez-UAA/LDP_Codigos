#include <stdio.h>

int main() {
    float numero;

    printf("Introduzca numero real: ");
    scanf("%f", &numero);

    if(numero > 0)
        printf("%f", -numero);

    return 0;
}