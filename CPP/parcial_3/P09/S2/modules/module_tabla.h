#ifndef MODULE_TABLA_H
#define MODULE_TABLA_H

#include <vector>
#include <string>

void imprimirEncabezadoTabla(const std::string& titulo);
void imprimirCuerpoDeTabla(const std::vector<int>& dias, const std::vector<float>& valores);
void imprimirPieDeTabla(float promedio);
void imprimirTabla(const std::vector<int>& dias, const std::vector<float>& valores, const std::string& titulo, float promedio = -1);

#endif // MODULE_TABLA_H
