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
    cout << GREEN << BOLD << "Registro de ciudades" << RESET << endl;
    cout << GREEN << "Juan Pablo Hernandez Ramirez" << RESET << "\n\n";
}

int main() {
    encabezado();

    string ciudades[REN]; // Almacena 5 ciudades
    int r;

    for (r = 0; r < REN; r++) {
        cout << "Dame el nombre de una ciudad " << r+1 << ": " << RESET;
        getline(cin, ciudades[r]); // Usamos getline en lugar de gets para evitar problemas de seguridad
    }

    cout << CYAN << "\nImprimiendo la matriz de caracteres..." << RESET << endl;

    // Imprimiendo la matriz
    for (r = 0; r < REN; r++) {
        cout << ciudades[r] << endl;
    }

    return 0;
}
