/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Practice name      | Comparar dos numeros         |
| Suggested filename | compararDosNumeros.cpp       |
| Filename           | comparar.cpp                 |
| Author             | Juan Pablo Hernandez Ramirez |
| Date               | 2024-10-31                   |
| Version            | 1.1.0                        |
| Description        | Compara cual de dos numeros  |
|                    | es mayor o menor al otro     |
|                    | o bien, si son iguales.      |
+--------------------+------------------------------+
*/

#include <iostream>
using namespace std;

int main() {
    system("CLS"); cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;
    int n1, n2;
    string mensaje;

    cout << "Dame el primer numero: ", cin >> n1;
    cout << "Dame el segundo numero: ", cin >> n2;

    cout << (
        n1 == n2 ? to_string(n1) + " es igual a " + to_string(n2) :
        n1  > n2 ? to_string(n1) + " es mayor a " + to_string(n2) :
        to_string(n1) + " es menor que " + to_string(n2)
    ) << endl;

    return 0;
}
