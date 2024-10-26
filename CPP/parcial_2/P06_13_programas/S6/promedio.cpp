#include <stdio.h>

int main() {
    int a, b;

    printf("Introduzca el primer numero entero: ");
    scanf("%d", &a);
    printf("Introduzca el primer numero segundo: ");
    scanf("%d", &b);

    if(a > 0 && b > 0)
        printf("%f", (float)(a + b) / 2);

    return 0;
}