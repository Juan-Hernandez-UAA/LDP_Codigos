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

#include <iostream>
#include <cmath>    // Para pow y sqrt
#include <cstdlib>  // Para srand y rand
#include <ctime>    // Para time
#include <windows.h> // Para Sleep y Beep
#include <stdio.h>   // Para printf y scanf
using namespace std;

#define TAM 15 // Tamaño del vector
#define GREEN "\033[32m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

void imprimirEncabezado(){
    system("CLS"); // Clear console screen
    cout << BOLD << GREEN << "Nombre de la practica" << RESET << endl;
    cout << GREEN << "Alumno: Juan Pablo Hernandez Ramirez" << RESET << endl;
}

int main() {
    imprimirEncabezado();

    int vec[TAM], i;
    double cua;  // Para guardar el resultado de pow
    double raiz; // Para guardar el resultado de sqrt
    int n;       // Numero a buscar en el vector
    int menor;   // Numero mas chico en el vector
    int band;    // Bandera para la busqueda de un numero
    char resp;   // Para repetir la busqueda de un numero

    // Semilla para numeros aleatorios
    srand(time(0));

    // Llenando el vector con numeros aleatorios entre 10 y 30
    printf("%s\nLlenando: ", GREEN);
    for (i = 0; i < TAM; i++) {
        vec[i] = 10 + rand() % 21; // Genera numero aleatorio entre 10 y 30
        Sleep(100);                // Retardo de 100 ms
        Beep(500, 200);            // Sonido (frecuencia, tiempo)
        printf("%c ", 219);        // Imprime un cuadrado en pantalla
    }
    printf("%s\n\nListo!\n", RESET);

    // Imprimiendo el vector
    printf("El vector es:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");

    // Encontrar el numero mas chico en el vector
    menor = vec[0];
    for (i = 1; i < TAM; i++) {
        if (vec[i] < menor) {
            menor = vec[i];
        }
    }
    printf("El numero mas chico en el vector es: %d\n", menor);

    // Elevar al cuadrado y sacar la raiz cuadrada de cada numero del vector
    printf("\nElevando cada numero al cuadrado y obteniendo raiz cuadrada:\n");
    printf("%-10s %-10s %-10s\n", "vec", "cuadrado", "raiz2");
    for (i = 0; i < TAM; i++) {
        cua = pow(vec[i], 2); // Elevamos usando pow
        raiz = sqrt(vec[i]);  // Raiz cuadrada usando sqrt
        printf("%-10d %-10.2f %-10.2f\n", vec[i], cua, raiz);
    }

    // Buscar un numero en el vector
    do {
        printf("\n\nQue numero quieres buscar: ");
        scanf("%d", &n);

        band = 0; // Se inicializa bandera a 0
        for (i = 0; i < TAM; i++) {
            if (vec[i] == n) {
                band = 1; // Cambia el estado de la bandera
                break;    // Rompe el ciclo
            }
        }

        // Checamos con que valor quedo la bandera
        if (band == 1) {
            printf("El numero %d SI esta en el vector.\n", n);
        } else {
            printf("El numero %d NO esta en el vector.\n", n);
        }

        printf("Buscar otro numero en el vector s/n? ");
        fflush(stdin);   // Limpia el buffer
        resp = getchar(); // Captura la respuesta
    } while (resp == 's' || resp == 'S');

    printf("\n");
    system("pause");
    return 0;
}
