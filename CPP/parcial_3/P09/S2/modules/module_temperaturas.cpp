#include "module_temperaturas.h"
#include <cstdlib>
#include <ctime>

void llenarTemperaturas(vector<float>& temperaturas) {
    for (int i = 0; i < TAM; ++i) {
        temperaturas[i] = 13 + static_cast<float>(rand()) / (RAND_MAX / (31 - 13));
    }
}

float calcularPromedio(const vector<float>& temperaturas) {
    float suma = 0;
    for (float temp : temperaturas) {
        suma += temp;
    }
    return suma / TAM;
}

int diasPorEncimaPromedio(const vector<float>& temperaturas, float promedio) {
    int count = 0;
    for (float temp : temperaturas) {
        if (temp > promedio) {
            ++count;
        }
    }
    return count;
}

void diasPorDebajoPromedio(const std::vector<float>& temperaturas, float promedio) {
    int diasDebajo = 0;
    for (size_t i = 0; i < temperaturas.size(); ++i) {
        if (temperaturas[i] < promedio) {
            ++diasDebajo;
        }
    }
    std::cout << diasDebajo << " dias estuvieron por debajo de la temperatura promedio.\n";
}

float temperaturaMaxima(const vector<float>& temperaturas) {
    float max = temperaturas[0];
    for (float temp : temperaturas) {
        if (temp > max) {
            max = temp;
        }
    }
    return max;
}

void diasConTemperaturaMaxima(const vector<float>& temperaturas, float maxima) {
    cout << "\nLos dias que tuvieron la temperatura mas alta fueron: ";
    bool primero = true;
    for (int i = 0; i < TAM; ++i) {
        if (temperaturas[i] == maxima) {
            if (!primero) {
                cout << ", ";
            }
            cout << "dia " << i + 1;
            primero = false;
        }
    }
    cout << "\n\n";
}

void topTresDiasMasCalurosos(const vector<float>& temperaturas) {
    vector<DiaTemperatura> top3(3);

    for (int i = 0; i < TAM; ++i) {
        if (temperaturas[i] > top3[2].temperatura) {
            top3[2] = {i + 1, temperaturas[i]};
            if (top3[2].temperatura > top3[1].temperatura) {
                swap(top3[2], top3[1]);
            }
            if (top3[1].temperatura > top3[0].temperatura) {
                swap(top3[1], top3[0]);
            }
        }
    }

    cout << BOLD << "\nTop 3 de los dias mas calurosos:\n" RESET;
    for (size_t i = 0; i < top3.size(); ++i) {
        cout << "Numero " << i + 1 << ": Dia " << top3[i].dia
             << " con " << fixed << setprecision(2)
             << top3[i].temperatura << " C\n";
    }
}
