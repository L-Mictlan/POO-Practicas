#include <iostream>
#include "PromedioArreglo.h"

using namespace std;

int main() {

    PromedioArreglo pa;

    cout << "=== PROMEDIO CON ARREGLO (OOP) ===" << endl;

    pa.ingresarDatos();

    cout << "\nSuma: " << pa.suma() << endl;
    cout << "Promedio: " << pa.promedio() << endl;
    cout << "Media: " << pa.media() << endl;
    cout << "Maximo: " << pa.maximo() << endl;
    cout << "Minimo: " << pa.minimo() << endl;

    return 0;
}
