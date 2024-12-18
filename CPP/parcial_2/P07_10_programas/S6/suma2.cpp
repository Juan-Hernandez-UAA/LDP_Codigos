/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Suggested filename | sumarDigitos_2.cpp            |
| Filename           | suma2.cpp                    |
| Author             | Juan Pablo Hernandez Ramirez |
| Date               | 2024-10-31                   |
| Version            | 1.0.0                        |
+--------------------+------------------------------+
*/

#include <stdio.h>
#include <iostream>
using namespace std;

// --- Main execution ---
int main() {
    system("CLS"); // Clear console screen
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    int numero, _numero, suma;
    char resp = 's';

    do {
        suma = 0;  // Inicializar el acumulador

        printf("Escriba un numero entero positivo: ");
        scanf("%d", &numero);

        _numero = numero;

        if (numero < 10) {
            suma = numero;
        } else {
            // Calcular la suma de los digitos
            while (numero > 0) {
                suma = suma + (numero % 10);
                numero = numero / 10;
            }
        }

        printf("La suma de las cifras del numero %d es: %d\n", _numero, suma);

        printf("Hacer otro calculo? (s/n): ");
        fflush(stdin);  // Limpiar buffer de entrada
        resp = getchar();

    } while (resp == 's' || resp == 'S');

    return 0;
}