#ifndef HERENCIA_H
#define HERENCIA_H

class Calculadora {
protected:
    double resultado;

public:
    Calculadora();

    // 0 parámetros
    double obtenerResultado();

    // Operaciones básicas
    double sumar(double a);
    double restar(double a, double b);
    double multiplicar(double a, double b, double c);
    double dividir(double b);
};

// Clase derivada (hereda de Calculadora)
class CalculadoraCientifica : public Calculadora {
public:
    double potencia(double base, double exponente);
    int residuo(int a, int b);
};

#endif

