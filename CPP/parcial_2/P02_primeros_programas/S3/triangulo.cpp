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

    // Proceso: calculo del area y perImetro
    a = (b * h) / 2;  // area del triangulo
    p = l1 + l2 + l3;  // PerImetro del triangulo

    cout << "El area es: " << a << endl;
    cout << "El perimetro es: " << p << endl;

    return 0;
}
