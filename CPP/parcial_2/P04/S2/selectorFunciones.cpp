#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int funcionSeleccionada;
    double argumento, resultado;

    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    cout << "Dame el numero de la funcion (1, 2 o 3): ";
    cin >> funcionSeleccionada;

    cout << "Dame el argumento de la funcion: ";
    cin >> argumento;

    // Se asigna la funcion seleccionada a resultado
    resultado = (
        (funcionSeleccionada == 1) ? 100 * argumento :
        (funcionSeleccionada == 2) ? pow(100, argumento) :
        (funcionSeleccionada == 3) ? 100 / argumento
        :
        0
    );

    if (funcionSeleccionada >= 1 && funcionSeleccionada <= 3) {
        cout << "El resultado es: " << resultado << endl;
    } else {
        cout << "La funcion " << funcionSeleccionada << " no es una funcion";
    }

    return 0;
}