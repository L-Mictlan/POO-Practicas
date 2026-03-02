#ifndef LISTAPERSONAS_H
#define LISTAPERSONAS_H

#include "Persona.h"

class ListaPersonas {
private:
    Persona **personas;
    int cantidad;

public:
    ListaPersonas();
    ~ListaPersonas();

    void mostrarPersonas();
};

#endif