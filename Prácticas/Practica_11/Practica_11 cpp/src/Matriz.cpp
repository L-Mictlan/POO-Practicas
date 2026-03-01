#include <iostream>
#include "Matriz.h"

using namespace std;

// ================= CONSTRUCTOR =================
Matriz::Matriz(int f, int c) {
    filas = f;
    columnas = c;

    datos = new int*[filas];
    for (int i = 0; i < filas; i++)
        datos[i] = new int[columnas];
}

// ================= DESTRUCTOR =================
Matriz::~Matriz() {
    for (int i = 0; i < filas; i++)
        delete[] datos[i];
    delete[] datos;
}

// ================= INGRESAR DATOS =================
void Matriz::ingresarDatos() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> datos[i][j];
        }
    }
}

// ================= MOSTRAR MATRIZ =================
void Matriz::mostrarMatriz() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++)
            cout << datos[i][j] << "\t";
        cout << endl;
    }
}

// ================= A × CONSTANTE =================
Matriz Matriz::multiplicarConstante(int k) {
    Matriz resultado(filas, columnas);

    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            resultado.datos[i][j] = datos[i][j] * k;

    return resultado;
}

// ================= A × B =================
Matriz Matriz::multiplicarMatriz(Matriz &B) {

    Matriz resultado(filas, B.columnas);

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < B.columnas; j++) {
            resultado.datos[i][j] = 0;
            for (int k = 0; k < columnas; k++) {
                resultado.datos[i][j] += datos[i][k] * B.datos[k][j];
            }
        }
    }

    return resultado;
}
