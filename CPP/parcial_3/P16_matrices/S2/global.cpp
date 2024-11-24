#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define REN 5   // Constante para el numero de renglones
#define COL 12  // Constante para el numero de columnas

#define BOLD "\033[1m"
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

// Declaracion de la matriz global
int matriz[REN][COL];

// Prototipos de las funciones
void llenar();
void imprimir();
void buscar();

int main() {

    system("CLS");

    printf("%s%sPrograma usando matriz global y funciones%s\n", GREEN, BOLD, RESET);
    printf("%sAlumno: Juan Pablo Hernandez Ramirez%s\n", GREEN, RESET);

    llenar();  // Llamar a la funcion para llenar la matriz
    imprimir();  // Llamar a la funcion para imprimir la matriz
    buscar();  // Llamar a la funcion para buscar un numero

    return 0;
}

// Funcion para llenar la matriz con numeros aleatorios
void llenar() {
    srand(time(NULL));  // Inicializar la semilla para los numeros aleatorios
    for (int r = 0; r < REN; r++) {
        for (int c = 0; c < COL; c++) {
            matriz[r][c] = rand() % 100 + 1;  // Llenar la matriz con numeros entre 1 y 100
        }
    }
}

// Funcion para imprimir la matriz
void imprimir() {
    printf("\nMatriz generada:\n");
    for (int r = 0; r < REN; r++) {
        for (int c = 0; c < COL; c++) {
            printf("%d ", matriz[r][c]);
        }
        printf("\n");
    }
}

// Funcion para buscar un numero en la matriz
void buscar() {
    int num, contador = 0;

    printf("\nCual numero buscas? ");
    scanf("%d", &num);  // Leer el numero a buscar

    // Buscar el numero en la matriz
    for (int r = 0; r < REN; r++) {
        for (int c = 0; c < COL; c++) {
            if (matriz[r][c] == num) {
                contador++;
            }
        }
    }

    // Mostrar el resultado
    if (contador > 0) {
        printf("\n%sEl numero %d aparece %d veces en la matriz.%s\n", YELLOW, num, contador, RESET);
    } else {
        printf("\n%sEl numero %d no aparece en la matriz.%s\n",YELLOW, num, RESET);
    }
}
