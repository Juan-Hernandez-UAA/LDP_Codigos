#include <iostream>
#include <cstring>  // Para strcpy
using namespace std;

// Constantes para los códigos de color y formato
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

// Definición del tamaño de la matriz
#define REN 5

void encabezado() {
    system("CLS");
    cout << GREEN << BOLD << "Copiando las ciudades" << RESET << endl;
    cout << GREEN << "Juan Pablo Hernandez Ramirez" << RESET << "\n\n";
}

int main() {
    encabezado();

    char ciudades[REN][30]; // Almacena 5 ciudades con 30 caracteres máximo cada una
    int r;

    // Usando strcpy para copiar las cadenas a la matriz de caracteres
    strcpy(ciudades[0], "Leon");
    strcpy(ciudades[1], "Aguascalientes");
    strcpy(ciudades[2], "Guadalajara");
    strcpy(ciudades[3], "Zacatecas");
    strcpy(ciudades[4], "Morelia");

    cout << CYAN << "Imprimiendo la matriz de caracteres..." << RESET << endl;

    // Imprimiendo la matriz
    for (r = 0; r < REN; r++) {
        cout << ciudades[r] << endl;
    }

    return 0;
}
