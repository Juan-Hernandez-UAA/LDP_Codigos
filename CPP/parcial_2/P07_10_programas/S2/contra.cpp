/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Suggested filename | validarContrasena.cpp         |
| Filename           | contra.cpp                     |
| Author             | Juan Pablo Hernandez Ramirez |
| Date               | 2024-10-31                   |
| Version            | 1.0.0                        |
+--------------------+------------------------------+
*/

#include <stdio.h>
#include <iostream>
using namespace std;

// --- Main execution ---
int main() {
    system("CLS"); // Clear console screen
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    int contra, contador = 1;

    while (contador <= 3) {
        printf("Dame la contrasena: ");
        scanf("%d", &contra);

        // Verificacion de la contrasena
        if (contra == 12345) {
            printf("Bienvenido!\n");
            break;
        } else {
            if (contador < 3) {
                printf("Error en la contrasena\n\n");
            } else {
                printf("Oportunidades agotadas\n");
            }
        }

        // Incremento del contador
        contador++;
    }

    return 0;
}