#ifndef PROMEDIO_ARREGLO_H
#define PROMEDIO_ARREGLO_H

class PromedioArreglo {
private:
    int datos[5];   // ← una sola variable (arreglo)

public:
    void ingresarDatos();

    int suma();
    float promedio();
    float media();
    int maximo();
    int minimo();
};

#endif
