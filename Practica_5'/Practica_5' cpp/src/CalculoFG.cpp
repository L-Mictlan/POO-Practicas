#include "CalculoFG.h"
#include <cmath>

// ===== Figura =====
Figura::Figura(int lados) : lados(lados) {}

int Figura::getLados() {
    return lados;
}

// ===== Triangulo =====
Triangulo::Triangulo(double base, double altura)
    : Figura(3), base(base), altura(altura) {}

double Triangulo::calcularArea() {
    return (base * altura) / 2;
}

// ===== Cuadrado =====
Cuadrado::Cuadrado(double lado)
    : Figura(4), lado(lado) {}

double Cuadrado::calcularArea() {
    return lado * lado;
}

// ===== Poligono Regular =====
PoligonoRegular::PoligonoRegular(int lados, double longitudLado)
    : Figura(lados), longitudLado(longitudLado) {}

double PoligonoRegular::calcularArea() {
    return (lados * longitudLado * longitudLado) /
           (4 * tan(M_PI / lados));
}
