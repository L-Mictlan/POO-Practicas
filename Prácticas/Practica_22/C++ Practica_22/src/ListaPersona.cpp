#include <iostream>
#include "ListaPersona.h"

using namespace std;

ListaPersonas::ListaPersonas() {
    cantidad = 3;

    personas = new Persona*[cantidad];

    personas[0] = new Persona("Luis", 20);
    personas[1] = new Persona("Ana", 22);
    personas[2] = new Persona("Carlos", 25);
}

ListaPersonas::~ListaPersonas() {
    for(int i = 0; i < cantidad; i++)
        delete personas[i];

    delete[] personas;
}

void ListaPersonas::mostrarPersonas() {
    for(int i = 0; i < cantidad; i++) {
        cout << "Persona " << i+1
             << " | Nombre: " << personas[i]->getNombre()
             << " | Edad: " << personas[i]->getEdad()
             << endl;
    }
}