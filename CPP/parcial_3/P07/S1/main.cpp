#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Definición de colores
#define BOLD    "\033[1m"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"

void imprimirEncabezado() {
    cout << BOLD << GREEN << "Alumno: Juan Pablo Hernandez Ramirez" << RESET << endl;
    cout << GREEN << "Calculo de numeros aleatorios en la ruleta" << RESET << "\n\n";
}

int main() {
    char repetir;

    do {
        imprimirEncabezado();
        srand(time(0));  // Inicializar la semilla para números aleatorios
        int n = rand() % 61 + 60;  // Generar n entre 60 y 120
        int numero;

        // Variables para almacenar los resultados
        int totalImpares = 0;
        int sumaPares = 0;
        int totalPares = 0;
        int cantidadDocena = 0;
        int maxNumero = 0;
        int totalCeros = 0;

        cout << CYAN << "Valor de n: " << n << RESET << endl;
        cout << YELLOW << "Numeros generados: " << RESET;

        for (int i = 0; i < n; ++i) {
            numero = rand() % 37;  // Generar número entre 0 y 36
            cout << numero << ", ";

            // Verificar si es cero
            if (numero == 0) {
                totalCeros++;
            }
            // Verificar si es par (excluyendo el cero)
            else if (numero % 2 == 0) {
                sumaPares += numero;
                totalPares++;
            }
            // Verificar si es impar
            else {
                totalImpares++;
            }

            // Verificar si está en la 2da docena (13 a 24)
            if (numero >= 13 && numero <= 24) {
                cantidadDocena++;
            }

            // Actualizar el número máximo
            if (numero > maxNumero) {
                maxNumero = numero;
            }
        }

        cout << endl;

        // Calcular promedio de los pares, excluyendo el cero
        float promedioPares = (totalPares > 0) ? static_cast<float>(sumaPares) / totalPares : 0;

        // Calcular porcentajes
        float porcentajePares = (totalPares > 0) ? (static_cast<float>(totalPares) / n) * 100 : 0;
        float porcentajeImpares = (totalImpares > 0) ? (static_cast<float>(totalImpares) / n) * 100 : 0;

        // Imprimir resultados

        cout << GREEN << "\nResumen general" << endl;
        cout << "----------------------------------------------" << RESET << endl;
        cout << "a. Total de numeros impares: " << totalImpares << endl;
        cout << "b. Promedio de numeros pares (excluyendo ceros): " << promedioPares << endl;
        cout << "c. Cantidad de numeros en la 2da docena (13 a 24): " << cantidadDocena << endl;
        cout << "d. Numero mas grande generado: " << maxNumero << endl;
        cout << "e. Porcentaje de numeros pares: " << porcentajePares << "%" << endl;
        cout << "f. Porcentaje de numeros impares: " << porcentajeImpares << "%" << endl;
        cout << "g. Total de veces que salio el cero: " << totalCeros << endl;

        cout << CYAN << "\nDeseas repetir el programa? (s/n): " << RESET;
        cin >> repetir;

    } while (repetir == 's' || repetir == 'S');

    cout << YELLOW << "\nPrograma terminado." << RESET << endl;

    return 0;
}
