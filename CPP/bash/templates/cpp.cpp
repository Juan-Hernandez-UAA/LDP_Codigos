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

#include <stdio.h>
#include <iostream>
using namespace std;

#define GREEN "\033[32m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

void imprimirEncabezado();

int main() {
    imprimirEncabezado();
    return 0;
}

void imprimirEncabezado(){
    system("CLS"); // Clear console screen
    cout << BOLD << GREEN << "Nombre de la practica" << RESET << endl;
    cout << GREEN << "Alumno: Juan Pablo Hernandez Ramirez" << RESET << endl;
}