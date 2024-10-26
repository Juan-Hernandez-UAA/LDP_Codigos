#include <iostream>

using namespace std;

int main() {
    int n, valorSerie = 2;

    cout << "Juan Pablo Hernandez Ramirez" << endl;

    do {
        cout << "Introduce un valor para n (mayor o igual a 10): ";
        cin >> n;
    } while (n < 10);

    cout << "Resultado de la serie:" << endl;

    for (bool bandera = true; valorSerie <= n; valorSerie += (bandera ? 3 : 2), bandera = !bandera) {
        cout << valorSerie << endl;
    }

    return 0;
}
