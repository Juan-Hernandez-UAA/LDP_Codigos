/*
+----------------------------------------------------+
| Metadata                                           |
+--------------------+-------------------------------+
| Practice name      | Populacion y sumas            |
|                    | bidimensionales de una matriz |
| Suggested filename | sumaBidimensional.cpp         |
| Filename           | sumaBidimensional.cpp         |
| Author             | Juan Pablo Hernandez Ramirez  |
| Date               | 2024-10-31                    |
| Version            | 1.0.0                         |
| Description        | Programa para sumar tanto     |
|                    | las filas como las columnas   |
|                    | de una matriz mostrando los   |
|                    | resultados a un lado de cada  |
|                    | fila o columna.               |
+--------------------+-------------------------------+
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

#define GREEN "\033[32m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

using namespace std;

// Prototipos de las funciones
void popularMatriz(int** matriz, int filas, int columnas);
void imprimirMatrizConSumas(int** matriz, int filas, int columnas);
void encabezado();
string centrarNumero(int numero, int ancho);

int main() {
    encabezado();

    int filas, columnas;

    // Solicitar al usuario el número de filas y columnas
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    // Validar que filas y columnas sean mayores a 0
    if (filas <= 0 || columnas <= 0) {
        cout << "El numero de filas y columnas debe ser mayor a 0." << endl;
        return 1;
    }
\
    // Semilla para los números aleatorios
    srand(static_cast<unsigned>(time(0)));

    // Crear matriz dinámicamente
    int** matriz = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }

    // Popular la matriz y mostrar con formato
    popularMatriz(matriz, filas, columnas);
    cout << BOLD << "\nMatriz generada:" << RESET << endl;
    imprimirMatrizConSumas(matriz, filas, columnas);

    // Liberar la memoria dinámica
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    cout << endl;

    return 0;
}

void encabezado() {
    system("CLS");
    cout << GREEN << BOLD << "Suma de renglones y columnas en una matriz" << RESET << endl;
    cout << GREEN << "Alumno: Juan Pablo Hernandez Ramirez" << RESET << "\n\n";
}

// Función para popular una matriz con números aleatorios
void popularMatriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 10; // Números entre 0 y 9
        }
    }
}

// Función para centrar un número dentro de una celda de ancho fijo
string centrarNumero(int numero, int ancho) {
    string numeroStr = to_string(numero);
    int espaciosTotales = ancho - numeroStr.size();
    int espaciosIzquierda = espaciosTotales / 2;
    int espaciosDerecha = espaciosTotales - espaciosIzquierda;
    return string(espaciosIzquierda, ' ') + numeroStr + string(espaciosDerecha, ' ');
}

// Función para imprimir la matriz con las sumas de renglones y columnas
void imprimirMatrizConSumas(int** matriz, int filas, int columnas) {
    const int ANCHO_CELDA = 5; // Ancho fijo para cada celda
    int* sumaColumnas = new int[columnas](); // Inicializar el arreglo para las sumas de las columnas

    // Dibujar el divisor superior
    cout << "+";
    for (int j = 0; j < columnas; j++) {
        cout << string(ANCHO_CELDA, '-') << "+";
    }
    cout << endl;

    // Mostrar las filas con las sumas de los renglones
    for (int i = 0; i < filas; i++) {
        int sumaRenglon = 0; // Acumulador para la suma del renglón

        cout << "|"; // Límite izquierdo de la fila
        for (int j = 0; j < columnas; j++) {
            string celdaCentrada = centrarNumero(matriz[i][j], ANCHO_CELDA);
            cout << celdaCentrada << "|"; // Mostrar el número centrado
            sumaRenglon += matriz[i][j]; // Sumar al total del renglón
            sumaColumnas[j] += matriz[i][j]; // Sumar al total de la columna
        }
        // Imprimir la suma del renglón sin relleno extra
        cout << " " << sumaRenglon << endl;

        // Dibujar la línea de separación
        cout << "+";
        for (int j = 0; j < columnas; j++) {
            cout << string(ANCHO_CELDA, '-') << "+";
        }
        cout << endl;
    }

    // Mostrar las sumas de las columnas al final
    cout << " ";
    for (int j = 0; j < columnas; j++) {
        string celdaCentrada = centrarNumero(sumaColumnas[j], ANCHO_CELDA);
        cout << celdaCentrada << " ";
    }
    cout << endl;

    // Liberar la memoria de sumaColumnas
    delete[] sumaColumnas;
}