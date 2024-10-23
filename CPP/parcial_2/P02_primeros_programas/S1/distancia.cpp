#include <iostream>
#include <string>
using namespace std;

int main() {
    const int velocidadLuz = 299792458; // Velocidad de la luz en metros por segundo
    string articulo;

    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    int tiempo, distanciaMetros;

    cout << "Dame el tiempo en segundos: ";
    cin >> tiempo;

    distanciaMetros = tiempo * velocidadLuz;
    articulo = (tiempo > 1) ? "s" : "";
    cout << "La distancia recorrida en " << tiempo << " segundo" << articulo << " es " << distanciaMetros << " metros." << endl;

    return 0;
}
