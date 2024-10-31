/*
 * --- Metadata ---
 *
 * Practice name:       lorem
 * Suggested filename:  main.cpp
 * Filename:            main.cpp
 * Author:              Juan Pablo Hernandez Ramirez
 * Date:                2024-10-31
 * Version:             1.0.0
 * Description:         lorem
 */

#include <iostream>
#include <cmath>
#include <limits> // para limpiar el buffer con numeric_limits

using namespace std;

// --- Main execution ---
int main() {
    // system("CLS"); // Descomenta solo si estas en Windows

    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    float peso, estatura, imc;
    char resp;

    do {
        // Entrada de datos
        cout << "Ingresa tu peso en kilos: ";
        cin >> peso;

        cout << "Ingresa tu estatura en metros: ";
        cin >> estatura;

        // Verificar que la estatura no sea cero para evitar division por cero
        if (estatura == 0) {
            cout << "La estatura no puede ser cero. Intenta de nuevo.\n";
            continue;
        }

        // Calculo del IMC
        imc = peso / pow(estatura, 2);

        // Resultado del IMC
        cout << "\nTu indice de masa corporal es: " << imc << endl;

        // Tabla informativa
        cout << "\nTabla Informativa:\n";
        cout << "IMC menor a 18: Peso Bajo\n";
        cout << "IMC de 18 a 24.9: Peso Normal\n";
        cout << "IMC de 25 a 26.9: Sobrepeso\n";
        cout << "IMC de 27 a 29.9: Obesidad grado I\n";
        cout << "IMC de 30 a 39.9: Obesidad grado II\n";
        cout << "IMC mayor a 40: Obesidad grado III\n";

        // Preguntar si desea repetir el calculo
        cout << "\nQuieres repetir el calculo? (s/n): ";
        cin >> resp;

        // Limpiar el buffer en caso de caracteres no deseados
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (resp == 's' || resp == 'S');

    return 0;
}
