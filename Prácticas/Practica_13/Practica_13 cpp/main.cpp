#include <iostream>
#include "ListaPersonas.h"

using namespace std;

int main() {
    ListaPersonas lista;

    cout << "=== LISTA DE PERSONAS (ACCESO INDIRECTO) ===" << endl;
    lista.mostrarPersonasIndirecto();

    return 0;
}
