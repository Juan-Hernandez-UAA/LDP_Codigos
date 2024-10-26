#include <stdio.h>

int main() {
    int a, b;

    printf("Introduzca primer numero (entero): ");
    scanf("%d", &a);
    
    printf("Introduzca segundo numero (entero): ");
    scanf("%d", &b);

    if (a + b > 0)
        printf("LA SUMA SI ES MAYOR QUE CERO.\n");
    else
        printf("LA SUMA NO ES MAYOR QUE CERO.\n");

    return 0;
}