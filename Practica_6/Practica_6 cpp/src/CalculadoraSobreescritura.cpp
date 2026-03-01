#include "CalculadoraSobreescritura.h"
#include <iostream>

// ===== Clase base =====
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
    if (b == 0) {
        std::cout << "Error: division entre cero\n";
        return 0;
    }
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

// ===== Clase derivada =====

// 🔁 multiplicación con sumas sucesivas
int CalculadoraIterativa::multiplicar(int a, int b) {
    int r = 0;
    bool positivo = b >= 0;
    b = abs(b);

    for (int i = 0; i < b; i++)
        r += a;

    resultado = positivo ? r : -r;
    return resultado;
}

// 🔁 división con restas sucesivas
int CalculadoraIterativa::dividir(int a, int b) {
    if (b == 0) {
        std::cout << "Error: division entre cero\n";
        return 0;
    }

    int cociente = 0;
    bool positivo = (a >= 0) == (b >= 0);
    a = abs(a);
    b = abs(b);

    while (a >= b) {
        a -= b;
        cociente++;
    }

    resultado = positivo ? cociente : -cociente;
    return resultado;
}

// 🔁 potencia con multiplicaciones sucesivas
int CalculadoraIterativa::potencia(int a, int b) {
    if (b < 0) {
        std::cout << "Error: exponente negativo no soportado\n";
        return 0;
    }

    int r = 1;
    for (int i = 0; i < b; i++) {
        r = multiplicar(r, a);
    }

    resultado = r;
    return resultado;
}
