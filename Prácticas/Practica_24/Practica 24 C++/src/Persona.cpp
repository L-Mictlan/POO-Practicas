#include "../include/Persona.h"
#include <sstream>

Persona::Persona(string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
}

Persona::~Persona() {}

string Persona::getNombre() const {
    return nombre;
}

int Persona::getEdad() const {
    return edad;
}

string Persona::mostrar() const {
    return nombre + " - " + to_string(edad);
}

Alumno::Alumno(string nombre, int edad, float promedio)
    : Persona(nombre, edad) {
    this->promedio = promedio;
}

Alumno::~Alumno() {}

float Alumno::getPromedio() const {
    return promedio;
}

string Alumno::mostrar() const {
    stringstream ss;
    ss << Persona::mostrar() << " - Promedio: " << promedio;
    return ss.str();
}
