#include "module_tabla.h"
#include <iostream>
#include <iomanip>

void imprimirEncabezadoTabla(const std::string& titulo) {
    std::cout << "+-----+-------------+" << std::endl;
    std::cout << "| Dia | " << titulo << " |" << std::endl;
    std::cout << "+-----+-------------+" << std::endl;
}

void imprimirCuerpoDeTabla(const std::vector<int>& dias, const std::vector<float>& valores) {
    for (size_t i = 0; i < dias.size(); ++i) {
        std::string espacioDinamico = (dias[i] > 9) ? " " : "  ";
        std::cout << "| " << dias[i] << espacioDinamico << " |   " << std::fixed << std::setprecision(2)
             << valores[i] << " C   |" << std::endl;
    }
}

void imprimirPieDeTabla(float promedio) {
    std::cout << "+-----+-------------+" << std::endl;
    std::cout << "| Promedio: " << promedio << "   |" << std::endl;
    std::cout << "+-------------------+" << std::endl;
}

void imprimirTabla(const std::vector<int>& dias, const std::vector<float>& valores, const std::string& titulo, float promedio) {
    imprimirEncabezadoTabla(titulo);
    imprimirCuerpoDeTabla(dias, valores);
    if (promedio >= 0) {
        imprimirPieDeTabla(promedio);
    } else {
        std::cout << "+-----+-------------+" << std::endl;
    }
}
