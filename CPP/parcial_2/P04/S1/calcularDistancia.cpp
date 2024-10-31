#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <cstdlib>

int main() {
    system("CLS");
    double x1, x2, y1, y2, distancia;

    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    cout << "Ingresa la posicion del punto x1: ";
    cin >> x1;
    cout << "Ingresa la posicion del punto y1: ";
    cin >> y1;
    cout << "Ingresa la posicion del punto x2: ";
    cin >> x2;
    cout << "Ingresa la posicion del punto y2: ";
    cin >> y2;

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("La distancia entre el punto (%g, %g) y el punto (%g, %g) es de: %g", x1, y1, x2, y2, distancia);

    return 0;
}