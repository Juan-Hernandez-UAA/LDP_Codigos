#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <vector>

#define TAM 31
#define BOLD "\033[1m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
using namespace std;

struct DiaTemperatura {
    int dia;
    float temperatura;
};

// Function prototypes
void encabezado();
void imprimirEncabezadoTabla(const string& titulo);
void imprimirCuerpoDeTabla(const vector<int>& dias, const vector<float>& valores);
void imprimirPieDeTabla(float promedio);
void imprimirTabla(const vector<int>& dias, const vector<float>& valores, const string& titulo, float promedio = -1);
void llenarTemperaturas(vector<float>& temperaturas);
void llenarDiasBajoPromedio(const vector<float>& temperaturas, float promedio, vector<int>& diasBajoPromedio, vector<float>& diasTemperatura);
void diasPorDebajoPromedio(const vector<float>& temperaturas, float promedio);
void topTresDiasMasCalurosos(const vector<float>& temperaturas);
float calcularPromedio(const vector<float>& temperaturas);
int diasPorEncimaPromedio(const vector<float>& temperaturas, float promedio);
float temperaturaMaxima(const vector<float>& temperaturas);


void encabezado() {
    system("CLS");
    cout << GREEN << BOLD << "Registro de temperatura aleatoriamente generado" << RESET << endl;
    cout << GREEN << "Juan Pablo Hernandez Ramirez" << RESET << "\n\n";
    cout << BOLD << CYAN << "Registro de temperatura:" << RESET << endl;
    cout << CYAN << "Aguascalientes, Octubre de 2024" << RESET << endl;
}

int main() {
    encabezado();

    // 1. Llenar el vector de temperaturas con valores aleatorios
    vector<float> temperaturas(TAM);
    llenarTemperaturas(temperaturas);

    // 2. Calcular el promedio de las temperaturas
    float promedio = calcularPromedio(temperaturas);

    // 3. Generar los dias (1 al 31)
    vector<int> dias(TAM);
    for (int i = 0; i < TAM; ++i) {
        dias[i] = i + 1; // Asignar los dias del mes
    }

    imprimirTabla(dias, temperaturas, "Temperatura", promedio);

    // ----- RESUMEN GENERAL -----
    cout << BOLD << CYAN << "\nResumen general: " << RESET << endl;

    // Temperatura maxima
    float maxima = temperaturaMaxima(temperaturas);
    cout << "* La temperatura mas alta registrada fue: " << maxima << " C" RESET << endl;

    // Encima promedio
    int diasEncimaPromedio = diasPorEncimaPromedio(temperaturas, promedio);
    cout << "* " << diasEncimaPromedio << " dias estuvieron por encima de la temperatura promedio.\n" << RESET;

    // Top 3
    topTresDiasMasCalurosos(temperaturas);

    // Dias debajo del promedio
    diasPorDebajoPromedio(temperaturas, promedio);

    return 0;
}


void imprimirEncabezadoTabla(const string& titulo) {
    cout << "+-----+-------------+" << endl;
    cout << "| Dia | " << titulo << " |" << endl;
    cout << "+-----+-------------+" << endl;
}

void imprimirCuerpoDeTabla(const vector<int>& dias, const vector<float>& valores) {
    for (size_t i = 0; i < dias.size(); ++i) {
        string espacioDinamico = (dias[i] > 9) ? " " : "  "; // Ajuste para el formato de la tabla
        cout << "| " << dias[i] << espacioDinamico << " |   " << fixed << setprecision(2)
             << valores[i] << " C   |" << endl;
    }
}

void imprimirPieDeTabla(float promedio) {
    cout << "+-----+-------------+" << endl;
    cout << "| Promedio: " << promedio << "   |" << endl;
    cout << "+-------------------+" << endl;
}

void imprimirTabla(const vector<int>& dias, const vector<float>& valores, const string& titulo, float promedio) {
    imprimirEncabezadoTabla(titulo);
    imprimirCuerpoDeTabla(dias, valores);
    if (promedio >= 0) {
        imprimirPieDeTabla(promedio);
    } else {
        cout << "+-----+-------------+" << endl;
    }
}

// Llena el vector de temperaturas con valores aleatorios entre 13 y 31 grados
void llenarTemperaturas(vector<float>& temperaturas) {
    for (int i = 0; i < TAM; ++i) {
        temperaturas[i] = 13 + static_cast<float>(rand()) / (RAND_MAX / (31 - 13));
    }
}

// Calcula el promedio de las temperaturas
float calcularPromedio(const vector<float>& temperaturas) {
    float suma = 0;
    for (float temp : temperaturas) {
        suma += temp;
    }
    return suma / TAM;
}

// Cuenta cuantos dias estuvieron por encima del promedio de temperatura
int diasPorEncimaPromedio(const vector<float>& temperaturas, float promedio) {
    int count = 0;
    for (float temp : temperaturas) {
        if (temp > promedio) {
            ++count;
        }
    }
    return count;
}

// Llena dos vectores: dias con temperaturas por debajo del promedio y sus valores
void llenarDiasBajoPromedio(const vector<float>& temperaturas, float promedio, vector<int>& diasBajoPromedio, vector<float>& diasTemperatura) {
    for (int i = 0; i < TAM; ++i) {
        if (temperaturas[i] < promedio) {
            diasBajoPromedio.push_back(i + 1); // Dia real (1-based)
            diasTemperatura.push_back(temperaturas[i]);
        }
    }
}

// Imprime los dias que estuvieron por debajo del promedio
void diasPorDebajoPromedio(const vector<float>& temperaturas, float promedio) {
    vector<int> diasBajoPromedio;
    vector<float> diasTemperatura;

    llenarDiasBajoPromedio(temperaturas, promedio, diasBajoPromedio, diasTemperatura);

    // Imprimir resultados en formato de tabla
    cout << BOLD << CYAN << "\nDias por debajo del promedio de temperatura (" << promedio << " C):" << RESET << endl;
    imprimirTabla(diasBajoPromedio, diasTemperatura, "Temperatura", promedio);
}

// Devuelve la temperatura maxima en el vector de temperaturas
float temperaturaMaxima(const vector<float>& temperaturas) {
    float max = temperaturas[0];
    for (float temp : temperaturas) {
        if (temp > max) {
            max = temp;
        }
    }
    return max;
}

// Encuentra y muestra los tres dias mas calurosos
void topTresDiasMasCalurosos(const vector<float>& temperaturas) {
    vector<DiaTemperatura> top3(3);

    for (int i = 0; i < TAM; ++i) {
        if (temperaturas[i] > top3[2].temperatura) {
            top3[2] = {i + 1, temperaturas[i]}; // Reemplazar el tercer lugar
            if (top3[2].temperatura > top3[1].temperatura) {
                swap(top3[2], top3[1]); // Ordenar el segundo lugar
            }
            if (top3[1].temperatura > top3[0].temperatura) {
                swap(top3[1], top3[0]); // Ordenar el primer lugar
            }
        }
    }

    cout << BOLD << CYAN << "\nTop 3 de los dias mas calurosos:\n" RESET;
    for (size_t i = 0; i < top3.size(); ++i) {
        cout << "* " << i + 1 << ": Dia " << top3[i].dia
             << " con " << fixed << setprecision(2)
             << top3[i].temperatura << " C\n";
    }
}
