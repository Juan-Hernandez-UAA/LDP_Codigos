#include <stdio.h>
#include <iostream>
using namespace std;

// Definicion de colores para la salida
#define GREEN "\033[32m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

// Constantes para las dimensiones de la matriz
#define FILAS 10
#define COLUMNAS 10

// Declaracion de la matriz
int matriz[FILAS][COLUMNAS];

// Prototipos de funciones
void inicializar_matriz();
void mostrar_matriz();
void mostrar_encabezado();

int main()
{
    mostrar_encabezado();
    inicializar_matriz();
    mostrar_matriz();

    return 0;
}

// Funcion para mostrar el encabezado del programa
void mostrar_encabezado()
{
    system("CLS");

    cout << GREEN << BOLD
         << "Programa para inicializar una matriz diagonal con 0 y el resto con 1\n"
         << RESET;
    cout << GREEN << "Alumno: Juan Pablo Hernandez Ramirez\n" << RESET;
}

// Funcion para inicializar la matriz
void inicializar_matriz()
{
    for (int fila = 0; fila < FILAS; fila++)
    {
        for (int columna = 0; columna < COLUMNAS; columna++)
        {
            matriz[fila][columna] = (fila == columna) ? 0 : 1; // Asignacion basada en la diagonal
        }
    }
}

// Funcion para mostrar la matriz en la salida
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
