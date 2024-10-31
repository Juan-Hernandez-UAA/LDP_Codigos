#include <iostream>
using namespace std;
#include <cstdlib>

int main() {
    system("CLS");
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    float b, h, l1, l2, l3, a, p;

    cout << "Dame la base: ";
    cin >> b;

    cout << "Dame la altura: ";
    cin >> h;

    cout << "Dame lado 1: ";
    cin >> l1;

    cout << "Dame lado 2: ";
    cin >> l2;

    cout << "Dame lado 3: ";
    cin >> l3;

    // Proceso: cálculo del área y perImetro
    a = (b * h) / 2;  // Área del triángulo
    p = l1 + l2 + l3;  // PerImetro del triángulo

    cout << "El area es: " << a << endl;
    cout << "El perimetro es: " << p << endl;

    return 0;
}
