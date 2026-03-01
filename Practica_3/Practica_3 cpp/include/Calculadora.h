#ifndef INTERFAZ_H
#define INTERFAZ_H

class Calculadora {
private:
    double a;
    double b;

public:
    // Constructor
    Calculadora(double x, double y);

    // Operaciones
    double sumar();
    double restar();
    double multiplicar();
    double dividir();
    double potencia();
    int residuo();
};

#endif
