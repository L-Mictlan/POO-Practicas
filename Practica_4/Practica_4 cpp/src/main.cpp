#include <iostream>
#include "Sobrecarga.h"

int main() {
    Calculadora calc;

    std::cout << "Resultado inicial: "
              << calc.obtenerResultado() << std::endl;

    std::cout << "Suma (1 parametro): "
              << calc.sumar(10) << std::endl;

    std::cout << "Resta (2 parametros): "
              << calc.restar(20, 5) << std::endl;

    std::cout << "Multiplicacion (3 parametros): "
              << calc.multiplicar(2, 3, 4) << std::endl;

    std::cout << "Division (1 parametro): "
              << calc.dividir(2) << std::endl;

    std::cout << "Potencia (2 parametros): "
              << calc.potencia(2, 3) << std::endl;

    std::cout << "Residuo (int): "
              << calc.residuo(10, 3) << std::endl;

    std::cout << "Resultado final: "
              << calc.obtenerResultado() << std::endl;

    return 0;
}
