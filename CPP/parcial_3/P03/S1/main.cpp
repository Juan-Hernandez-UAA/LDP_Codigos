#include <iostream>
#include <iomanip> // Para setw()
#include <string>
using namespace std;

// Definicion de colores
const string RESET = "\033[0m";
const string BOLD = "\033[1m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE = "\033[34m";
const string CYAN = "\033[36m";

const int PRECIO_CONTINENTAL = 110;
const int PRECIO_MEDITERRANEO = 150;

// Prototipos de funciones
void imprimirEncabezado();
void capturarNotas(int &totalContinentales, int &totalMediterraneos);
void mostrarResumen(int totalContinentales, int totalMediterraneos);

int main() {
    imprimirEncabezado();

    int totalContinentales = 0;
    int totalMediterraneos = 0;

    capturarNotas(totalContinentales, totalMediterraneos);
    mostrarResumen(totalContinentales, totalMediterraneos);

    return 0;
}

void imprimirEncabezado() {
    system("CLS");
    cout << BOLD << GREEN << "Alumno: Juan Pablo Hernandez Ramirez" << RESET << endl;
    cout << GREEN << "Problema de cafeteria" << RESET << endl;
}

void capturarNotas(int &totalContinentales, int &totalMediterraneos) {
    int cantContinentales, cantMediterraneos;
    char continuar;

    do {
        cout << YELLOW << "\nCapturando nota de consumo:\n" << RESET;
        cout << "Platillos de estilo continental vendidos: ";
        cin >> cantContinentales;
        cout << "Platillos de estilo mediterraneo vendidos: ";
        cin >> cantMediterraneos;

        // Sumar a los totales generales
        totalContinentales += cantContinentales;
        totalMediterraneos += cantMediterraneos;

        cout << "Deseas capturar otra nota? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
}

void mostrarResumen(int totalContinentales, int totalMediterraneos) {
    int ingresosContinentales = totalContinentales * PRECIO_CONTINENTAL;
    int ingresosMediterraneos = totalMediterraneos * PRECIO_MEDITERRANEO;
    int totalIngresos = ingresosContinentales + ingresosMediterraneos;

    // Alineando dinámicamente los encabezados y los datos
    int maxLength = max(to_string(totalContinentales).length(), to_string(totalMediterraneos).length());
    int ingresoLength = max(to_string(ingresosContinentales).length(), to_string(ingresosMediterraneos).length());

    cout << "Resumen final:" << endl;
    cout << "-------------------------------------------------" << endl;

    // Encabezado con alineación
    cout << left << setw(25) << "Platillos Continentales"
         << setw(maxLength + 5) << "Total Unidades"
         << setw(ingresoLength + 5) << "Subtotal" << endl;

    cout << left << setw(25) << "Platillos Mediterraneos"
         << setw(maxLength + 5) << "Total Unidades"
         << setw(ingresoLength + 5) << "Subtotal" << endl;

    cout << "-------------------------------------------------" << endl;

    // Resultados con alineación dinámica
    cout << left << setw(25) << "Total Continentales: "
         << setw(maxLength + 5) << totalContinentales
         << "$" << setw(ingresoLength + 5) << ingresosContinentales << endl;

    cout << left << setw(25) << "Total Mediterraneos: "
         << setw(maxLength + 5) << totalMediterraneos
         << "$" << setw(ingresoLength + 5) << ingresosMediterraneos << endl;

    cout << "\n-------------------------------------------------" << endl;

    // Total de ingresos
    cout << left << setw(25) << "Total de ingresos: "
         << setw(ingresoLength + 5) << "$" << totalIngresos << endl;

    // Platillo más consumido
    cout << "Platillo mas consumido: ";
    if (totalContinentales > totalMediterraneos) {
        cout << "Continental" << endl;
    } else if (totalMediterraneos > totalContinentales) {
        cout << "Mediterraneo" << endl;
    } else {
        cout << "Ambos por igual" << endl;
    }
}