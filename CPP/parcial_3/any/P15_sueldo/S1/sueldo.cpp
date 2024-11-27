#include <iostream>
#include <algorithm>
using namespace std;

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

const double sueldo_base = 4500.0;
const int max_horas_extra = 30;
const double descuento_ISR = 0.15;

int main() {
    string nombre, respuesta;
    int horas_extra_trabajadas, horas_extra_pagadas;
    char categoria;
    double pago_por_hora, sueldo_extra, sueldo_total, sueldo_total_con_descuento;

    system("CLS");
    cout << GREEN << BOLD << "Calcular sueldo semanal de un empleado" << RESET << endl;
    cout << GREEN << "Juan Pablo Hernandez Ramirez" << RESET << "\n\n";
    
    do {

        // Leer datos del empleado
        cout << "Ingrese nombre del empleado: ";
        cin >> nombre;
        cout << "Ingrese horas extra trabajadas: ";
        cin >> horas_extra_trabajadas;

        // Asegurarse de que las horas extra no excedan el máximo
        horas_extra_pagadas = (horas_extra_trabajadas > max_horas_extra) ? max_horas_extra : horas_extra_trabajadas;

        cout << "Ingrese categoria del empleado (A, B, C, D): ";
        cin >> categoria;

        // Asignar pago por hora basado en categoría
        switch (categoria) {
            case 'A': case 'a': pago_por_hora = 160; break;
            case 'B': case 'b': pago_por_hora = 130; break;
            case 'C': case 'c': pago_por_hora = 110; break;
            case 'D': case 'd': pago_por_hora = 80; break;
            default: pago_por_hora = 0; break;
        }

        // Calcular sueldo total
        sueldo_extra = horas_extra_pagadas * pago_por_hora;
        sueldo_total = sueldo_base + sueldo_extra;
        sueldo_total_con_descuento = sueldo_total - (sueldo_total * descuento_ISR);

        // Imprimir resultados
        cout << YELLOW << "Empleado: " << nombre << endl;
        cout << "Horas extra trabajadas: " << horas_extra_trabajadas << endl;
        cout << "Horas extra pagadas: " << horas_extra_pagadas << endl;
        cout << "Sueldo semanal (con ISR aplicado): $" << sueldo_total_con_descuento << RESET << "\n\n";

        // Preguntar si quiere calcular sueldo para otro empleado
        cout << "Desea calcular sueldo para otro empleado? (s/n): ";
        cin >> respuesta;
        transform(respuesta.begin(), respuesta.end(), respuesta.begin(), ::toupper);  // Convertir a mayúsculas
    } while (respuesta == "S");

    return 0;
}
