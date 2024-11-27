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
using namespace std;

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define TAM 20 // Tamaño del vector

void imprimirEncabezado();
void llenarVector(int vector[], int tam);
void imprimirVector(int vector[], int tam);
int contarOcurrencias(int vector[], int tam, int numero);

int main() {
    imprimirEncabezado();

    srand(time(0)); // Inicializar la semilla para números aleatorios
    int vector[TAM];

    // Llenar e imprimir el vector
    llenarVector(vector, TAM);
    imprimirVector(vector, TAM);

    // Búsqueda de números en el vector
    int numero, ocurrencias;
    char continuar;

    do {
        cout << "Ingresa un numero para buscar en el vector: ";
        cin >> numero;

        ocurrencias = contarOcurrencias(vector, TAM, numero);

        // Mensaje dinamico
        if (ocurrencias == 0) {
            cout << "El numero " << numero << YELLOW << " no aparece " RESET << "en el vector" << "\n\n";
        } else {
            string articulo = (ocurrencias == 1) ? ("una vez") : (to_string(ocurrencias) + ' ' + "veces");
            cout << "El numero " << numero << " aparece " << YELLOW << articulo << RESET << " en el vector" << RESET << "\n\n";
        }

        cout << "Deseas buscar otro numero? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return 0;
}

void imprimirEncabezado() {
    system("CLS");
    cout << BOLD << GREEN << "Busqueda de ocurrencias en vector" << RESET << endl;
    cout << GREEN << "Alumno: Juan Pablo Hernandez Ramirez" << RESET << "\n\n";
}

void llenarVector(int vector[], int tam) {
    for (int i = 0; i < tam; i++) {
        vector[i] = 10 + rand() % 21; // Generar números entre 10 y 30
    }
}

void imprimirVector(int vector[], int tam) {
    cout << "Vector generado: \n[";
    for (int i = 0; i < tam; i++) {
        string separador = (i == tam-1) ? "]\n" : ", ";
        cout << vector[i] << separador;
    }
    cout << endl;
}

int contarOcurrencias(int vector[], int tam, int numero) {
    int contador = 0;
    for (int i = 0; i < tam; i++) {
        if (vector[i] == numero) {
            contador++;
        }
    }
    return contador;
}
