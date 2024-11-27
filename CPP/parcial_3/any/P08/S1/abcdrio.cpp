#include <stdio.h>

// Imprime las letras mayusculas o minusculas

// Prototipo
void imprimeLetras();

int main() {
    char resp;

    do {
        imprimeLetras(); // Llamar a la funcion
        printf("\n\nQuieres imprimir de nuevo? (s/n): ");
        fflush(stdin);
        scanf(" %c", &resp); // Es una forma de leer un char
    } while (resp == 's' || resp == 'S');

    return 0;
} // fin main

void imprimeLetras() {
    // Usando la tabla de codigo ASCII
    // Las mayusculas van del codigo 65 al 90
    // Las minusculas van del codigo 97 al 122
    int op, ini, fin;

    printf("Selecciona: Mayusculas (1) Minusculas (2): ");
    scanf("%d", &op);

    if (op == 1) { // Mayusculas
        ini = 65;
        fin = 90;
    } else { // Minusculas
        ini = 97;
        fin = 122;
    }

    for (int i = ini; i <= fin; i++) {
        printf("%c ", i); /* Si se imprime con %c un int cuyo valor esta entre 0 y 255
                             muestra su equivalencia en ASCII */
    }
}
