#include "Fractal.h"
#include <iostream>
#include <vector>
#include <cmath>

// ================= TRIÁNGULO DE SIERPINSKI =================

void Fractal::sierpinski(int nivel) {
    int altura = pow(2, nivel);
    int ancho = 2 * altura - 1;

    std::vector<std::string> canvas(altura, std::string(ancho, ' '));

    dibujarSierpinski(canvas, 0, altura - 1, altura);

    for (const auto& fila : canvas) {
        std::cout << fila << std::endl;
    }
}

void Fractal::dibujarSierpinski(std::vector<std::string>& canvas,
                                int x, int y, int size) {
    if (size == 1) {
        canvas[x][y] = '*';
        return;
    }

    int mitad = size / 2;

    // Arriba
    dibujarSierpinski(canvas, x, y, mitad);

    // Abajo izquierda
    dibujarSierpinski(canvas, x + mitad, y - mitad, mitad);

    // Abajo derecha
    dibujarSierpinski(canvas, x + mitad, y + mitad, mitad);
}
// ================= POLVO DE CANTOR =================

void Fractal::cantor(int nivel) {
    std::string linea(81, '-');
    cantorRec(nivel, linea);
}

void Fractal::cantorRec(int nivel, std::string linea) {
    if (nivel == 0)
        return;

    std::cout << linea << std::endl;

    int tercio = linea.length() / 3;
    for (int i = tercio; i < 2 * tercio; i++) {
        linea[i] = ' ';
    }

    cantorRec(nivel - 1, linea);
}
