#include <iostream>
#include <string>
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
    cout << GREEN << BOLD << "Impresion de ciudades" << RESET << endl;
    cout << GREEN << "Juan Pablo Hernandez Ramirez" << RESET << "\n\n";
}

int main() {
    encabezado();

    string ciudades[REN] = {"Leon", "Aguascalientes", "Guadalajara", "Zacatecas", "Morelia"};
    int r;

    cout << CYAN << "Imprimiendo la matriz de caracteres..." << RESET << endl;

    // Imprimiendo la matriz
    for (r = 0; r < REN; r++) {
        cout << ciudades[r] << endl;
    }

    return 0;
}
