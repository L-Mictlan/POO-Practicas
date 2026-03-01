#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona() {
    nombre = apellidoP = apellidoM = genero = "";
    edad = 0;
}

Persona::Persona(string n, string ap, string am, string g, int e) {
    nombre = n;
    apellidoP = ap;
    apellidoM = am;
    genero = g;
    edad = e;
}

void Persona::mostrarPersona() {
    cout << "Persona: " << nombre << " "
         << apellidoP << " "
         << apellidoM << " | "
         << genero << " | Edad: "
         << edad << endl;
}
