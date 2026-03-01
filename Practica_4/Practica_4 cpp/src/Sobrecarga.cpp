#include "Sobrecarga.h"
#include <cmath>

// Constructor
Calculadora::Calculadora() {
    resultado = 0;
}

// 0 parámetros
double Calculadora::obtenerResultado() {
    return resultado;
}

// 1 parámetro
double Calculadora::sumar(double a) {
    resultado += a;
    return resultado;
}

// 2 parámetros
double Calculadora::restar(double a, double b) {
    resultado = a - b;
    return resultado;
}

// 3 parámetros
double Calculadora::multiplicar(double a, double b, double c) {
    resultado = a * b * c;
    return resultado;
}

// 1 parámetro (usa resultado previo)
double Calculadora::dividir(double b) {
    if (b == 0)
        return 0;
    resultado = resultado / b;
    return resultado;
}

// 2 parámetros
double Calculadora::potencia(double base, double exponente) {
    resultado = pow(base, exponente);
    return resultado;
}

// 2 parámetros enteros
int Calculadora::residuo(int a, int b) {
    if (b == 0)
        return 0;
    return a % b;
}
