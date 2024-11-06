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

header() {
    system("CLS");
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    return 0;
}

int main() {
    header();
    cout << endl;

    int sumaMultiplos = 0;

    for (int valorActual = 100; valorActual <= 200; valorActual++) {
        if (valorActual % 5 == 0) {
            sumaMultiplos += valorActual;
        }

        cout << valorActual << (
            (valorActual % 5 == 0) ? " -> Es multiplo de 5" : ""
        ) << endl;
    }

    cout << "\nLa suma de multiplos de 5 entre 100 y 200 es: " << sumaMultiplos << endl;

    return 0;
}