#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Definición de colores
#define BOLD    "\033[1m"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define MAGENTA "\033[35m"

void imprimirEncabezado() {
    system("CLS"); // Clear console screen
    cout << BOLD << GREEN << "Alumno: Juan Pablo Hernandez Ramirez" << RESET << endl;
    cout << GREEN << "Bienvenido a la casa de apuestas!" << RESET << "\n\n";
}

int generarNumero() {
    return rand() % 9 + 1;
}

int main() {
    imprimirEncabezado();
    srand(time(0));

    string nombreJugador;
    float saldoCasa, saldoJugador, apuesta;
    char respuesta;

    cout << "Por favor, ingresa el nombre del jugador: ";
    cin >> nombreJugador;

    cout << "Ingrese el saldo de la casa de apuestas: ";
    cin >> saldoCasa;
    cout << "Ingrese el saldo de " << nombreJugador << ": ";
    cin >> saldoJugador;

    do {
        if (saldoJugador <= 0) {
            cout << RED << "Lo siento, " << nombreJugador << ". No tienes dinero para jugar." << RESET << endl;
            break;
        }

        cout << endl;
        cout << "Saldo de " << nombreJugador << ": " << saldoJugador << endl;
        cout << "Saldo de la casa de apuestas: " << saldoCasa << endl;

        do {
            cout << "Cuanto deseas apostar? ";
            cin >> apuesta;
            if (apuesta > saldoJugador) {
                cout << RED << "No tienes suficiente saldo. Tu saldo es: " << saldoJugador << RESET << endl;
            }
        } while (apuesta > saldoJugador);

        saldoJugador -= apuesta;
        saldoCasa += apuesta;

        cout << CYAN << "Presiona cualquier tecla para jugar..." << RESET << endl;
        cin.ignore();
        cin.get();

        int num1 = generarNumero();
        int num2 = generarNumero();
        int num3 = generarNumero();

        cout << "Los tres numeros generados son: " << num1 << ", " << num2 << ", " << num3 << RESET << endl;

        if (num1 == num2 && num2 == num3) {
            cout << GREEN << "Felicidades, " << nombreJugador << "! Ganaste!" << RESET << endl;
            saldoJugador += 3 * apuesta;
            saldoCasa -= 3 * apuesta;
        } else {
            cout << RED << "Lo siento, " << nombreJugador << ". Perdiste." << RESET << endl;
        }

        cout << "Deseas seguir jugando? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S');

    cout << "\nSaldo de la casa de apuestas: " << saldoCasa << endl;
    cout << "Saldo de " << nombreJugador << ": " << saldoJugador << endl;
    cout << "\nJuego terminado." << endl;

    return 0;
}
