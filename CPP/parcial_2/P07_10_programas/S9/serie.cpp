/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Practice name      | lorem                        |
| Suggested filename | serieAscendente.cpp          |
| Filename           | serie.cpp                    |
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

    int n, k, j;
    char resp = 's';

    while (resp == 's' || resp == 'S') {
        printf("Hasta que numero quieres la serie?: ");
        scanf("%d", &n);

        // Imprimir serie
        for (k = 1; k <= n; k++) {
            for (j = 1; j <= k; j++) {
                printf("%d, ", k);
            }
        }

        // Preguntar si desea repetir el programa
        printf("\nDeseas repetir el programa? (s/n): ");
        fflush(stdin);
        scanf(" %c", &resp);
        printf("\n");
    }

    return 0;
}