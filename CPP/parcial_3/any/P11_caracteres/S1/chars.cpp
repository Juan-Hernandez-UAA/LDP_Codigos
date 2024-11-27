#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para funciones como strlen, strcpy y strcmp

// Definir colores
#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

// Prototipos de funciones
void encabezado_general();
void captura_y_compara_caracteres();
void captura_y_compara_cadenas();
void sub_encabezado(const char* subtitle);

int main() {
    encabezado_general();
    captura_y_compara_caracteres();
    captura_y_compara_cadenas();
    printf ("\n");
    return 0;
}

void encabezado_general() {
    system("CLS");
    printf(GREEN BOLD "Manipulacion de caracteres\n");
    printf("Alumno: Juan Pablo Hernandez Ramirez\n" RESET);
}

void sub_encabezado(const char* subtitle) {
    printf(YELLOW "\n%s" RESET, subtitle);
}

void captura_y_compara_caracteres() {
    char c1, c2;

    sub_encabezado("Trabajo con caracteres");

    // Captura de caracteres
    printf("\nIngresa un caracter (Metodo scanf): ");
    scanf("%c", &c1);
    fflush(stdin); // Limpiar buffer de entrada

    printf("Ingresa un caracter (Metodo getchar): ");
    c2 = getchar();

    // Impresión de caracteres
    printf(CYAN "\nImprimiendo caracteres usando `putchar`...\n" RESET);
    putchar(c1); printf(" ");
    putchar(c2); printf(" ");
    putchar('@'); printf("\n");

    printf(CYAN "\nImprimiendo caracteres usando `printf`...\n" RESET);
    printf("Primer caracter capturado: %c\n", c1);
    printf("Segundo caracter capturado: %c\n", c2);
    printf("Caracter fijo: @\n");

    // Comparación de caracteres
    printf(CYAN "\nComparando de caracteres...\n" RESET);
    if (c1 == c2)
        printf("El caracter '%c' es igual a '%c'.\n", c1, c2);
    else
        printf("El caracter '%c' NO es igual a '%c'.\n", c1, c2);
}

void captura_y_compara_cadenas() {
    char cad1[30], cad2[30], cad3[30];

    sub_encabezado("Trabajo con cadenas de caracteres");

    // Captura de cadenas
    printf("\nIngresa una cadena de texto: ");
    fflush(stdin);
    gets(cad1);

    printf("Ingresa otra cadena de texto: ");
    scanf("%s", cad2);

    // Impresión de cadenas
    printf(CYAN "\nImprimiendo cadenas con `printf`...\n" RESET);
    printf("Primera cadena capturada: %s\n", cad1);
    printf("Segunda cadena capturada: %s\n", cad2);

    // Copia de cadenas
    strcpy(cad3, cad1);
    printf(CYAN "\nCopiando cadenas con `strcpy`:\n" RESET);
    printf("Tercera cadena (copia de la primera): %s\n", cad3);

    // Comparación de cadenas
    printf(CYAN "\nComparacion de cadenas\n" RESET);
    if (strcmp(cad1, cad2) == 0)
        printf("La cadena '%s' es igual a '%s'.\n", cad1, cad2);
    else
        printf("La cadena '%s' NO es igual a '%s'.\n", cad1, cad2);

    // Recorrido de cadena
    int tam = strlen(cad1);
    printf(CYAN "\nRecorriendo una cadena caracter por caracter\n" RESET);
    printf("La longitud de la cadena '%s' es: %d\n", cad1, tam);
    printf("Caracteres de la cadena: ");
    for (int i = 0; i < tam; i++) {
        printf("%c ", cad1[i]);
    }
    printf("\n");
}