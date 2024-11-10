#include <stdio.h>
#include <iostream>
using namespace std;

void cajero();
void imprimirEncabezado();

int main() {
    imprimirEncabezado();
    printf("Tu nombre aqui\n");
    cajero(); // Llamada a la función
    return 0;
}

void imprimirEncabezado() {
    system("CLS");
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;
}

void cajero() {
    int cantidad, op;

    do {
        printf("\nCajero Automatico\n");
        printf("Solo puedes retirar cantidades entre $50 y $8000\n");
        printf("La cantidad debe ser multiplo de $50\n");
        printf("Este cajero tiene billetes de $50, $100, $200 y $500\n");

        do {
            printf("\nCantidad a retirar: ");
            scanf("%d", &cantidad);

            if (!(cantidad <= 8000 && cantidad >= 50 && cantidad % 50 == 0)) {
                printf("\nError en la cantidad a retirar\n");
            }
        } while (!(cantidad <= 8000 && cantidad >= 50 && cantidad % 50 == 0));

        printf("\nEntrega de dinero\n");
        printf("Billetes de $500 ..... %d\n", cantidad / 500);
        printf("Billetes de $200 ..... %d\n", cantidad % 500 / 200);
        printf("Billetes de $100 ..... %d\n", cantidad % 500 % 200 / 100);
        printf("Billetes de $50 ..... %d\n", cantidad % 500 % 200 % 100 / 50);

        printf("\nDeseas hacer otro retiro 1(si) 0(no) ");
        scanf("%d", &op);
    } while (op == 1);
}
