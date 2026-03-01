#ifndef PROMEDIO_PUNTERO_H
#define PROMEDIO_PUNTERO_H

class PromedioPuntero {
private:
    int* datos;   // ← puntero al arreglo
    int tam;

public:
    PromedioPuntero();
    ~PromedioPuntero();

    void ingresarDatos();

    int suma();
    float promedio();
    float media();
    int maximo();
    int minimo();
};

#endif
