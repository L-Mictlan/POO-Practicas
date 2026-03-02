#include <iostream>
#include "ListaAutos.h"

using namespace std;

ListaAutos::ListaAutos() {
    cantidad = 3;

    autos = new Auto*[cantidad];

    autos[0] = new Auto(200000, 2020);
    autos[1] = new Auto(300000, 2022);
    autos[2] = new Auto(150000, 2018);
}

ListaAutos::~ListaAutos() {
    for(int i = 0; i < cantidad; i++)
        delete autos[i];

    delete[] autos;
}

void ListaAutos::mostrarAutos() {
    for(int i = 0; i < cantidad; i++) {
        cout << "Auto " << i+1
             << " | Precio: " << autos[i]->getPrecio()
             << " | Año: " << autos[i]->getAnio()
             << endl;
    }
}