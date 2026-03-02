#include <iostream>
#include "Ordenador.h"

using namespace std;

int main()
{
    Ordenador o;

    int numeros[5] = {9,3,7,1,5};
    o.ordenarEnteros(numeros,5);

    Persona personas[3] = {
        {"Ana", 22},
        {"Luis", 18},
        {"Maria", 30}
    };

    o.ordenarPersonas(personas,3);

    cout << "\n\nPersonas ordenadas por edad:\n";
    for(int i=0;i<3;i++)
        cout << personas[i].nombre << " - " << personas[i].edad << endl;

    return 0;
}