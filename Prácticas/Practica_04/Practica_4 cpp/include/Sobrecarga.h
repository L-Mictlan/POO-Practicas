#ifndef INTERFAZ_H
#define INTERFAZ_H

class Calculadora {
private:
    double resultado;

public:
    // Constructor
    Calculadora();

    // 0 parámetros
    double obtenerResultado();

    // 1 parámetro
    double sumar(double a);

    // 2 parámetros
    double restar(double a, double b);

    // 3 parámetros
    double multiplicar(double a, double b, double c);

    // 1 parámetro (división usando el estado interno)
    double dividir(double b);

    // 2 parámetros
    double potencia(double base, double exponente);

    // 2 parámetros enteros
    int residuo(int a, int b);
};

#endif
