#ifndef ESTADISTICAS_H
#define ESTADISTICAS_H

class Estadisticas {
private:
    int numeros[5];

public:
    void ingresarDatos();

    int suma();
    float promedio();
    float media();
    int maximo();
    int minimo();
};

#endif
