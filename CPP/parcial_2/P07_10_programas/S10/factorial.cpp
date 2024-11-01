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


#include <stdio.h>
#include <iostream>
using namespace std;

// --- Main execution ---
int main() {
    system("CLS"); // Clear console screen
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    int n, fact, k;
    char resp = 's';

    while (resp == 's' || resp == 'S') {  // Forzamos que entre la primera vez
        // Captura del numero
        printf("Ingrese un numero para calcular su factorial: ");
        scanf("%d", &n);

        fact = 1;  // Iniciar el acumulador a 1 para multiplicaciones

        // Calcular factorial
        for (k = 1; k <= n; k++) {
            fact = fact * k;  // Actualizar acumulador
            printf("%d ", k);  // Imprimir cada paso
        }
        printf("= %d\n", fact);  // Imprimir el factorial al final

        // Preguntar si desea repetir el programa
        printf("Deseas repetir el programa? (s/n): ");
        fflush(stdin);
        scanf(" %c", &resp);
    }

    return 0;
}