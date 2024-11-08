/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Practice name      | lorem                        |
| Suggested filename | main.cpp                     |
| Filename           | main.cpp                     |
| Author             | Juan Pablo Hernandez Ramirez |
| Date               | 2024-10-31                   |
| Version            | 1.0.0                        |
| Description        | lorem                        |
+--------------------+------------------------------+
*/

#include <iostream>
#include <string>
#include <limits>

using namespace std;

int imprimirEncabezado() {
    system("CLS"); // Clear console screen
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;
    return 0;
}

// Función para obtener el numero de empleados, validando que sea mayor a 0
int obtenerNumeroDeEmpleados() {
    int n;
    while (true) {
        cout << "Ingrese el numero total de empleados: ";
        cin >> n;
        if (cin.fail() || n <= 0) {
            cout << "Por favor, ingrese un numero valido mayor a 0." << endl;
            cin.clear();  // Limpia el estado de error del flujo
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignora la entrada incorrecta
        } else {
            break;
        }
    }
    return n;
}

// Función para leer el nombre del empleado
string obtenerNombre() {
    string nombre;
    cout << "Ingrese el nombre del empleado: ";
    cin.ignore();  // Limpia el buffer para leer la línea completa
    getline(cin, nombre);
    return nombre;
}

// Función para leer y validar el sueldo del empleado
double obtenerSueldo() {
    double sueldo;
    while (true) {
        cout << "Ingrese el sueldo del empleado: ";
        cin >> sueldo;
        if (cin.fail() || sueldo <= 0) {
            cout << "Por favor, ingrese un sueldo valido mayor a 0." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    return sueldo;
}

// Función principal que encuentra al empleado con el sueldo mas bajo
void encontrarEmpleadoConSueldoMinimo(int n) {
    string nombre, nombreMin;
    double sueldo, sueldoMin;

    cout << "\n--- Registro de empleados ---" << endl;

    // Inicialización con el primer empleado
    nombre = obtenerNombre();
    sueldo = obtenerSueldo();
    nombreMin = nombre;
    sueldoMin = sueldo;

    // Ciclo para el resto de empleados
    for (int i = 1; i < n; i++) {
        cout << "\n--- Empleado " << i + 1 << " ---" << endl;
        nombre = obtenerNombre();
        sueldo = obtenerSueldo();

        // Actualiza el empleado con el sueldo mas bajo si es menor que el actual
        if (sueldo < sueldoMin) {
            sueldoMin = sueldo;
            nombreMin = nombre;
        }
    }

    // Resultados
    cout << "\n--- Resultados ---" << endl;
    cout << "El sueldo mas bajo es: $" << sueldoMin << endl;
    cout << "Empleado con el sueldo mas bajo: " << nombreMin << endl;
}

int main() {
    imprimirEncabezado();

    cout << "Bienvenido al sistema de registro de sueldos" << endl;

    // Obtener el numero de empleados
    int n = obtenerNumeroDeEmpleados();

    // Encontrar el empleado con el sueldo mas bajo
    encontrarEmpleadoConSueldoMinimo(n);

    cout << "\nGracias por usar el sistema de registro de sueldos." << endl;
    return 0;
}
