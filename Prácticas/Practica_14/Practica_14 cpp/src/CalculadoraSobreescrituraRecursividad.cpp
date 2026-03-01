#include "CalculadoraSobreescrituraRecursividad.h"

// =========================
// Calculadora base
// =========================
Calculadora::Calculadora() {
    resultado = 0;
}

int Calculadora::mostrarResultado() {
    return resultado;
}

int Calculadora::sumar(int a) {
    resultado += a;
    return resultado;
}

int Calculadora::restar(int a, int b) {
    resultado = a - b;
    return resultado;
}

int Calculadora::multiplicar(int a, int b) {
    resultado = a * b;
    return resultado;
}

int Calculadora::dividir(int a, int b) {
    if (b == 0)
        return 0;
    resultado = a / b;
    return resultado;
}

int Calculadora::potencia(int a, int b) {
    int r = 1;
    for (int i = 0; i < b; i++)
        r *= a;
    resultado = r;
    return resultado;
}

// =========================
// Calculadora Recursiva
// =========================

// 🔁 multiplicación recursiva
int CalculadoraRecursiva::multiplicar(int a, int b) {
    if (b == 0)
        return 0;
    if (b < 0)
        return -multiplicar(a, -b);

    return a + multiplicar(a, b - 1);
}

// 🔁 potencia recursiva
int CalculadoraRecursiva::potencia(int a, int b) {
    if (b == 0)
        return 1;
    if (b < 0)
        return 0;

    return multiplicar(a, potencia(a, b - 1));
}

// 🔁 factorial recursivo
int CalculadoraRecursiva::factorial(int n) {
    if (n < 0)
        return 0;
    if (n == 0 || n == 1)
        return 1;

    return multiplicar(n, factorial(n - 1));
}

// 🔁 fibonacci recursivo
int CalculadoraRecursiva::fibonacci(int n) {
    if (n < 0)
        return 0;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}
