#include "Auto.h"
#include <iostream>
using namespace std;

Auto::Auto() {
    precio = 0;
    anio = 0;
}

Auto::Auto(int precio, int anio) {
    this->precio = precio;
    this->anio = anio;
}

void Auto::mostrarAuto() {
    cout << "Auto | Año: " << anio << " | Precio: $" << precio << endl;
}
