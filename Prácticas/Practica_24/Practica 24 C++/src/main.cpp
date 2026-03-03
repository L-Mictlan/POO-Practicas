#include <iostream>
#include <fstream>
#include "../include/Persona.h"

using namespace std;

int main() {

    int numero = 10;
    float decimal = 3.14;

    int arregloNormal[3] = {1,2,3};

    int n = 3;
    int* arregloDinamico = new int[n];
    for(int i=0; i<n; i++)
        arregloDinamico[i] = i + 5;

    Alumno alumno("Juan", 20, 9.5);

    ofstream archivo("datos.xml");

    archivo << "<Datos>\n";
    archivo << "  <Numero>" << numero << "</Numero>\n";
    archivo << "  <Decimal>" << decimal << "</Decimal>\n";

    archivo << "  <ArregloNormal>\n";
    for(int i=0;i<3;i++)
        archivo << "    <Elemento>" << arregloNormal[i] << "</Elemento>\n";
    archivo << "  </ArregloNormal>\n";

    archivo << "  <ArregloDinamico>\n";
    for(int i=0;i<n;i++)
        archivo << "    <Elemento>" << arregloDinamico[i] << "</Elemento>\n";
    archivo << "  </ArregloDinamico>\n";

    archivo << "  <Alumno>\n";
    archivo << "    <Nombre>" << alumno.getNombre() << "</Nombre>\n";
    archivo << "    <Edad>" << alumno.getEdad() << "</Edad>\n";
    archivo << "    <Promedio>" << alumno.getPromedio() << "</Promedio>\n";
    archivo << "  </Alumno>\n";

    archivo << "</Datos>";

    archivo.close();
    delete[] arregloDinamico;

    cout << "XML creado correctamente\n";
    return 0;
}
