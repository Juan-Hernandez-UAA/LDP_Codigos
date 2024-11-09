/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Practice name      | lorem                        |
| Suggested filename | main.cpp                     |
| Filename           | main.cpp                     |
| Author             | Juan Pablo Hernandez Ramirez |
| Date               | 2024-10-31                   |
| Version            | 1.0.0                        |
| Description        | lorem                        |
+--------------------+------------------------------+
*/

#include <stdio.h>
#include <iostream>
using namespace std;

void imprimirEncabezado();
void romano();

int main() {
    printf("Tu nombre aqui\n");
    romano(); // Llamada a la función
    return 0;
}

imprimirEncabezado() {
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

        printf("\nDeseas repetir el programa si (1) no (2): ");
        scanf("%d", &op);
    }
}
