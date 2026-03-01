#include "Estadisticas.h"
#include <algorithm>
#include <iostream>

void Estadisticas::ingresarDatos() {
    for (int i = 0; i < 5; i++) {
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> numeros[i];
    }
}

int Estadisticas::suma() {
    int s = 0;
    for (int i = 0; i < 5; i++)
        s += numeros[i];
    return s;
}

float Estadisticas::promedio() {
    return static_cast<float>(suma()) / 5;
}

float Estadisticas::media() {
    int temp[5];
    for (int i = 0; i < 5; i++)
        temp[i] = numeros[i];

    std::sort(temp, temp + 5);
    return temp[2]; // posición central
}

int Estadisticas::maximo() {
    int max = numeros[0];
    for (int i = 1; i < 5; i++)
        if (numeros[i] > max)
            max = numeros[i];
    return max;
}

int Estadisticas::minimo() {
    int min = numeros[0];
    for (int i = 1; i < 5; i++)
        if (numeros[i] < min)
            min = numeros[i];
    return min;
}
