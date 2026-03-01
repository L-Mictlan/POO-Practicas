#include <iostream>
#include "Persona.h"

using namespace std;

Persona::Persona(string nombre,
                 string apellido,
                 string am,
                 string genero,
                 int edad) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->am = am;
    this->genero = genero;
    this->edad = edad;
}

void Persona::mostrarPersona() {
    cout << "Persona: "
         << nombre << " "
         << apellido << " "
         << am << endl
         << "Genero: " << genero
         << ", Edad: " << edad << endl;
}
