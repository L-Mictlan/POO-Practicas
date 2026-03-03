#include <iostream>
#include "OrdenadorQuick.h"

using namespace std;

int main() {

    OrdenadorQuick o;

    int nums[5] = {9,4,7,1,3};
    char letras[5] = {'z','a','m','b','x'};
    Persona personas[3] = {
        {"Luis",20},
        {"Ana",22},
        {"Carlos",18}
    };

    o.ordenarEnteros(nums,5);
    o.ordenarCaracteres(letras,5);
    o.ordenarPersonas(personas,3);

    cout << "Enteros ordenados:\n";
    for(int i=0;i<5;i++) cout << nums[i] << " ";

    cout << "\nCaracteres ordenados:\n";
    for(int i=0;i<5;i++) cout << letras[i] << " ";

    cout << "\nPersonas ordenadas por edad:\n";
    for(int i=0;i<3;i++)
        cout << personas[i].nombre << " " << personas[i].edad << endl;

    return 0;
}