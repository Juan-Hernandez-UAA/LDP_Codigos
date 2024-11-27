#include <stdio.h>
#include <cstdlib>
#include <string.h>

#define SB 4500.0 // Salario base constante
#define GREEN "\033[32m"
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define YELLOW "\033[33m"

// Prototipos de funciones
void imprimirEncabezado();
void procesarEmpleados(int totalEmpleados, double &nominaTotal, char *empleadoConMayorSueldo, double &sueldoMaximo);
double calcularVentas(int autosVendidos);
double calcularSueldo(double ventas, int autosVendidos);

int main() {
    imprimirEncabezado();

    int totalEmpleados;
    double nominaTotal = 0, sueldoMaximo = 0;
    char empleadoConMayorSueldo[50];

    // Solicitar el numero total de empleados
    do {
        printf("Total de empleados en la empresa (entre 100 y 500): ");
        scanf("%d", &totalEmpleados);
        if (totalEmpleados < 100 || totalEmpleados > 500) {
            printf("%sAdvertencia: el numero de empleados debe estar entre 100 y 500%s\n\n", YELLOW, RESET);
        }
    } while (totalEmpleados < 100 || totalEmpleados > 500);

    procesarEmpleados(totalEmpleados, nominaTotal, empleadoConMayorSueldo, sueldoMaximo);

    printf("\n%sTotal de la nomina: %.2f%s\n", GREEN, nominaTotal, RESET);
    printf("%sEl empleado con el mayor sueldo es: %s con %.2f%s\n", GREEN, empleadoConMayorSueldo, sueldoMaximo, RESET);

    return 0;
}

// Funciones

void imprimirEncabezado() {
    system("CLS");
    printf("%s%sCalculo de Nomina de vendedores de autos%s\n", BOLD, GREEN, RESET);
    printf("%sAutor: Juan Pablo Hernandez Ramirez%s\n\n", GREEN, RESET);
}

void procesarEmpleados(int totalEmpleados, double &nominaTotal, char *empleadoConMayorSueldo, double &sueldoMaximo) {
    int contadorEmpleado = 1, autosVendidos;
    char nombreEmpleado[50];
    double ventas, sueldo;

    while (contadorEmpleado <= totalEmpleados) {
        printf("\nDame el nombre del empleado #%d: ", contadorEmpleado);
        scanf("%s", nombreEmpleado);

        printf("Cuantos autos vendio %s: ", nombreEmpleado);
        scanf("%d", &autosVendidos);

        ventas = calcularVentas(autosVendidos);
        sueldo = calcularSueldo(ventas, autosVendidos);
        nominaTotal += sueldo;

        printf("%sNombre del empleado: %s\n", YELLOW, nombreEmpleado);
        printf("Sueldo calculado: %.2f%s\n", sueldo, RESET);

        // Determinar al empleado con mayor sueldo
        if (sueldo > sueldoMaximo) {
            sueldoMaximo = sueldo;
            strcpy(empleadoConMayorSueldo, nombreEmpleado);
        }

        contadorEmpleado++;
    }
}

double calcularVentas(int autosVendidos) {
    double ventasTotales = 0, precioAuto;
    for (int i = 1; i <= autosVendidos; i++) {
        printf("Dame el precio del auto #%d: ", i);
        scanf("%lf", &precioAuto);
        ventasTotales += precioAuto;
    }

    return ventasTotales;
}

double calcularSueldo(double ventas, int autosVendidos) {
    return SB + ventas * 0.02 + autosVendidos * 250;
}
