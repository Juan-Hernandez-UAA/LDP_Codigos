#include <stdio.h>
#include <cstdlib>

int main() {
    system("CLS");
    printf("Alumno: Juan Pablo Hernandez Ramirez \n");


    int numero;

    printf("Introduzca numero del dado: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("La cara opuesta es \"seis\".\n");
            break;
        case 2:
            printf("La cara opuesta es \"cinco\".\n");
            break;
        case 3:
            printf("La cara opuesta es \"cuatro\".\n");
            break;
        case 4:
            printf("La cara opuesta es \"tres\".\n");
            break;
        case 5:
            printf("La cara opuesta es \"dos\".\n");
            break;
        case 6:
            printf("La cara opuesta es \"uno\".\n");
            break;
        default:
            printf("ERROR: Numero incorrecto.\n");
    }

    return 0;
}
