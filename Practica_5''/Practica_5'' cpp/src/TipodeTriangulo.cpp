#include "TipodeTriangulo.h"
#include <cmath>

// ===== Figura =====
Figura::Figura(int l) : lados(l) {}

// ===== Triangulo =====
Triangulo::Triangulo(double a_, double b_, double c_)
    : Figura(3), a(a_), b(b_), c(c_) {}

double Triangulo::calcularArea() {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

const char* Triangulo::tipoPorLados() {
    if (a == b && b == c)
        return "Equilatero (60° cada angulo)";
    else if (a == b || a == c || b == c)
        return "Isosceles";
    else
        return "Escaleno";
}

const char* Triangulo::tipoPorAngulos() {
    double x = a, y = b, z = c;

    // ordenar lados (z mayor)
    if (x > z) std::swap(x, z);
    if (y > z) std::swap(y, z);
    if (x > y) std::swap(x, y);

    if (fabs(z*z - (x*x + y*y)) < 1e-6)
        return "Rectangulo";
    else if (z*z > x*x + y*y)
        return "Obtuso";
    else
        return "Agudo";
}
