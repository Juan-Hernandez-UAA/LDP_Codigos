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
using namespace std;

void imprimirEncabezado();
void codigo();

int main() {
    imprimirEncabezado();
    printf("\n");
    codigo(); // Llamada a la función
    return 0;
}

void imprimirEncabezado() {
    system("CLS");
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;
}

void codigo() {
    int i, contador = 0;

    printf("\nTabla del codigo ASCII\n\n");

    for (i = 0; i < 256; i++) {
        printf("%d %c ", i, i); // Imprime el código y el carácter ASCII
        contador++;

        if (contador == 25) {
            contador = 0; // Reseteamos contador
            printf("\n");
            system("pause");
        }
    }
}