#include <iostream>
#include <algorithm>
#include "PromedioPuntero.h"

using namespace std;

PromedioPuntero::PromedioPuntero() {
    tam = 5;
    datos = new int[tam];   // memoria dinámica
}

PromedioPuntero::~PromedioPuntero() {
    delete[] datos;         // liberar memoria
}

void PromedioPuntero::ingresarDatos() {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> *(datos + i);   // acceso indirecto
    }
}

int PromedioPuntero::suma() {
    int s = 0;
    for (int i = 0; i < tam; i++)
        s += *(datos + i);
    return s;
}

float PromedioPuntero::promedio() {
    return static_cast<float>(suma()) / tam;
}

float PromedioPuntero::media() {
    int temp[5];

    for (int i = 0; i < tam; i++)
        temp[i] = *(datos + i);

    sort(temp, temp + tam);
    return temp[tam / 2];
}

int PromedioPuntero::maximo() {
    int max = *datos;
    for (int i = 1; i < tam; i++)
        if (*(datos + i) > max)
            max = *(datos + i);
    return max;
}

int PromedioPuntero::minimo() {
    int min = *datos;
    for (int i = 1; i < tam; i++)
        if (*(datos + i) < min)
            min = *(datos + i);
    return min;
}
