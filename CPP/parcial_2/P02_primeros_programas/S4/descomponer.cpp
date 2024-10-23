#include <iostream>
using namespace std;

int main() {
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    int numero, centenas, decenas, unidades;

    cout << "Dame un numero de 3 cifras: ";
    cin >> numero;

    // Validar si el número tiene 3 cifras
    if(numero >= 100 && numero <= 999) {
        // Cálculo de centenas, decenas y unidades
        centenas = numero / 100;
        decenas = (numero % 100) / 10;
        unidades = numero % 10;

        cout << "Centenas: " << centenas << endl;
        cout << "Decenas: " << decenas << endl;
        cout << "Unidades: " << unidades << endl;
    } else {
        cout << "Error en el dato, el numero no tiene 3 cifras." << endl;
    }

    return 0;
}
