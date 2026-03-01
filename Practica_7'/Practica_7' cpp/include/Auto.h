#ifndef AUTO_H
#define AUTO_H

class Auto {
private:
    double precio;
    int anio;

public:
    Auto(double precio, int anio);

    double getPrecio();
    int getAnio();

    void mostrarAuto();
};

#endif
