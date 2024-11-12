#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int generarNumero() {
    return rand() % 9 + 1;
}

int main() {
    srand(time(0));

    string nombreJugador;
    float saldoCasa, saldoJugador, apuesta;
    char respuesta;

    cout << "Bienvenido a la casa de apuestas!" << endl;
    cout << "Por favor, ingresa el nombre del jugador: ";
    cin >> nombreJugador;

    cout << "Ingrese el saldo de la casa de apuestas: ";
    cin >> saldoCasa;
    cout << "Ingrese el saldo de " << nombreJugador << ": ";
    cin >> saldoJugador;

    do {
        if (saldoJugador <= 0) {
            cout << "Lo siento, " << nombreJugador << ". No tienes dinero para jugar." << endl;
            break;
        }

        cout << "Saldo de " << nombreJugador << ": " << saldoJugador << endl;
        cout << "Saldo de la casa de apuestas: " << saldoCasa << endl;

        do {
            cout << "Cuanto deseas apostar? ";
            cin >> apuesta;
            if (apuesta > saldoJugador) {
                cout << "No tienes suficiente saldo. Tu saldo es: " << saldoJugador << endl;
            }
        } while (apuesta > saldoJugador);

        saldoJugador -= apuesta;
        saldoCasa += apuesta;

        cout << "Presiona cualquier tecla para jugar..." << endl;
        cin.ignore();
        cin.get();

        int num1 = generarNumero();
        int num2 = generarNumero();
        int num3 = generarNumero();

        cout << "Los tres numeros generados son: " << num1 << ", " << num2 << ", " << num3 << endl;

        if (num1 == num2 && num2 == num3) {
            cout << "Felicidades, " << nombreJugador << "! Ganaste!" << endl;
            saldoJugador += 3 * apuesta;
            saldoCasa -= 3 * apuesta;
        } else {
            cout << "Lo siento, " << nombreJugador << ". Perdiste." << endl;
        }

        cout << "¿Deseas seguir jugando? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S');

    cout << "Juego terminado." << endl;
    cout << "Saldo de la casa de apuestas: " << saldoCasa << endl;
    cout << "Saldo de " << nombreJugador << ": " << saldoJugador << endl;

    return 0;
}
