#include <iostream>
#include "CalculoFG.h"

int main() {
    int lados;
    std::cout << "=== Calculadora de Areas ===\n";
    std::cout << "Ingresa el numero de lados de la figura: ";
    std::cin >> lados;

    Figura* figura = nullptr;

    if (lados == 3) {
        double base, altura;
        std::cout << "Ingresa la base del triangulo: ";
        std::cin >> base;
        std::cout << "Ingresa la altura del triangulo: ";
        std::cin >> altura;
        figura = new Triangulo(base, altura);

    } else if (lados == 4) {
        double lado;
        std::cout << "Ingresa el lado del cuadrado: ";
        std::cin >> lado;
        figura = new Cuadrado(lado);

    } else if (lados >= 5) {
        double longitud;
        std::cout << "Ingresa la longitud de cada lado: ";
        std::cin >> longitud;
        figura = new PoligonoRegular(lados, longitud);

    } else {
        std::cout << "Una figura valida debe tener al menos 3 lados.\n";
        return 0;
    }

    std::cout << "El area de la figura de "
              << figura->getLados()
              << " lados es: "
              << figura->calcularArea()
              << std::endl;

    delete figura;
    return 0;
}
