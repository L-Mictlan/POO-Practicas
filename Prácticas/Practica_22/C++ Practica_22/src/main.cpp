#include <iostream>
#include "ListaAutos.h"
#include "ListaPersona.h"

using namespace std;

int main() {

    ListaAutos listaAutos;
    ListaPersonas listaPersonas;

    cout << "=== LISTA DE AUTOS ===" << endl;
    listaAutos.mostrarAutos();

    cout << "\n=== LISTA DE PERSONAS ===" << endl;
    listaPersonas.mostrarPersonas();

    return 0;
}