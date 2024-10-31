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

    printf("%d", n2);

    if (n2 < n3 && n2 > n1) {
        printf(" Si ");
    } else {
        printf(" No ");
    }

    printf("Es menor que %d y mayor que %d", n3, n1);

    return 0;
}
