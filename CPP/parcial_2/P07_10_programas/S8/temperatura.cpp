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

    float centigrados, conv;
    char resp = 's';

    while (resp == 's' || resp == 'S') {
        // Captura de temperatura en grados Celsius
        printf("Ingrese la temperatura en grados Celsius: ");
        scanf("%f", &centigrados);

        // Conversion de Celsius a Fahrenheit
        conv = (centigrados * 9 / 5) + 32;
        printf("La conversion de %.2f grados Celsius a Fahrenheit es %.2f\n", centigrados, conv);

        // Preguntar si desea repetir el programa
        printf("Deseas repetir el programa? (s/n): ");
        fflush(stdin);
        scanf(" %c", &resp);  // Espacio antes de %c para evitar errores de entrada
    }

    return 0;
}