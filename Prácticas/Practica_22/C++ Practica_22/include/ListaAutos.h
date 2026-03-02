#ifndef LISTAAUTOS_H
#define LISTAAUTOS_H

#include "Auto.h"

class ListaAutos {
private:
    Auto **autos;
    int cantidad;

public:
    ListaAutos();
    ~ListaAutos();

    void mostrarAutos();
};

#endif