#ifndef TIPODETRIANGULO_H
#define TIPODETRIANGULO_H

class Figura {
protected:
    int lados;

public:
    Figura(int l);
    virtual double calcularArea() = 0;   // Polimorfismo
    virtual ~Figura() {}
};

class Triangulo : public Figura {
private:
    double a, b, c;

public:
    Triangulo(double a, double b, double c);

    double calcularArea() override;

    // Clasificación
    const char* tipoPorLados();
    const char* tipoPorAngulos();
};

#endif
