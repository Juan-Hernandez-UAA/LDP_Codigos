#include <iostream>
#include <cmath> // Para la función sqrt

int main() {
    double x1, x2, y1, y2, dist;

    std::cout << "Dame x1: ";
    std::cin >> x1;
    std::cout << "Dame x2: ";
    std::cin >> x2;
    std::cout << "Dame y1: ";
    std::cin >> y1;
    std::cout << "Dame y2: ";
    std::cin >> y2;

    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    std::cout << "La distancia entre los 2 puntos es: " << dist << std::endl;

    return 0;
}
