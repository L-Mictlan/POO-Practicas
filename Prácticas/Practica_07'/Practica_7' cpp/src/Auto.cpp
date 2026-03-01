#include <iostream>
#include "Auto.h"

using namespace std;

Auto::Auto(double precio, int anio) {
    this->precio = precio;
    this->anio = anio;
}

double Auto::getPrecio() {
    return precio;
}

int Auto::getAnio() {
    return anio;
}

void Auto::mostrarAuto() {
    cout << "Auto -> Año: " << anio
         << ", Precio: $" << precio << endl;
}
