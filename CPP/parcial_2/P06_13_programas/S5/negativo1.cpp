#include <stdio.h>
#include <cstdlib>

int main() {
    system("CLS");
    printf("Alumno: Juan Pablo Hernandez Ramirez \n");


    float numero;

    printf("Introduzca numero real: ");
    scanf("%f", &numero);

    if(numero > 0)
        printf("%f", -numero);

    return 0;
}