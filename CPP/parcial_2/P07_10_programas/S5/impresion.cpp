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
#include <stdio.h> // Para printf y scanf
#include <iostream>
using namespace std;

// --- Main execution ---
int main() {
    system("CLS"); // Clear console screen
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    char letra;
    int numero, i;


    printf("Ingresa una letra: ");
    scanf(" %c", &letra);

    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    while (numero > 0) {
        for (i = 0; i < numero; i++) {
            printf("%c", letra);
        }
        printf("\n");  // Salto de línea
        numero--;
    }

    return 0;
}
