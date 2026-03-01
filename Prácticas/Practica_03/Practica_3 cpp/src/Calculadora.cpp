#include "Calculadora.h"
#include <cmath>   // pow()

Calculadora::Calculadora(double x, double y) {
    a = x;
    b = y;
}

double Calculadora::sumar() {
    return a + b;
}

double Calculadora::restar() {
    return a - b;
}

double Calculadora::multiplicar() {
    return a * b;
}

double Calculadora::dividir() {
    if (b == 0)
        return 0; // manejo simple de error
    return a / b;
}

double Calculadora::potencia() {
    return pow(a, b);
}

int Calculadora::residuo() {
    return static_cast<int>(a) % static_cast<int>(b);
}
