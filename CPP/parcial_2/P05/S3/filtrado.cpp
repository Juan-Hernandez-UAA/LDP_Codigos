#include <iostream>

using namespace std;
#include <cstdlib>

int main() {
    system("CLS");
    int suma = 0;

    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    for (int i = 500; i <= 600; i++) {
        if (i % 2 != 0 && i % 3 == 0) { // Verifica si es impar y multiplo de 3
            suma += i;
        }
    }

    cout << "La sumatoria de los numeros impares y multiplos de 3 entre 500 y 600 es: " << suma << endl;

    return 0;
}