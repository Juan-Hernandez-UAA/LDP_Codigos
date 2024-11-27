#include <stdio.h>
#include <iostream>
using namespace std;

// Definicion de constantes para las dimensiones de la matriz
#define FILAS 3
#define COLUMNAS 3

#define GREEN "\033[32m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

// Declaracion de la matriz global
int matriz[FILAS][COLUMNAS];

void mostrar_matriz();

int main()
{
    system("CLS");  
    cout << GREEN << BOLD
         << "Programa para inicializar una matriz de forma manual\n"
         << RESET << GREEN;
    cout << "Alumno: Juan Pablo Hernandez Ramirez\n"
         << RESET;

    // Llenado manual de la matriz
    matriz[0][0] = 45;
    matriz[0][1] = 12;
    matriz[0][2] = 96;

    matriz[1][0] = 23;
    matriz[1][1] = 45;
    matriz[1][2] = 75;

    matriz[2][0] = 16;
    matriz[2][1] = 49;
    matriz[2][2] = 19;

    mostrar_matriz();

    return 0;
}

// Funcion para mostrar la matriz
void mostrar_matriz()
{
    cout << "\nContenido de la matriz:\n";
    for (int fila = 0; fila < FILAS; fila++)
    {
        for (int columna = 0; columna < COLUMNAS; columna++)
        {
            cout << matriz[fila][columna] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
