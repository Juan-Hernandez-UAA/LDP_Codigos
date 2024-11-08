/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Author             | Juan Pablo Hernandez Ramirez |
| Date               | 2024-10-31                   |
| Version            | 1.0.0                        |
+--------------------+------------------------------+
*/

#include <stdio.h>
#include <iostream>
using namespace std;

header() {
    system("CLS");
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    return 0;
}

int main() {
    header();

    int suma = 0;
    int contador = 0;

    for (int numero = 501; numero <= 600; numero += 2) { // Empezamos en 501, el primer impar despues de 500
        if (numero % 3 == 0) { // Verificamos si es multiplo de 3
            suma += numero;
            contador++;

            // Prueba de escritorio para los primeros 5 numeros que cumplan la condicion
            if (contador <= 5) {
                cout << "Numero: " << numero << " | Suma parcial: " << suma << endl;
            }
        }
    }

    cout << "Sumatoria de los numeros impares multiplos de 3 entre 500 y 600: " << suma << endl;

    return 0;
}