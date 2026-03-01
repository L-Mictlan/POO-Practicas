#ifndef LISTA_PERSONAS_H
#define LISTA_PERSONAS_H

#include "Persona.h"

class ListaPersonas {
private:
    Persona personas[3];

public:
    ListaPersonas();
    void mostrarPersonas();
};

#endif
