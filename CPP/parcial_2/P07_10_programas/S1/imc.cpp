/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Suggested filename | calculoIMC.cpp               |
| Filename           | imc.cpp                      |
| Author             | Juan Pablo Hernandez Ramirez |
| Date               | 2024-10-31                   |
| Version            | 1.0.0                        |
+--------------------+------------------------------+
*/

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// --- Main execution ---
int main() {
    float peso, estatura, imc;
    char resp;

    do {
        system("CLS");
        printf("Alumno: Juan Pablo Hernandez Ramirez\n");

        printf("Dame tu peso en kilos: ");
        scanf("%f", &peso);
        printf("Dame tu estatura en metros: ");
        scanf("%f", &estatura);

        // Cálculo del IMC
        imc = peso / pow(estatura, 2);

        // Mostrar el IMC calculado
        printf("\nTu indice de masa corporal es: %.2f\n", imc);

        // Tabla informativa
        printf("\nTabla Informativa");
        printf("\n+--------------+--------------------+");
        printf("\n| Rango        | Categoria          |");
        printf("\n+--------------+--------------------+");
        printf("\n| Menor a 18   | Peso Bajo          |");
        printf("\n| De 18 a 24.9 | Peso Normal        |");
        printf("\n| De 25 a 26.9 | Sobrepeso          |");
        printf("\n| De 27 a 29.9 | Obesidad grado I   |");
        printf("\n| De 30 a 39.9 | Obesidad grado II  |");
        printf("\n| Mayor a 40   | Obesidad grado III |");
        printf("\n+--------------+--------------------+");

        printf("\n");

        // Preguntar si desea repetir el cálculo
        printf("Deseas repetir la solucion? (s/n): ");
        fflush(stdin); // Limpiar el buffer de entrada
        resp = getchar();

    } while (resp == 's' || resp == 'S');

    return 0;
}
