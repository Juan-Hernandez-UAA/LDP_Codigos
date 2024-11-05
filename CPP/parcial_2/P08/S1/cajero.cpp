/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Practice name      | Calculo de retiro            |
| Suggested filename | calculoDeRetiro.cpp          |
| filename           | cajero.cpp                   |
| Author             | Juan Pablo Hernandez Ramirez |
| Date               | 2024-10-31                   |
| Version            | 1.1.3                        |
| Description        | Calcula el desglose en       |
|                    | billetes de una cantidad.    |
+--------------------+------------------------------+
*/

#include <iostream>
using namespace std;

void mostrarDesglose(int cantidad);
bool esCantidadValida(int cantidad);

int main() {
    cout << "Alumno: Juan Pablo Hernandez Ramirez\n";
    int cantidad;

    cout << "Dame la cantidad a retirar: ";
    cin >> cantidad;

    if (esCantidadValida(cantidad)) {
        mostrarDesglose(cantidad);
    } else {
        cout << "Error: La cantidad debe estar entre 50 y 4000 y ser multiplo de 50.\n";
    }

    return 0;
}

bool esCantidadValida(int cantidad) {
    return (cantidad >= 50 && cantidad <= 4000 && cantidad % 50 == 0);
}

void mostrarDesglose(int cantidad) {
    const int valores[] = {500, 200, 100, 50};
    int billetes[4] = {};

    for (int i = 0; i < 4; ++i) {
        billetes[i] = cantidad / valores[i];
        cantidad %= valores[i];
    }

    cout << "Desglose de billetes:\n";
    cout << "Billetes de 500: " << billetes[0] << endl;
    cout << "Billetes de 200: " << billetes[1] << endl;
    cout << "Billetes de 100: " << billetes[2] << endl;
    cout << "Billetes de 50: "  << billetes[3] << endl;
}
