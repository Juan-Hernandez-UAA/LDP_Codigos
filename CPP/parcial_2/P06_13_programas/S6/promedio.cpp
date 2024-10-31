#include <stdio.h>
#include <cstdlib>

int main() {
    system("CLS");
    printf("Alumno: Juan Pablo Hernandez Ramirez \n");


    int a, b;

    printf("Introduzca el primer numero entero: ");
    scanf("%d", &a);
    printf("Introduzca el primer numero segundo: ");
    scanf("%d", &b);

    if(a > 0 && b > 0)
        printf("%f", (float)(a + b) / 2);

    return 0;
}