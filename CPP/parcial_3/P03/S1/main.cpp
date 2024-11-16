#include <iostream>
#include <string>
#include <algorithm> // Para std::max
#include <limits>    // Para std::numeric_limits
using namespace std;

// Definicion de colores
const string RESET = "\033[0m";
const string BOLD = "\033[1m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE = "\033[34m";
const string CYAN = "\033[36m";

// Constantes de precios
const int PRECIO_CONTINENTAL = 110;
const int PRECIO_MEDITERRANEO = 150;

// Prototipos de funciones
void imprimirEncabezado();
void capturarNotas(int &totalContinentales, int &totalMediterraneos);
void mostrarResumen(int totalContinentales, int totalMediterraneos);
bool esNumeroPositivo(int &numero);

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

        // Validar cantidad de platillos continentales
        do {
            cout << "Cantidad de platillos continentales: ";
            if (!(cin >> cantContinentales) || cantContinentales <= 0) {
                cout << RED << "Por favor ingrese un numero positivo para los platillos continentales." << RESET << endl;
                cin.clear(); // Limpiar el error de cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorar el resto de la entrada
            }
        } while (cantContinentales <= 0);

        // Validar cantidad de platillos mediterraneos
        do {
            cout << "Cantidad de platillos mediterraneos: ";
            if (!(cin >> cantMediterraneos) || cantMediterraneos <= 0) {
                cout << RED << "Por favor ingrese un numero positivo para los platillos mediterraneos." << RESET << endl;
                cin.clear(); // Limpiar el error de cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorar el resto de la entrada
            }
        } while (cantMediterraneos <= 0);

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

    // Calcular el maximo espacio para alinear las columnas de manera dinamica
    string strContinentales = to_string(totalContinentales);
    string strMediterraneos = to_string(totalMediterraneos);
    string strIngresosContinentales = to_string(ingresosContinentales);
    string strIngresosMediterraneos = to_string(ingresosMediterraneos);
    string strTotalIngresos = to_string(totalIngresos);

    // Longitud de las cadenas mas largas
    int maxPlatilloLength = max({16, (int)strContinentales.length(), (int)strMediterraneos.length()});
    int maxIngresosLength = max({10, (int)strIngresosContinentales.length(), (int)strIngresosMediterraneos.length()});

    // Imprimir encabezado con espacio calculado dinamicamente
    cout << BOLD << "\nResumen final:" << RESET << endl;
    cout << "-------------------------------------" << endl;
    cout << "Platillo" << string(maxPlatilloLength - 8, ' ')
         << "Cantidad" << string(maxIngresosLength - 8, ' ')
         << "Subtotal" << endl;
    cout << "-------------------------------------" << endl;

    // Imprimir datos
    cout << "Continental" << string(maxPlatilloLength - 11, ' ') << totalContinentales
         << string(maxIngresosLength - strContinentales.length(), ' ')
         << "$" << ingresosContinentales << endl;

    cout << "Mediterraneo" << string(maxPlatilloLength - 12, ' ') << totalMediterraneos
         << string(maxIngresosLength - strMediterraneos.length(), ' ')
         << "$" << ingresosMediterraneos << endl;

    cout << "-------------------------------------" << endl;

    cout << BOLD << "Total: " << RESET
         << string(maxPlatilloLength + maxIngresosLength - 7, ' ') << "$" << totalIngresos << endl;

    cout << BOLD << "Platillo mas consumido:   ";
    if (totalContinentales > totalMediterraneos) {
        cout << GREEN << "Continental" << RESET << endl;
    } else if (totalMediterraneos > totalContinentales) {
        cout << GREEN << "Mediterraneo" << RESET << endl;
    } else {
        cout << YELLOW << "Ambos por igual" << RESET << endl;
    }
}
