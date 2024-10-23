#include <iostream>

int main() {
    double cal;
    std::cout << "Dame la calificación: ";
    std::cin >> cal;

    std::string resultado = (cal < 5) ? "Suspenso" :
                            (cal >= 5 && cal < 7) ? "Aprobado" :
                            (cal >= 7 && cal < 9) ? "Notable" :
                            (cal >= 9 && cal < 10) ? "Sobresaliente" :
                            (cal == 10) ? "Matricula de honor" : "Calificación inválida";

    std::cout << resultado << std::endl;

    return 0;
}