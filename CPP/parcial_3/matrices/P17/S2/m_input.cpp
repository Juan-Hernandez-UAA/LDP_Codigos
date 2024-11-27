#include <stdio.h>
#include <iostream>
using namespace std;

// Definicion de constantes para las dimensiones de la matriz
#define FILAS 3
#define COLUMNAS 2

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
         << "Programa para llenar una matriz con datos proporcionados por el usuario\n"
         << RESET << GREEN;
    cout << "Alumno: Juan Pablo Hernandez Ramirez\n"
         << RESET;

    int matriz[FILAS][COLUMNAS];

    llenar_matriz(matriz);
    mostrar_matriz(matriz);

    return 0;
}

// Funcion para llenar la matriz con datos ingresados por el usuario
void llenar_matriz(int matriz[FILAS][COLUMNAS])
{
    for (int fila = 0; fila < FILAS; fila++)
    {
        for (int columna = 0; columna < COLUMNAS; columna++)
        {
            cout << "Ingresa el valor para la posicion [" << fila << "][" << columna << "]: ";
            cin >> matriz[fila][columna];
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
