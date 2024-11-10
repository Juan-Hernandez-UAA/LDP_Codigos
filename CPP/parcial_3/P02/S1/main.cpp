#include <iostream>
#include <string>
using namespace std;

const float PRECIOS[] = {700.0, 1000.0, 1200.0};
const float DESCUENTOS[] = {0.05, 0.0, 0.10};
const float DESCUENTO_MEMBRESIA = 200.0;
const float COBRO_EXTRA = 100.0;

// Definir colores
const string WHITE = "\033[37m";
const string CYAN = "\033[36m";
const string GREEN = "\033[32m";
const string RESET = "\033[0m";
const string BOLD = "\033[1m";

void imprimirEncabezado();
void calcularTotal();

int main() {
    imprimirEncabezado();
    calcularTotal();
    return 0;
}

void imprimirEncabezado() {
    system("CLS");
    cout << CYAN << "Hotel Holiday in" << RESET << endl;
    cout << CYAN << "Alumno: Juan Pablo Hernandez Ramirez" << RESET << endl;
}

void calcularTotal() {
    string nombre;
    int tipo, dias, membresia, personas;
    float total = 0.0;

    cout << "Nombre del huesped: ";
    getline(cin, nombre);

    cout << "Tipo de habitacion (1, 2 o 3): ";
    cin >> tipo;

    if (tipo < 1 || tipo > 3) {
        cout << "Error: numero de habitacion invalido.\n";
        return;
    }

    cout << "Dias de hospedaje: ";
    cin >> dias;
    cout << "Numero de membresia: ";
    cin >> membresia;
    cout << "Total de personas en habitacion: ";
    cin >> personas;

    total = PRECIOS[tipo - 1] * dias;
    if (dias > 5) total -= total * DESCUENTOS[tipo - 1];
    if (membresia >= 100 && membresia <= 200) total -= DESCUENTO_MEMBRESIA;
    if (personas > 2) total += (personas - 2) * COBRO_EXTRA;

    cout << "\n--- " << GREEN << "Recibo del Huesped" << RESET << " ---\n";
    cout << WHITE << "Nombre: " << RESET << nombre << endl;
    cout << WHITE << "Tipo de habitacion: " << RESET << tipo << endl;
    cout << WHITE << "Dias: " << RESET << dias << endl;
    cout << WHITE << "Membresia: " << RESET << membresia << endl;
    cout << GREEN << BOLD << "Total a pagar: $" << total << RESET << endl;
}
