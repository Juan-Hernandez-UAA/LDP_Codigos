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

// --- Main execution ---
int main() {
    system("CLS"); // Clear console screen
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    int numero, suma;
    char resp = 's';

    do {
        suma = 0;

        printf("Ingresa un numero entero positivo: ");
        scanf("%d", &numero);

        if (numero < 10) {
            suma = numero;
        } else {
            while (numero > 0) {
                suma = suma + (numero % 10);
                numero = numero / 10;
            }
        }

        printf("La suma de las cifras del numero es: %d\n", suma);

        printf("Quieres hacer otro calculo? (s/n): ");
        fflush(stdin);  // Limpiar el buffer de entrada
        resp = getchar();

    } while (resp == 's' || resp == 'S');

    return 0;
}