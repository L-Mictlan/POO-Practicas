#ifndef ORDENADORQUICK_H
#define ORDENADORQUICK_H

#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

class OrdenadorQuick {
private:
    void quickSortInt(int arr[], int low, int high);
    int partitionInt(int arr[], int low, int high);

    void quickSortChar(char arr[], int low, int high);
    int partitionChar(char arr[], int low, int high);

public:
    void ordenarEnteros(int arr[], int n);
    void ordenarCaracteres(char arr[], int n);
    void ordenarPersonas(Persona arr[], int n);
};

#endif