#include "Fractal.h"
#include <iostream>

// ================= TRIÁNGULO DE SIERPINSKI =================

void Fractal::sierpinski(int nivel) {
    sierpinskiRec(nivel, "");
}

void Fractal::sierpinskiRec(int nivel, std::string espacio) {
    if (nivel == 0) {
        std::cout << espacio << "*\n";
        return;
    }

    sierpinskiRec(nivel - 1, espacio + " ");
    sierpinskiRec(nivel - 1, espacio + "* ");
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
