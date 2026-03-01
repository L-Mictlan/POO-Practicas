#include <iostream>
#include "PromedioPuntero.h"

using namespace std;

int main() {

    PromedioPuntero pp;

    cout << "=== PROMEDIO CON PUNTERO AL ARREGLO (OOP) ===" << endl;

    pp.ingresarDatos();

    cout << "\nSuma: " << pp.suma() << endl;
    cout << "Promedio: " << pp.promedio() << endl;
    cout << "Media: " << pp.media() << endl;
    cout << "Maximo: " << pp.maximo() << endl;
    cout << "Minimo: " << pp.minimo() << endl;

    return 0;
}
