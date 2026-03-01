#ifndef FRACTAL_H
#define FRACTAL_H

#include <string>

class Fractal {
public:
    // Triángulo de Sierpinski
    void sierpinski(int nivel);

    // Polvo de Cantor
    void cantor(int nivel);

private:
    void sierpinskiRec(int nivel, std::string espacio);
    void cantorRec(int nivel, std::string linea);
};

#endif
