#ifndef LISTAPERSONAS_H
#define LISTAPERSONAS_H

#include "Persona.h"

class ListaPersonas {
private:
    Persona personas[3];
    Persona* ptrPersonas;   // 👈 puntero al arreglo

public:
    ListaPersonas();
    void mostrarPersonasIndirecto();
};

#endif
