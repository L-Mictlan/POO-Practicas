#ifndef CALCULADORA_SOBREESCRITURA_RECURSIVIDAD_H
#define CALCULADORA_SOBREESCRITURA_RECURSIVIDADH

class Calculadora {
protected:
    int resultado;

public:
    Calculadora();

    int mostrarResultado();

    virtual int sumar(int a);
    virtual int restar(int a, int b);
    virtual int multiplicar(int a, int b);
    virtual int dividir(int a, int b);
    virtual int potencia(int a, int b);
};

// =========================
// Calculadora Recursiva
// =========================
class CalculadoraRecursiva : public Calculadora {
public:
    int multiplicar(int a, int b) override;
    int potencia(int a, int b) override;

    int factorial(int n);
    int fibonacci(int n);
};

#endif
