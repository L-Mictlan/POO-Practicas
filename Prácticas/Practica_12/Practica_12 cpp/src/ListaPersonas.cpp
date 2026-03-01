#include "ListaPersonas.h"
#include <iostream>
using namespace std;

ListaPersonas::ListaPersonas() {
    personas[0] = Persona("Luis", "Guzman", "Perez", "Masculino", 20);
    personas[1] = Persona("Ana", "Lopez", "Martinez", "Femenino", 22);
    personas[2] = Persona("Carlos", "Hernandez", "Diaz", "Masculino", 25);
}

void ListaPersonas::mostrarPersonas() {
    for (int i = 0; i < 3; i++) {
        personas[i].mostrarPersona();
    }
}
