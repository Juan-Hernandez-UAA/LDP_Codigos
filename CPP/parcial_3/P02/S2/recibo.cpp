#include <iostream>
#include <string>
using namespace std;

const float TARIFA_BASE = 350.0;
const float TARIFA_ADICIONAL_1 = 4.0;  // Para los siguientes 170 KVH
const float TARIFA_ADICIONAL_2 = 6.0;  // Para los que exceden 310 KVH

// Definir colores
const string WHITE = "\033[37m";
const string CYAN = "\033[36m";
const string GREEN = "\033[32m";
const string RESET = "\033[0m";
const string BOLD = "\033[1m";

void imprimirEncabezado();
void calcularCobro();

int main() {
    imprimirEncabezado();
    calcularCobro();
    return 0;
}

void imprimirEncabezado() {
    system("CLS");
    cout << CYAN << "Juan Pablo Hernandez Ramirez" << RESET << endl;
    cout << CYAN << "Comision Federal de Electricidad" << RESET << endl;
}

void calcularCobro() {
    string nombre, direccion;
    int consumoInicial, consumoFinal;
    float total = 0.0;

    cout << "Nombre del cliente: ";
    getline(cin, nombre);

    cout << "Direccion del cliente: ";
    getline(cin, direccion);

    cout << "Registro inicial de consumo (KVH): ";
    cin >> consumoInicial;

    cout << "Registro final de consumo (KVH): ";
    cin >> consumoFinal;

    if (consumoFinal <= consumoInicial) {
        cout << "Error: el registro final debe ser mayor al registro inicial.\n";
        return;
    }

    int consumo = consumoFinal - consumoInicial;

    if (consumo <= 140) {
        total = TARIFA_BASE;
    } else if (consumo <= 310) {
        total = TARIFA_BASE + (consumo - 140) * TARIFA_ADICIONAL_1;
    } else {
        total = TARIFA_BASE + (170 * TARIFA_ADICIONAL_1) + (consumo - 310) * TARIFA_ADICIONAL_2;
    }

    cout << "\n--- " << GREEN << "Recibo de Cobro" << RESET << " ---\n";
    cout << WHITE << "Nombre: " << RESET << nombre << endl;
    cout << WHITE << "Direccion: " << RESET << direccion << endl;
    cout << WHITE << "Consumo (KVH): " << RESET << consumo << endl;
    cout << GREEN << BOLD << "Total a pagar: $" << total << RESET << endl;
}
