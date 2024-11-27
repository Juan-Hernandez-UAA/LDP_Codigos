#include <stdio.h>
#include <iostream>
using namespace std;

// Definicion de constantes para las dimensiones de la matriz
#define FILAS 4
#define COLUMNAS 3

#define GREEN "\033[32m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

// Prototipo de funciones
void mostrar_matriz(const int matriz[FILAS][COLUMNAS]);

int main()
{
    system("CLS");
    cout << GREEN << BOLD
         << "Programa para inicializar una matriz en su declaracion\n"
         << RESET << GREEN;
    cout << "Alumno: Juan Pablo Hernandez Ramirez\n"
         << RESET;

    int matriz[FILAS][COLUMNAS] = {{34, 59, 75},
                                   {12, 98, 34},
                                   {34, 78, 12},
                                   {34, 23, 67}};

    mostrar_matriz(matriz);

    return 0;
}

// Funcion para mostrar la matriz
void mostrar_matriz(const int matriz[FILAS][COLUMNAS])
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
