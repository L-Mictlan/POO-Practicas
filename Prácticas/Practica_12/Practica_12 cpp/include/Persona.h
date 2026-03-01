#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {
private:
    string nombre, apellidoP, apellidoM, genero;
    int edad;

public:
    Persona();
    Persona(string nombre, string ap, string am, string genero, int edad);

    void mostrarPersona();
};

#endif
