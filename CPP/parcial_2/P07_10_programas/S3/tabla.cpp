/*
+---------------------------------------------------+
| Metadata                                          |
+--------------------+------------------------------+
| Suggested filename | generarTablas.cpp            |
| Filename           | tabla.cpp                    |
| Author             | Juan Pablo Hernandez Ramirez |
| Date               | 2024-10-31                   |
| Version            | 1.0.0                        |
+--------------------+------------------------------+
*/

#include <stdio.h>
#include <iostream>
using namespace std;

// --- Main execution ---
int main() {
    system("CLS"); // Clear console screen
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    int num, tabla;

    printf("Escriba un numero: ");
    scanf("%d", &num);

    for (tabla = 1; tabla <= 10; tabla++) {
        printf("%d x %d = %d\n", num, tabla, num * tabla);
    }

    return 0;
}