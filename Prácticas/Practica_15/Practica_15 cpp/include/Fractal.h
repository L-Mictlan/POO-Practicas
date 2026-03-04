#ifndef FRACTAL_H
#define FRACTAL_H

#include <string>
#include <vector>

class Fractal {
public:
    // Triángulo de Sierpinski
    void sierpinski(int nivel);

    // Polvo de Cantor
    void cantor(int nivel);

private:
    void dibujarSierpinski(std::vector<std::string>& canvas, int x, int y, int size);
    void cantorRec(int nivel, std::string linea);
};

#endif
