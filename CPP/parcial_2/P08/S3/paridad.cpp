/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Practice name      | Comprobacion de paridad      |
| Suggested filename | comprobarParidad.cpp         |
| Filename           | paridad.cpp                  |
| Author             | Juan Pablo Hernandez Ramirez |
| Date               | 2024-10-31                   |
| Version            | 1.1.0                        |
| Description        | Comprobar la paridad de un   |
|                    | numero.                      |
+--------------------+------------------------------+
*/

#include <iostream>
using namespace std;

int main() {
    system("CLS"); cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    int numero;

    // Pedir numero al usuario
    cout << "Por favor, ingresa un numero entero: ";
    cin >> numero;

    // Verificar y mostrar si el numero es par o impar
    cout << "El numero " << numero << " es "
         << (numero % 2 == 0 ? "par." : "impar.") << endl;

    return 0;
}