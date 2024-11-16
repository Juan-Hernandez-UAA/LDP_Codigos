#include <iostream>
#include "modules/module_temperaturas.h"
#include "modules/module_tabla.h"
#include "modules/module_utils.h"

#include <ctime>  // Agrega esta linea

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"

using namespace std;

int main() {
    encabezado();

    vector<float> temperaturas(TAM);
    srand(static_cast<unsigned>(time(0)));

    llenarTemperaturas(temperaturas);
    float promedio = calcularPromedio(temperaturas);

    vector<int> dias(TAM);
    for (int i = 0; i < TAM; ++i) {
        dias[i] = i + 1;
    }

    imprimirTabla(dias, temperaturas, "Temperatura", promedio);

    int diasEncimaPromedio = diasPorEncimaPromedio(temperaturas, promedio);
    cout << diasEncimaPromedio << " dias estuvieron por encima de la temperatura promedio.\n" << RESET;

    diasPorDebajoPromedio(temperaturas, promedio);

    float maxima = temperaturaMaxima(temperaturas);
    cout << BOLD "\nLa temperatura mas alta registrada fue: " << maxima << " grados centigrados" << RESET;

    diasConTemperaturaMaxima(temperaturas, maxima);

    topTresDiasMasCalurosos(temperaturas);

    return 0;
}
