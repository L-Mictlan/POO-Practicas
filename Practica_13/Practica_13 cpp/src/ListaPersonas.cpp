#include "ListaPersonas.h"
#include <iostream>
using namespace std;

ListaPersonas::ListaPersonas() {
    personas[0] = Persona("Luis", "Guzman", "Perez", "Masculino", 20);
    personas[1] = Persona("Ana", "Lopez", "Martinez", "Femenino", 22);
    personas[2] = Persona("Carlos", "Hernandez", "Diaz", "Masculino", 25);

    // 👇 el puntero apunta al primer elemento del arreglo
    ptrPersonas = personas;
}

void ListaPersonas::mostrarPersonasIndirecto() {
    for (int i = 0; i < 3; i++) {
        (*(ptrPersonas + i)).mostrarPersona();
        // también válido:
        // (ptrPersonas + i)->mostrarPersona();
    }
}
