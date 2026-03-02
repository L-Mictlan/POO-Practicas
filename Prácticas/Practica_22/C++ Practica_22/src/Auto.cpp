#include "Auto.h"

Auto::Auto(int p, int a) {
    precio = new int(p);
    anio = new int(a);
}

Auto::~Auto() {
    delete precio;
    delete anio;
}

int Auto::getPrecio() {
    return *precio;
}

int Auto::getAnio() {
    return *anio;
}