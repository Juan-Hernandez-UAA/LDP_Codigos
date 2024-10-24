#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int funcionSeleccionada;
    double argumento, resultado;

    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    cout << "Dame el número de la funcion (1, 2 o 3): ";
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

    cout << "El resultado es: " << resultado << endl;
    return 0;
}