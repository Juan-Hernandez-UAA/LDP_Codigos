#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    float calificacion1, calificacion2, calificacion3, promedio;
    string nombre;

    cout << "Hola! Dame tu nombre para comenzar: ";
    cin >> nombre;

    cout << "Ingresa la primera calificacion: ";
    cin >> calificacion1;

    cout << "Ingresa la segunda calificacion: ";
    cin >> calificacion2;

    cout << "Ingresa la tercera calificacion: ";
    cin >> calificacion3;

    // Calcular el promedio
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

    cout << nombre << ", tu promedio es: " << promedio << endl;

    // Comprobar si el promedio es mayor o igual a 7
    if (promedio >= 7) {
        cout << "Aprobaste" << endl;
    } else {
        cout << "Reprobaste" << endl;
    }

    return 0;
}
