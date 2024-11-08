/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Author             | Juan Pablo Hernandez Ramirez |
| Date               | 2024-10-31                   |
| Version            | 1.0.0                        |
+--------------------+------------------------------+
*/


#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

header() {
    system("CLS");
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    return 0;
}

int main() {
    header();

    int limiteSerie;
    float sumaSerie = 1.0, valorBase;

    cout << "Dame el valor de X: ";
    cin >> valorBase;
    cout << "Dame un numero limite: ";
    cin >> limiteSerie;

    for (int indiceTermino = 1; indiceTermino <= limiteSerie; indiceTermino++) {
        sumaSerie += 1 / pow(valorBase, indiceTermino);
    }

    cout << "Resultado = " << sumaSerie << endl;

    return 0;
}