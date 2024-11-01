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

    int cant, billetes_500, billetes_200, billetes_100, billetes_50;

    cout << "Dame la cantidad a retirar: ";
    cin >> cant;

    if ((cant >= 50 && cant <= 4900) && (cant % 50 == 0)) {
        billetes_500 = cant / 500;
        billetes_200 = (cant % 500) / 200;
        billetes_100 = (cant % 500 % 200) / 100;
        billetes_50 = (cant % 500 % 200 % 100) / 50;

        cout << "Billetes de 500: " << billetes_500 << endl;
        cout << "Billetes de 200: " << billetes_200 << endl;
        cout << "Billetes de 100: " << billetes_100 << endl;
        cout << "Billetes de 50: " << billetes_50 << endl;
    } else {
        cout << "Error en la cantidad a retirar" << endl;
    }

    return 0;
}