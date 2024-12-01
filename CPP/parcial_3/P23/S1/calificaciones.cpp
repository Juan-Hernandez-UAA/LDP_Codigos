/*
+----------------------------------------------------------------------------+
| Metadata                                                                   |
+--------------------+-------------------------------------------------------+
| Practice name      | Registro dinamico de estudiantes y sus calificaciones |
| Suggested filename | RegEstudiantesCalificaciones.cpp                      |
| Filename           | calificaciones.cpp                                    |
| Author             | Juan Pablo Hernandez Ramirez                          |
| Date               | 30-11-2024                                            |
| Version            | 1.0.0                                                 |
| Description        | Este programa en C++ permite gestionar y mostrar la   |
|                    | información de estudiantes, incluyendo sus nombres,   |
|                    | edades, calificaciones y el cálculo de sus promedios. |
|                    | Los datos se presentan en formato de tabla con ajuste |
|                    | automático de ancho. Además, permite ingresar         |
|                    | un número variable de estudiantes.                    |
+--------------------+-------------------------------------------------------+
*/

#include <iostream>
#include <string>
#include <unistd.h>
#include <iomanip>
using namespace std;

#define RED "\033[31m"
#define YELLOW "\033[33m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"
#define RESET "\033[0m"
#define CLEAR_LINE "\033[K" // Limpia la línea actual

// Definimos un struct para representar a un estudiante
struct Estudiante {
    string nombre;
    int edad;
    int calificaciones[3]; // Arreglo de 3 calificaciones
};

// Funcion para mostrar el encabezado inicial
void encabezado() {
    system("cls");
    cout << GREEN << BOLD << "Registro de estudiantes" << RESET << endl;
    cout << GREEN << "Alumno: Juan Pablo Hernandez Ramirez" << RESET << endl;
}

// Funcion para actualizar el contador de estudiantes
void actualizarContador(int numEstudiantesIngresados) {
    // Guarda la posición actual del cursor
    cout << "\033[s";
    // Mueve el cursor a la línea 5 (después del encabezado) y limpia la línea
    cout << "\033[5;0H" << CLEAR_LINE;
    // Actualiza el contador
    cout << YELLOW << "Estudiantes ingresados: " << numEstudiantesIngresados << RESET;
    // Restaura la posición original del cursor
    cout << "\033[u";
}

// Funcion para ingresar los datos de un estudiante
void ingresarDatosEstudiante(Estudiante &estudiante, int numEstudiante) {
    cout << "\nEstudiante " << numEstudiante + 1 << ":\n";

    cout << "  Ingresa el nombre: ";
    cin >> estudiante.nombre;

    cout << "  Ingresa la edad: ";
    cin >> estudiante.edad;

    for (int j = 0; j < 3; j++) {
        bool calificacionValida = false;
        while (!calificacionValida) {
            cout << "  Ingresa la calificacion " << j + 1 << " (de 0 a 10): ";
            cin >> estudiante.calificaciones[j];

            if (estudiante.calificaciones[j] >= 0 && estudiante.calificaciones[j] <= 10) {
                calificacionValida = true;  // La calificacion es valida
            } else {
                cout << YELLOW << "  [ATENCION]: La calificacion debe estar entre 0 y 10." << RESET << endl;
            }
        }
    }
}

// Funcion para mostrar los datos de todos los estudiantes
void mostrarDatosEstudiantes(Estudiante estudiantes[], int numEstudiantes) {
    cout << "\nDatos de los estudiantes:\n";
    cout << "+--------------------+--------+------------------+------------+" << endl;
    cout << "|  Nombre            |  Edad  |  Calificaciones  |  Promedio  |" << endl;
    cout << "+--------------------+--------+------------------+------------+" << endl;

    // Uso de setw para alinear las columnas
    for (int i = 0; i < numEstudiantes; i++) {
        string calificacionesStr = "";
        string separador = "";
        float promedio = 0;

        cout << "|  " << setw(17) << left << estudiantes[i].nombre << " |  ";
        cout << setw(5) << left << estudiantes[i].edad << " |  ";

        for (int j = 0; j < 3; j++) {
            separador = (j == 2) ? "" : ", ";
            calificacionesStr += to_string(estudiantes[i].calificaciones[j]) + separador;
            promedio += estudiantes[i].calificaciones[j];
        }

        promedio /= 3;

        // Imprimir calificaciones y promedio
        cout << setw(15) << calificacionesStr << " |  ";
        cout << setw(8) << fixed << setprecision(2) << promedio << "  |" << endl;

        // Imprimir la línea divisoria
        cout << "+--------------------+--------+------------------+------------+" << "\n";
    }
    cout << endl;
}

int main() {
    int numEstudiantes;
    encabezado();
    cout << "\nIngrese el numero de estudiantes: ";
    cin >> numEstudiantes;

    Estudiante estudiantes[numEstudiantes]; // Arreglo de estudiantes
    cout << endl;

/*
    Ejecuta el ciclo una vez mas para actualizar el contador
    y comprueba si esta en la última iteración, de ser asi, no se ingresan mas datos
*/

    for (int i = 0; i <= numEstudiantes; i++) {
        actualizarContador(i);
        if (i < numEstudiantes) { ingresarDatosEstudiante(estudiantes[i], i); }
    }

    // Mostrar los datos ingresados
    mostrarDatosEstudiantes(estudiantes, numEstudiantes);

    return 0;
}