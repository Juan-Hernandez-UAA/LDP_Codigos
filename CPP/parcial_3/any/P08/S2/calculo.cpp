#include <stdio.h>

// Prototipos de funciones
void mostrarMenu();
void calcularAreaTriangulo();
void calcularAreaTrapecio();
void calcularAreaRectangulo();
int leerOpcion(); // Funcion para validar la entrada del usuario

// Variable global
int opcion;

int main() {
    do {
        mostrarMenu();
        opcion = leerOpcion(); // Usa la funcion de validacion para obtener la opcion

        switch (opcion) {
            case 1:
                calcularAreaTriangulo();
                break;
            case 2:
                calcularAreaTrapecio();
                break;
            case 3:
                calcularAreaRectangulo();
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Por favor, intenta de nuevo.\n");
        }
    } while (opcion != 4);

    return 0;
}

/* Funcion para mostrar un menu */
void mostrarMenu() {
    printf("\nCALCULO DE AREAS\n");
    printf("1 - Calcular el area de un triangulo\n");
    printf("2 - Calcular el area de un trapecio\n");
    printf("3 - Calcular el area de un rectangulo\n");
    printf("4 - Salir\n");
    printf("Opcion: ");
}

/* Funcion para validar la entrada del usuario y evitar el ciclado infinito
   de impresion de opciones dado por el ingreso de un caracter como respuesta */
int leerOpcion() {
    int entrada;
    while (1) {
        if (scanf("%d", &entrada) == 1) {
            return entrada; // Si la entrada es un numero, se devuelve
        } else {
            printf("Entrada no valida. Por favor, introduce un numero.\n");
            while (getchar() != '\n'); // Limpia el buffer de entrada
            printf("Opcion: ");
        }
    }
}

// Funciones para calcular areas
void calcularAreaTriangulo() {
    float area;
    float base, altura;

    printf("\nCALCULO DEL AREA DEL TRIANGULO\n");
    printf("Base: ");
    scanf("%f", &base);
    printf("Altura: ");
    scanf("%f", &altura);

    area = base * altura / 2;
    printf("El area del triangulo es %.2f\n", area);
}

void calcularAreaTrapecio() {
    float area;
    float baseMayor, baseMenor, altura;

    printf("\nCALCULO DEL AREA DEL TRAPECIO\n");
    printf("Base mayor: ");
    scanf("%f", &baseMayor);
    printf("Base menor: ");
    scanf("%f", &baseMenor);
    printf("Altura del trapecio: ");
    scanf("%f", &altura);

    area = ((baseMayor + baseMenor) / 2) * altura;
    printf("El area del trapecio es %.2f\n", area);
}

void calcularAreaRectangulo() {
    float area;
    float base, altura;

    printf("\nCALCULO DEL AREA DEL RECTANGULO\n");
    printf("Base: ");
    scanf("%f", &base);
    printf("Altura: ");
    scanf("%f", &altura);

    area = base * altura;
    printf("El area del rectangulo es %.2f\n", area);
}
