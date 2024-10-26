#include <iostream>
#include <cmath>

using namespace std;

bool esNumeroArmstrong(int numero) {
    int suma = 0;
    int n = numero;  // Almacenar el numero original para comparación

    while (n > 0) {
        int digito = n % 10;
        suma += digito * digito * digito; // Optimización
        n /= 10;
    }

    return suma == numero;
}

int main() {
    const int RANGO_INFERIOR = 100;
    const int RANGO_SUPERIOR = 999;

    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;
    cout << "Numeros de Armstrong entre " << RANGO_INFERIOR << " y " << RANGO_SUPERIOR << ":\n";

    for (int numero = RANGO_INFERIOR; numero <= RANGO_SUPERIOR; numero++) {
        if (esNumeroArmstrong(numero)) {
            cout << numero << endl;
        }
    }

    return 0;
}