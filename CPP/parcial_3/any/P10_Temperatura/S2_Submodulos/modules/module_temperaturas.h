#ifndef MODULE_TEMPERATURAS_H
#define MODULE_TEMPERATURAS_H

#include <vector>

#define TAM 31

void llenarTemperaturas(std::vector<float>& temperaturas);
float calcularPromedio(const std::vector<float>& temperaturas);
int diasPorEncimaPromedio(const std::vector<float>& temperaturas, float promedio);
void diasPorDebajoPromedio(const std::vector<float>& temperaturas, float promedio);
float temperaturaMaxima(const std::vector<float>& temperaturas);
void diasConTemperaturaMaxima(const std::vector<float>& temperaturas, float maxima);
void topTresDiasMasCalurosos(const std::vector<float>& temperaturas);

#endif // MODULE_TEMPERATURAS_H
