#include "ListaAutos.h"
#include <iostream>
using namespace std;

ListaAutos::ListaAutos() {
    autos[0] = Auto(200000, 2020);
    autos[1] = Auto(350000, 2022);
    autos[2] = Auto(500000, 2024);
}

void ListaAutos::mostrarAutos() {
    for (int i = 0; i < 3; i++) {
        autos[i].mostrarAuto();
    }
}
