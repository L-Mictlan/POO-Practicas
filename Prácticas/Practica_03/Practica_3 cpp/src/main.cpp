#include <iostream>
#include "Calculadora.h"

int main() {
    double num1, num2;
    int opcion;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    Calculadora calc(num1, num2);

    std::cout << "\n--- CALCULADORA ---\n";
    std::cout << "1. Suma\n";
    std::cout << "2. Resta\n";
    std::cout << "3. Multiplicacion\n";
    std::cout << "4. Division\n";
    std::cout << "5. Potencia\n";
    std::cout << "6. Residuo\n";
    std::cout << "Seleccione una opcion: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            std::cout << "Resultado: " << calc.sumar() << std::endl;
            break;
        case 2:
            std::cout << "Resultado: " << calc.restar() << std::endl;
            break;
        case 3:
            std::cout << "Resultado: " << calc.multiplicar() << std::endl;
            break;
        case 4:
            if (num2 == 0)
                std::cout << "Error: division entre cero";
            else
                std::cout << "Resultado: " << calc.dividir() << std::endl;
            break;
        case 5:
            std::cout << "Resultado: " << calc.potencia() << std::endl;
            break;
        case 6:
            std::cout << "Resultado: " << calc.residuo() << std::endl;
            break;
        default:
            std::cout << "Opcion no valida" << std::endl;
    }

    return 0;
}
