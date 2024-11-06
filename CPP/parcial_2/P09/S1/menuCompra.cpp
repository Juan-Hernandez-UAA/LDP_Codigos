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

    int opcionSeleccionada;

    do {
        cout << "Que quieres ordenar?" << endl;
        cout << "1) Hamburguesa" << endl;
        cout << "2) Hot dog" << endl;
        cout << "3) Torta" << endl;
        cout << "4) Burrito" << endl;
        cout << "Selecciona un numero entre 1 y 4: ";
        cin >> opcionSeleccionada;

        switch (opcionSeleccionada) {
            case 1:
                cout << "Hamburguesa a la orden" << endl;
                break;
            case 2:
                cout << "Hot dog a la orden" << endl;
                break;
            case 3:
                cout << "Torta a la orden" << endl;
                break;
            case 4:
                cout << "Burrito a la orden" << endl;
                break;
            default:
                header();
                cout << "Error: selecciona un numero entre 1 y 4" << endl;
        }
    } while (opcionSeleccionada < 1 || opcionSeleccionada > 4);

    return 0;
}