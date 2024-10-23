#include <iostream>
#include <cmath> // Para la función pow

int main() {
    int num;
    double v, val;

    std::cout << "Dame num: ";
    std::cin >> num;
    std::cout << "Dame v: ";
    std::cin >> v;

    // Uso de operadores ternarios
    val = (num == 1) ? 100 * v :
          (num == 2) ? pow(100, v) :
          (num == 3) ? 100 / v : 0;

    std::cout << "Val = " << val << std::endl;

    return 0;
}
