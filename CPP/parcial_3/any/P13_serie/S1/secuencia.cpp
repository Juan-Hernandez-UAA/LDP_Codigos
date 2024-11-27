#include <iostream>
#include <cmath>
using namespace std;

#define RED "\033[33m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

#define BOLD "\033[1m"
#define RESET "\033[0m"

void imprimirEncabezado();
double calcularSerie(int limite, int argumento);

int main() {
    imprimirEncabezado();

    int limite, argumento;

    do {
        cout << "Ingresa el limite de la secuencia (debe ser mayor que 0): ";
        cin >> limite;

        if (limite <= 0) {
            cout << RED << "[ATENCION]: El valor ingresado no es valido. Por favor, intenta nuevamente." << RESET << endl;
        }
    } while (limite <= 0);


    cout << "Ingresa el argumento de la secuencia (x): ";
    cin >> argumento;

    if (argumento <= 0) {
        cout << "El argumento debe ser mayor a 0." << endl;
        return 1;
    }

    double resultado = calcularSerie(limite, argumento);
    cout << CYAN "\nEl resultado de la secuencia es: " << resultado << RESET << endl;

    return 0;
}

void imprimirEncabezado() {
    system("CLS");
    cout << BOLD << GREEN << "Secuencia numerica" << RESET << endl;
    cout << GREEN << "Alumno: Juan Pablo Hernandez Ramirez" << RESET << endl;
}

double calcularSerie(int limite, int argumento) {
    bool flag = true;
    double acumulador = 1;
    for (int i = 2; i <= limite; i++) {
        acumulador += (flag ? (i / pow(argumento, i)) : -(i / pow(argumento, i)));
        flag = !flag;
    }
    return acumulador;
}
