#include <iostream>
#include <cmath>

using namespace std;

bool esNumeroArmstrong(int numero) {
    int suma = 0;
    int n = numero;  // Almacenar el numero original para comparacion

    while (n > 0) {
        int digito = n % 10;
        suma += digito * digito * digito; // Optimizacion
        n /= 10;
    }

    return suma == numero;
}
#include <cstdlib>

int main() {
    system("CLS");
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
