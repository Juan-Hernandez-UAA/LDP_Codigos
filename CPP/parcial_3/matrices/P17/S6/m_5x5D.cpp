#include <iostream>
#include <iomanip> // Para usar setw
using namespace std;

// Constantes para los códigos de color y formato
#define GREEN "\033[32m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

// Constante para el tamaño de la matriz cuadrada
#define TAMANO 5

// Declaración global de la matriz
int matriz[TAMANO][TAMANO];

// Prototipos de funciones
void llenar_matriz();
void imprimir_matriz();
void imprimir_sumatoria_diagonal();

int main()
{
    system("cls");
    cout << GREEN << BOLD
         << "Programa para trabajar con una matriz cuadrada de 5x5\n"
         << RESET << GREEN;
    cout << "Alumno: Juan Pablo Hernandez Ramirez\n"
         << RESET;

    // Llamadas a las funciones
    llenar_matriz();
    imprimir_matriz();
    imprimir_sumatoria_diagonal();

    return 0;
}

// Funcion para llenar la matriz con numeros consecutivos del 1 al 25
void llenar_matriz()
{
    int valor = 1; // Valor inicial para llenar la matriz
    for (int fila = 0; fila < TAMANO; fila++)
    {
        for (int columna = 0; columna < TAMANO; columna++)
        {
            matriz[fila][columna] = valor;
            valor++;
        }
    }
}

// Funcion para imprimir la matriz con formato ajustado
void imprimir_matriz()
{
    cout << "\nContenido de la matriz:\n";
    for (int fila = 0; fila < TAMANO; fila++)
    {
        for (int columna = 0; columna < TAMANO; columna++)
        {
            cout << setw(2) << matriz[fila][columna] << " "; // Dos espacios adicionales
        }
        cout << "\n";
    }
    cout << "\n";
}

// Funcion para calcular e imprimir la sumatoria de la diagonal principal
void imprimir_sumatoria_diagonal()
{
    int suma = 0;
    for (int i = 0; i < TAMANO; i++)
    {
        suma += matriz[i][i]; // Sumar los elementos de la diagonal principal
    }
    cout << "La sumatoria de la diagonal principal es: " << suma << "\n\n";
}
