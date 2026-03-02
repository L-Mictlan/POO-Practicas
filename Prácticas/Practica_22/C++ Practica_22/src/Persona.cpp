#include "Persona.h"

Persona::Persona(string n, int e) {
    nombre = new string(n);
    edad = new int(e);
}

Persona::~Persona() {
    delete nombre;
    delete edad;
}

string Persona::getNombre() {
    return *nombre;
}

int Persona::getEdad() {
    return *edad;
}