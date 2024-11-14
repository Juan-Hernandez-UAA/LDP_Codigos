/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Practice name      | lorem                        |
| Suggested filename | main.cpp                     |
| Filename           | main.cpp                     |
| Author             | Juan Pablo Hernandez Ramirez |
| Date               | 2024-10-31                   |
| Version            | 1.0.0                        |
| Description        | lorem                        |
+--------------------+------------------------------+
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

#define TAM 31
#define BOLD "\033[1m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
using namespace std;

void imprimirEncabezado();
void llenarTemperaturas(float temperaturas[]);
void imprimirTemperaturas(const float temperaturas[]);
float calcularPromedio(const float temperaturas[]);
int diasPorEncimaPromedio(const float temperaturas[], float promedio);
void diasPorDebajoPromedio(const float temperaturas[], float promedio);
float temperaturaMaxima(const float temperaturas[]);
void diasConTemperaturaMaxima(const float temperaturas[], float maxima);

int main() {
    imprimirEncabezado();

    float temperaturas[TAM];
    srand(static_cast<unsigned>(time(0))); // Inicializar generador de números aleatorios

    llenarTemperaturas(temperaturas);
    imprimirTemperaturas(temperaturas);

    float promedio = calcularPromedio(temperaturas);
    cout << BOLD << "\nTemperatura promedio: " << promedio << RESET << endl;

    int diasEncimaPromedio = diasPorEncimaPromedio(temperaturas, promedio);
    cout << diasEncimaPromedio << " dias estuvieron por encima de la temperatura promedio.\n" << RESET;

    diasPorDebajoPromedio(temperaturas, promedio);

    float maxima = temperaturaMaxima(temperaturas);
    cout << "\nLa temperatura más alta registrada fue: " << maxima << " grados centigrados\n";

    diasConTemperaturaMaxima(temperaturas, maxima);

    return 0;
}

void imprimirEncabezado(){
    system("CLS"); // Clear console screen
    cout << BOLD << GREEN << "Nombre de la practica" << RESET << endl;
    cout << GREEN << "Alumno: Juan Pablo Hernandez Ramirez" << RESET << endl;
}

void llenarTemperaturas(float temperaturas[]) {
    for (int i = 0; i < TAM; ++i) {
        temperaturas[i] = 13 + static_cast<float>(rand()) / (RAND_MAX / (31 - 13));
    }
}

void imprimirTemperaturas(const float temperaturas[]) {
    cout << BOLD << "\nAguascalientes, Octubre 2023" << RESET << endl;
    cout << "Registro de temperatura:\n\n";
    for (int i = 0; i < TAM; ++i) {
        string espacioDinamico = (i > 8) ? " " : "  ";
        cout << "Dia " << i + 1 << espacioDinamico << GREEN << "-> " << RESET << temperaturas[i] << " grados centigrados\n";
    }
}

float calcularPromedio(const float temperaturas[]) {
    float suma = 0;
    for (int i = 0; i < TAM; ++i) {
        suma += temperaturas[i];
    }
    return suma / TAM;
}

int diasPorEncimaPromedio(const float temperaturas[], float promedio) {
    int count = 0;
    for (int i = 0; i < TAM; ++i) {
        if (temperaturas[i] > promedio) {
            ++count;
        }
    }
    return count;
}

void diasPorDebajoPromedio(const float temperaturas[], float promedio) {
    cout << BOLD << "\nDias que estuvieron por debajo de la temperatura promedio" << RESET << endl;
    cout << "(" << promedio << " grados)\n\n";
    for (int i = 0; i < TAM; ++i) {
        if (temperaturas[i] < promedio) {
            string espacioDinamico = (i > 8) ? " " : "  ";
            cout << "Dia " << i + 1 << espacioDinamico << "con " << temperaturas[i] << " grados centigrados\n";
        }
    }
}

float temperaturaMaxima(const float temperaturas[]) {
    float max = temperaturas[0];
    for (int i = 1; i < TAM; ++i) {
        if (temperaturas[i] > max) {
            max = temperaturas[i];
        }
    }
    return max;
}

void diasConTemperaturaMaxima(const float temperaturas[], float maxima) {
    cout << "\nLos dias que tuvieron la temperatura más alta fueron: ";
    bool primero = true;
    for (int i = 0; i < TAM; ++i) {
        if (temperaturas[i] == maxima) {
            if (!primero) {
                cout << ", ";
            }
            cout << "dia " << i + 1;
            primero = false;
        }
    }
    cout << endl;
}
