#include <iostream>
#include <cmath>     // Para pow y sqrt
#include <cstdlib>   // Para srand y rand
#include <ctime>     // Para time
#include <windows.h> // Para Sleep y Beep
#include <stdio.h>   // Para printf y scanf
using namespace std;

#define TAM 15
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

// Funcion para imprimir el encabezado
void imprimirEncabezado() {
    system("CLS");
    cout << BOLD << GREEN << "Busqueda en un vector aleatoriamente generado" << RESET << endl;
    cout << GREEN << "Alumno: Juan Pablo Hernandez Ramirez" << RESET << endl;
}

// Funcion para llenar el vector con numeros aleatorios
void llenarVector(int vec[], int tam) {
    printf("%s\nLlenando: ", GREEN);
    srand(time(0));
    for (int i = 0; i < tam; i++) {
        vec[i] = 10 + rand() % 21; // Numeros aleatorios entre 10 y 30
        Sleep(50);                 // Retardo para efecto visual
        Beep(888, 100);            // Sonido (A5)
        printf("%c ", 219);        // Imprime un cuadrado en pantalla
    }
    printf("\n");
}

// Funcion para imprimir el vector
void imprimirVector(const int vec[], int tam) {
    printf("%s\nEl vector generado es: [", YELLOW);
    for (int i = 0; i < tam; i++) {
        printf("%d%s", vec[i], (i < tam - 1) ? ", " : "");
    }
    printf("]\n");
}

// Funcion para encontrar el numero mas pequeño en el vector
int encontrarMenor(const int vec[], int tam) {
    int menor = vec[0];
    for (int i = 1; i < tam; i++) {
        if (vec[i] < menor) {
            menor = vec[i];
        }
    }
    return menor;
}

// Funcion para mostrar los calculos de cuadrado y raiz cuadrada
void calcularYMostrar(int vec[], int tam) {
    printf("\n%sElevando cada numero al cuadrado y obteniendo raiz cuadrada:\n", RESET);
    printf("%-5s %-10s %-10s\n", "No.", "Cuadrado", "Raiz cuadrada");
    for (int i = 0; i < tam; i++) {
        double cuadrado = pow(vec[i], 2);
        double raiz = sqrt(vec[i]);
        printf("%-5d %-10.2f %-10.2f\n", vec[i], cuadrado, raiz);
    }
}

// Funcion para buscar un numero en el vector
void buscarNumero(const int vec[], int tam) {
    int numero, encontrado;
    char respuesta;
    do {
        printf("\n%sQue numero quieres buscar? ", RESET);
        scanf("%d", &numero);

        encontrado = 0; // Inicializa bandera
        for (int i = 0; i < tam; i++) {
            if (vec[i] == numero) {
                encontrado = 1;
                break;
            }
        }

        if (encontrado) {
            printf("El numero %d %ssi%s esta en el vector.\n", numero, GREEN, RESET);
        } else {
            printf("El numero %d %sno%s esta en el vector.\n", numero, RED, RESET);
        }

        printf("Buscar otro numero en el vector? (s/n): ");
        fflush(stdin);
        respuesta = getchar();
    } while (respuesta == 's' || respuesta == 'S');
}

// Funcion principal
int main() {
    imprimirEncabezado();

    int vec[TAM];
    llenarVector(vec, TAM);
    imprimirVector(vec, TAM);

    int menor = encontrarMenor(vec, TAM);
    printf("%sEl numero mas chico en el vector es: %d\n", RESET, menor);

    calcularYMostrar(vec, TAM);
    buscarNumero(vec, TAM);

    printf("\n");
    system("pause");
    return 0;
}
