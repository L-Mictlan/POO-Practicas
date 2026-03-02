#ifndef ORDENADOR_H
#define ORDENADOR_H

#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

class Ordenador {
    private:
        void quickSort(int arr[], int index[], int low, int high);
        int partition(int arr[], int index[], int low, int high);

    public:
        void ordenarEnteros(int arr[], int n);
        void ordenarPersonas(Persona arr[], int n);
};

#endif