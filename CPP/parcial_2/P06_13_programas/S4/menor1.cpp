#include <stdio.h>
#include <cstdlib>

int main() {
    system("CLS");
    printf("Alumno: Juan Pablo Hernandez Ramirez \n");


    int n1, n2, n3;

    printf("Introduzca primer numero (entero): ");
    scanf("%d", &n1);

    printf("Introduzca segundo numero (entero): ");
    scanf("%d", &n2);

    printf("Introduzca tercer numero (entero): ");
    scanf("%d", &n3);

    if (n2 < n3 && n2 > n1) {
        printf("SI ES MENOR QUE %d Y MAYOR QUE %d.\n", n3, n1);
    } else {
        printf("%d NO ES MENOR QUE %d Y MAYOR QUE %d.\n", n2, n1, n3);
    }

    return 0;
}
