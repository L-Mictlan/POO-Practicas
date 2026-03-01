#include <iostream>
#include "Suma2num.h"

int main() {
    int num1 = 5;
    int num2 = 7;

    // Crear objeto usando parámetros
    Suma operacion(num1, num2);

    // Mostrar resultado
    std::cout << "La suma es: " << operacion.sumar() << std::endl;

    return 0;
}