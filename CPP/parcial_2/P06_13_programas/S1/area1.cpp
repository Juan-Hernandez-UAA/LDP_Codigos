#include <stdio.h>
#include <cstdlib>

int main() {
    system("CLS");
    printf("Alumno: Juan Pablo Hernandez Ramirez \n");
    float area, base, altura;

    printf("Introduzca base: ");
    scanf("%f", &base);
    printf("Introduzca altura: ");
    scanf("%f", &altura);

    area = base * altura / 2;

    printf("El area del triangulo es: %f", area);

    return 0;
}