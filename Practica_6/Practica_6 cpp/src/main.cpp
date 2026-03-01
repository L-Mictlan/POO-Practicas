#include <iostream>
#include "CalculadoraSobreescritura.h"

using namespace std;

int main() {
    CalculadoraIterativa calc;
    int opcion, a, b;

    do {
        cout << "\n=== CALCULADORA ITERATIVA (POO) ===\n";
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar (sumas sucesivas)\n";
        cout << "4. Dividir (restas sucesivas)\n";
        cout << "5. Potencia (multiplicaciones sucesivas)\n";
        cout << "6. Mostrar resultado\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Numero: ";
            cin >> a;
            cout << "Resultado: " << calc.sumar(a) << endl;
            break;

        case 2:
            cout << "A: ";
            cin >> a;
            cout << "B: ";
            cin >> b;
            cout << "Resultado: " << calc.restar(a, b) << endl;
            break;

        case 3:
            cout << "A: ";
            cin >> a;
            cout << "B: ";
            cin >> b;
            cout << "Resultado: " << calc.multiplicar(a, b) << endl;
            break;

        case 4:
            cout << "Dividendo: ";
            cin >> a;
            cout << "Divisor: ";
            cin >> b;
            cout << "Resultado: " << calc.dividir(a, b) << endl;
            break;

        case 5:
            cout << "Base: ";
            cin >> a;
            cout << "Exponente: ";
            cin >> b;
            cout << "Resultado: " << calc.potencia(a, b) << endl;
            break;

        case 6:
            cout << "Resultado actual: " << calc.mostrarResultado() << endl;
            break;
        }

    } while (opcion != 0);

    return 0;
}
