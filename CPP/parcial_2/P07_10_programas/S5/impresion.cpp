/*
 * --- Metadata ---
 *
 * Practice name:       lorem
 * Suggested filename:  main.cpp
 * Filename:            main.cpp
 * Author:              Juan Pablo Hernandez Ramirez
 * Date:                2024-10-31
 * Version:             1.0.0
 * Description:         lorem
 */

#include <stdio.h> // Para printf y scanf
#include <iostream>
using namespace std;

// --- Main execution ---
int main() {
    system("CLS"); // Clear console screen
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    char letra;
    int numero, i;

    // Capturar letra y número
    printf("Ingresa una letra: ");
    scanf(" %c", &letra);  // Espacio antes de %c para evitar errores de entrada

    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    // Bucle para imprimir la letra en renglones
    while (numero > 0) {
        for (i = 0; i < numero; i++) {
            printf("%c", letra);  // Imprimir letra
        }
        printf("\n");  // Salto de línea
        numero--;  // Reducir número en cada ciclo
    }

    return 0;
}
