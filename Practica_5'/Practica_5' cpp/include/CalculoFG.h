#ifndef AREAFIGS_H
#define AREAFIGS_H

// ===== Clase base =====
class Figura {
protected:
    int lados;

public:
    Figura(int lados);
    virtual double calcularArea() = 0; // método abstracto
    int getLados();
    virtual ~Figura() {}
};

// ===== Clases hijas =====
class Triangulo : public Figura {
private:
    double base;
    double altura;

public:
    Triangulo(double base, double altura);
    double calcularArea() override;
};

class Cuadrado : public Figura {
private:
    double lado;

public:
    Cuadrado(double lado);
    double calcularArea() override;
};

class PoligonoRegular : public Figura {
private:
    double longitudLado;

public:
    PoligonoRegular(int lados, double longitudLado);
    double calcularArea() override;
};

#endif

