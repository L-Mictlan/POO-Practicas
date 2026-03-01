#include <iostream>
#include "Fractal.h"

int main() {
    Fractal f;
    int opcion, nivel;

    std::cout << "=== FRACTALES RECURSIVOS (POO) ===\n";
    std::cout << "1. Triángulo de Sierpinski\n";
    std::cout << "2. Polvo de Cantor\n";
    std::cout << "Opción: ";
    std::cin >> opcion;

    std::cout << "Nivel de recursión: ";
    std::cin >> nivel;

    std::cout << "\n";

    if (opcion == 1) {
        f.sierpinski(nivel);
    }
    else if (opcion == 2) {
        f.cantor(nivel);
    }
    else {
        std::cout << "Opción no válida\n";
    }

    return 0;
}
