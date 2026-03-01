#include "Herencia.h"
#include <cmath>

// ===== Clase base =====
Calculadora::Calculadora() {
    resultado = 0;
}

double Calculadora::obtenerResultado() {
    return resultado;
}

double Calculadora::sumar(double a) {
    resultado += a;
    return resultado;
}

double Calculadora::restar(double a, double b) {
    resultado = a - b;
    return resultado;
}

double Calculadora::multiplicar(double a, double b, double c) {
    resultado = a * b * c;
    return resultado;
}

double Calculadora::dividir(double b) {
    if (b == 0)
        return 0;
    resultado = resultado / b;
    return resultado;
}

// ===== Clase derivada =====
double CalculadoraCientifica::potencia(double base, double exponente) {
    resultado = pow(base, exponente);
    return resultado;
}

int CalculadoraCientifica::residuo(int a, int b) {
    if (b == 0)
        return 0;
    return a % b;
}
