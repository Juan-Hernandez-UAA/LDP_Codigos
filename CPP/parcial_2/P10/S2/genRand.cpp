/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Practice name      | Generar n numeros aleatorios |
| Suggested filename | generarAleatorios.cpp        |
| Filename           | genRand.cpp                  |
| Author             | Juan Pablo Hernandez Ramirez |
| Date               | 2024-10-30                   |
| Version            | 1.0.0                        |
+--------------------+------------------------------+
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int imprimirEncabezado() {
    system("CLS"); // Clear console screen
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;
    return 0;
}

// Función para obtener el número de valores a generar
int obtenerNumeroDeValores() {
    int n;
    while (true) {
        cout << "Ingrese la cantidad de numeros a generar: ";
        cin >> n;
        if (cin.fail() || n <= 0) {
            cout << "Por favor, ingrese un numero valido mayor a 0." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    return n;
}

// Función para generar un número aleatorio en el rango de 50 a 250
int generarNumeroAleatorio() {
    return 50 + rand() % (250 - 50 + 1);
}

// Función para procesar los números aleatorios generados y calcular la suma
void procesarNumeros(int cantidad) {
    int sumaMultiplosDe3 = 0;
    cout << "\n--- Numeros generados ---" << endl;
    for (int i = 0; i < cantidad; i++) {
        int numero = generarNumeroAleatorio();
        cout << "Numero " << i + 1 << ": " << numero << endl;

        // Verificar si el numero es multiplo de 3 y menor que 125
        if (numero % 3 == 0 && numero < 125) {
            sumaMultiplosDe3 += numero;
        }
    }
    cout << "\nSuma de numeros multiplos de 3 y menores que 125: " << sumaMultiplosDe3 << endl;
}

// Función para preguntar al usuario si desea repetir el proceso
bool deseaRepetir() {
    char respuesta;
    while (true) {
        cout << "\nDesea repetir el proceso? (s/n): ";
        cin >> respuesta;
        if (respuesta == 's' || respuesta == 'S') {
            return true;
        } else if (respuesta == 'n' || respuesta == 'N') {
            return false;
        } else {
            cout << "Por favor, ingrese 's' para si o 'n' para no." << endl;
        }
    }
}

int main() {
    imprimirEncabezado();

    srand(static_cast<unsigned int>(time(0))); // Inicializar la semilla para los números aleatorios

    cout << "Bienvenido al programa de generacion de numeros aleatorios" << endl;

    do {
        // Obtener el número de valores a generar
        int cantidad = obtenerNumeroDeValores();

        // Procesar los números generados
        procesarNumeros(cantidad);

    } while (deseaRepetir());

    cout << "\nGracias por usar el programa. Hasta luego!" << endl;
    return 0;
}
