#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    double calificacion;
    string resultado;

    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;

    cout << "Dame una calificacion: ";
    cin >> calificacion;

    // Se asigna el mensaje a la variable resultado
    resultado = (
        (calificacion < 5) ? "Suspenso" :
        (calificacion >= 5 && calificacion < 7) ? "Aprobado" :
        (calificacion >= 7 && calificacion < 9) ? "Notable" :
        (calificacion >= 9 && calificacion < 10) ? "Sobresaliente" :
        (calificacion == 10) ? "Matricula de honor"
        :
        "calificacion no valida"
    );

    cout << resultado;
    return 0;
}