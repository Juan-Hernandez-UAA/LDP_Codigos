#include <stdio.h>
#include <iostream>
using namespace std;

// Definicion de constantes para las dimensiones de la matriz
#define FILAS 5
#define COLUMNAS 6

#define GREEN "\033[32m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

// Prototipo de funciones
void llenar_matriz(int matriz[FILAS][COLUMNAS]);
void mostrar_matriz(const int matriz[FILAS][COLUMNAS]);

int main()
{
    system("CLS");
    cout << GREEN << BOLD
         << "Programa para llenar una matriz con numeros aleatorios\n"
         << RESET << GREEN;
    cout << "Alumno: Juan Pablo Hernandez Ramirez\n"
         << RESET;

    int matriz[FILAS][COLUMNAS];

    llenar_matriz(matriz);
    mostrar_matriz(matriz);

    return 0;
}

// Funcion para llenar la matriz con numeros aleatorios
void llenar_matriz(int matriz[FILAS][COLUMNAS])
{
    for (int fila = 0; fila < FILAS; fila++)
    {
        for (int columna = 0; columna < COLUMNAS; columna++)
        {
            matriz[fila][columna] = 10 + rand() % (90 - 10 + 1);
        }
    }
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
