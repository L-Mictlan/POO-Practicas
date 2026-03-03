#include <iostream>
#include <fstream>
#include "../include/Persona.h"

using namespace std;

int main() {

    int numero = 7;
    float decimal = 1.9;

    int arregloNormal[3] = {7,8,9};

    int n = 3;
    int* arregloDinamico = new int[n];
    for(int i=0;i<n;i++)
        arregloDinamico[i] = i + 20;

    Alumno alumno("Carlos", 19, 8.7);

    ofstream archivo("datos.json");

    archivo << "{\n";
    archivo << "  \"Numero\": " << numero << ",\n";
    archivo << "  \"Decimal\": " << decimal << ",\n";
    archivo << "  \"ArregloNormal\": [7,8,9],\n";
    archivo << "  \"ArregloDinamico\": [20,21,22],\n";
    archivo << "  \"Alumno\": {\n";
    archivo << "    \"Nombre\": \"" << alumno.getNombre() << "\",\n";
    archivo << "    \"Edad\": " << alumno.getEdad() << ",\n";
    archivo << "    \"Promedio\": " << alumno.getPromedio() << "\n";
    archivo << "  }\n";
    archivo << "}";

    archivo.close();
    delete[] arregloDinamico;

    cout << "JSON creado correctamente\n";
    return 0;
}
