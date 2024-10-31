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

    char resp;
    float sueldo, horasextra, sueldototal, precioporhoraextra;
    int categoria;

    do {
        // Datos de entrada
        printf("Ingrese el sueldo: ");
        scanf("%f", &sueldo);

        printf("Ingrese las horas extra trabajadas: ");
        scanf("%f", &horasextra);

        // Validar categoria
        do {
            printf("Ingrese la categoria (1 a 4): ");
            scanf("%d", &categoria);
        } while (categoria < 1 || categoria > 4);

        // Limitar horas extra a 30 si se excede
        if (horasextra > 30) {
            horasextra = 30;
        }

        // Asignar pago por hora extra segun categoria
        switch (categoria) {
            case 1:
                precioporhoraextra = 35;
                break;
            case 2:
                precioporhoraextra = 38;
                break;
            case 3:
                precioporhoraextra = 50;
                break;
            case 4:
                precioporhoraextra = 70;
                break;
        }

        // Calcular sueldo total
        sueldototal = sueldo + (horasextra * precioporhoraextra);

        // Mostrar resultados
        printf("Horas extra pagadas: %.2f\n", horasextra);
        printf("Pago por hora extra: %.2f\n", precioporhoraextra);
        printf("Sueldo total: %.2f\n", sueldototal);

        // Preguntar si desea calcular otro sueldo
        printf("Calcular otro sueldo? (s/n): ");
        fflush(stdin);
        resp = getchar();

    } while (resp == 's' || resp == 'S');

    return 0;
}