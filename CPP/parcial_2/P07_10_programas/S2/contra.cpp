/*
---------------------------------------------------
Metadata
---------------------------------------------------
Practice name:       lorem
Suggested filename:  main.cpp
Filename:            main.cpp
Author:              Juan Pablo Hernandez Ramirez
Date:                2024-10-31
Version:             1.0.0
Description:         lorem
---------------------------------------------------
*/

#include <stdio.h>
#include <iostream>
using namespace std;

// --- Main execution ---
int main() {
    system("CLS"); // Clear console screen
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    int contador = 1;
    string contra;

    while (contador <= 3) {
        cout << "\nDame la contrasena: ";
        cin >> contra;

        // Verificacion de la contrasena
        if (contra == "12345") {
            cout << "Bienvenido\n";
            break;  // Sale del ciclo si la contrasena es correcta
        } else {
            if (contador < 3) {
                cout << "Error en la contrasena\n";
            } else {
                cout << "Oportunidades agotadas\n";
            }
        }

        // Incremento del contador
        contador++;
    }

    return 0;
}