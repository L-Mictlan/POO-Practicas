#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora {
protected:
    int resultado;

public:
    Calculadora();

    int mostrarResultado();

    int sumar(int a);
    int restar(int a, int b);

    virtual int multiplicar(int a, int b);
    virtual int dividir(int a, int b);
    virtual int potencia(int a, int b);

    virtual ~Calculadora() {}
};

class CalculadoraIterativa : public Calculadora {
public:
    int multiplicar(int a, int b) override;
    int dividir(int a, int b) override;
    int potencia(int a, int b) override;
};

#endif
