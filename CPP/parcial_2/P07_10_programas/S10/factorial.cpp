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

    int n, fact, k;
    char resp = 's';

    while(resp == 's' || resp == 'S') {
        // Captura del numero
        printf("Ingrese un numero para calcular su factorial: ");
        scanf("%d", &n);

        fact = 1;  // Iniciar el acumulador a 1 para multiplicaciones

        printf("%d! = ", n);

        // Calcular factorial
        for(k = 1; k <= n; k++) {
            printf("%d", k); // Cuerpo de procedimiento

            if(k != n) {
                printf("x"); // Concatenar signo de multiplicacion
            }

            fact = fact * k;
        }
        printf(" = %d\n", fact); // Resultado del factorial

        // Preguntar si desea repetir el programa
        printf("Deseas repetir el programa? (s/n): ");
        fflush(stdin);
        scanf(" %c", &resp);
    }

    return 0;
}