#include <iostream>
#include <algorithm>
#include "PromedioArreglo.h"

using namespace std;

void PromedioArreglo::ingresarDatos() {
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> datos[i];
    }
}

int PromedioArreglo::suma() {
    int s = 0;
    for (int i = 0; i < 5; i++)
        s += datos[i];
    return s;
}

float PromedioArreglo::promedio() {
    return static_cast<float>(suma()) / 5;
}

float PromedioArreglo::media() {
    int temp[5];

    for (int i = 0; i < 5; i++)
        temp[i] = datos[i];

    sort(temp, temp + 5);
    return temp[2];   // elemento central
}

int PromedioArreglo::maximo() {
    int max = datos[0];
    for (int i = 1; i < 5; i++)
        if (datos[i] > max)
            max = datos[i];
    return max;
}

int PromedioArreglo::minimo() {
    int min = datos[0];
    for (int i = 1; i < 5; i++)
        if (datos[i] < min)
            min = datos[i];
    return min;
}
