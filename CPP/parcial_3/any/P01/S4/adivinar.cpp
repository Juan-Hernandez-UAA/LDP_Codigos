#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void adivina();
void imprimirEncabezado();

int main() {
    imprimirEncabezado();
    srand(time(0));  // Inicializa el generador de numeros aleatorios
    adivina();
    return 0;
}

void imprimirEncabezado() {
    system("CLS");
    printf("Alumno: Juan Pablo Hernandez Ramirez\n");
}

void adivina() {
    int op;
    char nom[30];
    int contador;
    int juego, num;

    do {
        contador = 1;

        // Mensaje inicial
        printf("Adivina el numero, el numero generado esta entre 100 y 900, tienes 10 oportunidades para adivinar.\n");

        // Solicitar nombre del jugador
        printf("Como te llamas?\n");
        scanf("%s", nom);

        juego = 100 + rand() % (900 - 100 + 1);  // Generar un numero entre 100 y 900

        // Bucle de adivinanza
        while (contador <= 10) {
            printf("Adivina el numero: ");
            scanf("%d", &num);

            if (num == juego) {
                printf("Felicidades %s, adivinaste el numero en %d intentos!\n", nom, contador);
                break;
            } else {
                if (num > juego) {
                    printf("El numero es menor que %d\n", num);
                } else {
                    printf("El numero es mayor que %d\n", num);
                }
            }
            contador++;
        }

        // Preguntar si desea jugar otra vez
        printf("Quieres jugar otra vez? (1 para si, otro numero para no): ");
        scanf("%d", &op);

    } while (op == 1);
}
