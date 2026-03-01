#include <iostream>
#include "Matriz.h"

using namespace std;

int main() {

    int f, c;

    cout << "Ingrese filas de la matriz A: ";
    cin >> f;
    cout << "Ingrese columnas de la matriz A: ";
    cin >> c;

    Matriz A(f, c);
    cout << "\nIngrese datos de la matriz A\n";
    A.ingresarDatos();

    cout << "\nMatriz A:\n";
    A.mostrarMatriz();

    // ===== A x constante =====
    int k;
    cout << "\nIngrese constante: ";
    cin >> k;

    Matriz Ak = A.multiplicarConstante(k);
    cout << "\nMatriz A x " << k << ":\n";
    Ak.mostrarMatriz();

    // ===== A x B =====
    int cB;
    cout << "\nIngrese columnas de la matriz B: ";
    cin >> cB;

    Matriz B(c, cB);
    cout << "\nIngrese datos de la matriz B\n";
    B.ingresarDatos();

    cout << "\nMatriz B:\n";
    B.mostrarMatriz();

    Matriz AB = A.multiplicarMatriz(B);
    cout << "\nMatriz A x B:\n";
    AB.mostrarMatriz();

    return 0;
}
