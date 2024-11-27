#include <stdio.h>
#include <iostream>
using namespace std;

void imprimirEncabezado();
void romano();

int main() {
    imprimirEncabezado();
    romano(); // Llamada a la funcion
    return 0;
}

void imprimirEncabezado() {
    system("CLS");
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;
}

void romano() {
    int n, a, b, c, d, op = 1;

    while (op == 1) {
        printf("\nPROGRAMA QUE CONVIERTE NUMEROS DECIMALES A ROMANOS\n");
        printf("Proporciona el numero a convertir: ");
        scanf("%d", &n);

        if (n >= 1 && n <= 3999) {
            printf("\nEquivalente: ");

            d = n / 1000;
            c = (n % 1000) / 100;
            b = (n % 100) / 10;
            a = n % 10;

            switch (d) {
                case 1: printf("M"); break;
                case 2: printf("MM"); break;
                case 3: printf("MMM"); break;
            }

            switch (c) {
                case 1: printf("C"); break;
                case 2: printf("CC"); break;
                case 3: printf("CCC"); break;
                case 4: printf("CD"); break;
                case 5: printf("D"); break;
                case 6: printf("DC"); break;
                case 7: printf("DCC"); break;
                case 8: printf("DCCC"); break;
                case 9: printf("CM"); break;
            }

            switch (b) {
                case 1: printf("X"); break;
                case 2: printf("XX"); break;
                case 3: printf("XXX"); break;
                case 4: printf("XL"); break;
                case 5: printf("L"); break;
                case 6: printf("LX"); break;
                case 7: printf("LXX"); break;
                case 8: printf("LXXX"); break;
                case 9: printf("XC"); break;
            }

            switch (a) {
                case 1: printf("I"); break;
                case 2: printf("II"); break;
                case 3: printf("III"); break;
                case 4: printf("IV"); break;
                case 5: printf("V"); break;
                case 6: printf("VI"); break;
                case 7: printf("VII"); break;
                case 8: printf("VIII"); break;
                case 9: printf("IX"); break;
            }

            printf("\n");
        } else {
            printf("\nError en el numero...\n");
        }

        // Pedir la opcion y limpiar el buffer para evitar ciclos infinitos
        printf("\nDeseas repetir el programa si (1) no (2): ");
        if (scanf("%d", &op) != 1 || (op != 1 && op != 2)) {
            printf("Entrada invalida. Terminando programa.\n");
            break; // Sale del ciclo si la entrada no es valida
        }

        // Limpiar el buffer de entrada
        while (getchar() != '\n');
    }
}
