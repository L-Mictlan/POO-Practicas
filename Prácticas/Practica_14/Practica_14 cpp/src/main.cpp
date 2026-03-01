#include <iostream>
#include "CalculadoraSobreescrituraRecursividad.h"

using namespace std;

int main() {
    CalculadoraRecursiva calc;
    int opcion;

    do {
        cout << "\n=== CALCULADORA RECURSIVA ===\n";
        cout << "1. Multiplicar (recursiva)\n";
        cout << "2. Potencia (recursiva)\n";
        cout << "3. Factorial (recursivo)\n";
        cout << "4. Fibonacci (recursivo)\n";
        cout << "5. Mostrar resultado\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        int a, b, n;

        switch (opcion) {
        case 1:
            cout << "A: ";
            cin >> a;
            cout << "B: ";
            cin >> b;
            cout << "Resultado: " << calc.multiplicar(a, b) << endl;
            break;

        case 2:
            cout << "Base: ";
            cin >> a;
            cout << "Exponente: ";
            cin >> b;
            cout << "Resultado: " << calc.potencia(a, b) << endl;
            break;

        case 3:
            cout << "Numero: ";
            cin >> n;
            cout << "Resultado: " << calc.factorial(n) << endl;
            break;

        case 4:
            cout << "Posicion: ";
            cin >> n;
            cout << "Resultado: " << calc.fibonacci(n) << endl;
            break;

        case 5:
            cout << "Resultado actual: " << calc.mostrarResultado() << endl;
            break;

        case 0:
            cout << "Saliendo...\n";
            break;

        default:
            cout << "Opcion no valida\n";
        }

    } while (opcion != 0);

    return 0;
}
