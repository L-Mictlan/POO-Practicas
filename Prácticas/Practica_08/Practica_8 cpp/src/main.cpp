#include <iostream>
#include "Estadisticas.h"

using namespace std;

int main() {

    Estadisticas stats;

    cout << "=== PROGRAMA DE PROMEDIO (OOP) ===" << endl;

    stats.ingresarDatos();

    cout << "\nSuma: " << stats.suma() << endl;
    cout << "Promedio: " << stats.promedio() << endl;
    cout << "Media: " << stats.media() << endl;
    cout << "Maximo: " << stats.maximo() << endl;
    cout << "Minimo: " << stats.minimo() << endl;

    return 0;
}
