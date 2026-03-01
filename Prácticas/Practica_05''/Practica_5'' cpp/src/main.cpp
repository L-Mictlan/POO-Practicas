#include <iostream>
#include "TipodeTriangulo.h"

int main() {
    double a, b, c;

    std::cout << "=== Calculadora de Triangulos ===\n";
    std::cout << "Ingresa el lado A: ";
    std::cin >> a;
    std::cout << "Ingresa el lado B: ";
    std::cin >> b;
    std::cout << "Ingresa el lado C: ";
    std::cin >> c;

    // Validación del triángulo
    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "Los lados no forman un triangulo valido.\n";
        return 0;
    }

    Triangulo t(a, b, c);

    std::cout << "\n--- Resultados ---\n";
    std::cout << "Area: " << t.calcularArea() << std::endl;
    std::cout << "Tipo por lados: " << t.tipoPorLados() << std::endl;
    std::cout << "Tipo por angulos: " << t.tipoPorAngulos() << std::endl;

    return 0;
}
