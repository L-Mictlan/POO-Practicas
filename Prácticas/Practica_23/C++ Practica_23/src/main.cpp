#include <iostream>
#include "ArchivoCSV.h"

using namespace std;

int main()
{
    ArchivoCSV a;

    a.escribir();
    cout << "Contenido del CSV:\n";
    a.leer();

    return 0;
}