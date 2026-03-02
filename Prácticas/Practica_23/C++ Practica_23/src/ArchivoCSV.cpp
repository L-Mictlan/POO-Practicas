#include "ArchivoCSV.h"
#include <fstream>
#include <iostream>

void ArchivoCSV::escribir()
{
    ofstream archivo("datos.csv");

    archivo << "Nombre,Edad\n";
    archivo << "Ana,22\n";
    archivo << "Luis,18\n";

    archivo.close();
}

void ArchivoCSV::leer()
{
    ifstream archivo("datos.csv");
    string linea;

    while(getline(archivo,linea))
        cout << linea << endl;

    archivo.close();
}