#include <stdio.h>
#include <stdlib.h>
#include <ctime>  // Agregar esta línea para usar time()

#define REN 5   // Constante para el numero de renglones
#define COL 12  // Constante para el numero de columnas

// Definicion de los colores ANSI
#define BOLD "\033[1m"
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

int main() {
    int matriz[REN][COL];
    int num, contador;

    system("CLS");

    // Encabezado del programa con colores
    printf("%s%sPrograma usando matriz local dentro del main%s\n", GREEN, BOLD, RESET);
    printf("%sAlumno: Juan Pablo Hernandez Ramirez%s\n", GREEN, RESET);

    // Llenar la matriz con números aleatorios
    srand(time(NULL));  // Inicializa la semilla de aleatorización
    for (int r = 0; r < REN; r++) {
        for (int c = 0; c < COL; c++) {
            matriz[r][c] = rand() % 100 + 1;
        }
    }

    // Imprimir la matriz
    printf("\nMatriz generada:\n");
    for (int r = 0; r < REN; r++) {
        for (int c = 0; c < COL; c++) {
            printf("%d ", matriz[r][c]);
        }
        printf("\n");
    }

    // Solicitar al usuario el número a buscar
    printf("\n%sBuscando un numero%s\n", YELLOW, RESET);
    printf("Cual numero buscas? ");
    scanf("%d", &num);

    contador = 0;
    for (int r = 0; r < REN; r++) {
        for (int c = 0; c < COL; c++) {
            if (matriz[r][c] == num) {
                contador++;
            }
        }
    }

    // Mostrar el resultado con colores
    if (contador > 0) {
        printf("\n%sEl numero %d aparece %d veces en la matriz.%s\n", YELLOW, num, contador, RESET);
    } else {
        printf("\n%sEl numero %d no aparece en la matriz.%s\n", YELLOW, num, RESET);
    }

    return 0;
}
