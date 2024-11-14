#include <stdio.h>
#include <stdlib.h>

#include <iostream>
using namespace std;

// Repetir varias veces una palabra
// Prototipos de funciones
void capturarPalabra();
void repetir();

// Variables globales
char palabra[30];

int main()
{
    char resp;
    do
    {
        capturarPalabra(); // Llamar a la función para capturar la palabra
        repetir();         // Llamar a la función para repetir la palabra

        printf("\nQuieres imprimir de nuevo? (s/n): ");
        fflush(stdin);
        resp = getchar();
    } while (resp == 's' || resp == 'S'); // No se manejaba el caso de mayusculas

    return 0;
}

// Función para capturar la palabra
void capturarPalabra()
{
    cout << "dame una palabra: "; /* Hay muchos problemas con la manera en la que se lee originalmente
                                     por ello, se reemplaza por el uso de cin y cout */
    cin >> palabra;
}

// Función para repetir la palabra
void repetir()
{
    int veces; // Variable local
    printf("Cuantas veces la quieres repetir: ");
    scanf("%d", &veces);
    printf("\n");

    for (int i = 1; i <= veces; i++) {
        for (int j = 1; j <= veces; j++) {
            printf("%s ", palabra);  // Imprime la palabra seguida de un espacio
        }
        printf("\n");  // Salto de línea después de completar una fila
    }
}