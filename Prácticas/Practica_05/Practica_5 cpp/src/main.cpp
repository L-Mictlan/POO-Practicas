#include <iostream>
#include "Herencia.h"

int main() {
    CalculadoraCientifica calc;
    int opcion;

    do {
        std::cout << "\n=== CALCULADORA OOP CON HERENCIA ===\n";
        std::cout << "1. Sumar (1 parametro)\n";
        std::cout << "2. Restar (2 parametros)\n";
        std::cout << "3. Multiplicar (3 parametros)\n";
        std::cout << "4. Dividir (1 parametro)\n";
        std::cout << "5. Potencia (herencia)\n";
        std::cout << "6. Residuo (herencia)\n";
        std::cout << "7. Mostrar resultado\n";
        std::cout << "0. Salir\n";
        std::cout << "Opcion: ";
        std::cin >> opcion;

        double a, b, c;

        switch (opcion) {
            case 1:
                std::cout << "Numero: ";
                std::cin >> a;
                std::cout << "Resultado: " << calc.sumar(a) << std::endl;
                break;

            case 2:
                std::cout << "A: ";
                std::cin >> a;
                std::cout << "B: ";
                std::cin >> b;
                std::cout << "Resultado: " << calc.restar(a, b) << std::endl;
                break;

            case 3:
                std::cout << "A: ";
                std::cin >> a;
                std::cout << "B: ";
                std::cin >> b;
                std::cout << "C: ";
                std::cin >> c;
                std::cout << "Resultado: " << calc.multiplicar(a, b, c) << std::endl;
                break;

            case 4:
                std::cout << "Divisor: ";
                std::cin >> b;
                std::cout << "Resultado: " << calc.dividir(b) << std::endl;
                break;

            case 5:
                std::cout << "Base: ";
                std::cin >> a;
                std::cout << "Exponente: ";
                std::cin >> b;
                std::cout << "Resultado: " << calc.potencia(a, b) << std::endl;
                break;

            case 6:
                int x, y;
                std::cout << "A (entero): ";
                std::cin >> x;
                std::cout << "B (entero): ";
                std::cin >> y;
                std::cout << "Resultado: " << calc.residuo(x, y) << std::endl;
                break;

            case 7:
                std::cout << "Resultado actual: "
                          << calc.obtenerResultado() << std::endl;
                break;

            case 0:
                std::cout << "Saliendo...\n";
                break;

            default:
                std::cout << "Opcion no valida\n";
        }

    } while (opcion != 0);

    return 0;
}
