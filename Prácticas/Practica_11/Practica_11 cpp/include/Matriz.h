#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz {
private:
    int filas;
    int columnas;
    int **datos;

public:
    Matriz(int f, int c);
    ~Matriz();

    void ingresarDatos();
    void mostrarMatriz();

    Matriz multiplicarConstante(int k);
    Matriz multiplicarMatriz(Matriz &B);
};

#endif
