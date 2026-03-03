#include <iostream>
#include <fstream>
#include "../include/Persona.h"

using namespace std;

int main() {

    int numero = 5;
    float decimal = 2.5;

    int arregloNormal[3] = {4,5,6};

    int n = 3;
    int* arregloDinamico = new int[n];
    for(int i=0;i<n;i++)
        arregloDinamico[i] = i + 10;

    Alumno alumno("Ana", 22, 9.8);

    ofstream archivo("datos.txt");

    archivo << numero << endl;
    archivo << decimal << endl;

    for(int i=0;i<3;i++)
        archivo << arregloNormal[i] << " ";
    archivo << endl;

    for(int i=0;i<n;i++)
        archivo << arregloDinamico[i] << " ";
    archivo << endl;

    archivo << alumno.getNombre() << " "
            << alumno.getEdad() << " "
            << alumno.getPromedio() << endl;

    archivo.close();
    delete[] arregloDinamico;

    cout << "TXT creado correctamente\n";
    return 0;
}
