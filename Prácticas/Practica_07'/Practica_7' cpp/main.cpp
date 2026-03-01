#include <iostream>
#include <string>
#include "Auto.h"
#include "Persona.h"

using namespace std;

int main() {

    cout << "=== TAMANIO DE TIPOS DE DATOS BASICOS ===" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "bool: " << sizeof(bool) << " bytes" << endl;
    cout << "string: " << sizeof(string) << " bytes" << endl;

    cout << "\n=== TAMANIO DE TIPOS DE DATOS CREADOS (OOP) ===" << endl;
    cout << "Auto: " << sizeof(Auto) << " bytes" << endl;
    cout << "Persona: " << sizeof(Persona) << " bytes" << endl;

    cout << "\n=== TAMANIO DE OBJETOS ===" << endl;
    Auto auto1(250000, 2022);
    Persona persona1("Luis", "Guzman", "Perez", "Masculino", 20);

    cout << "Objeto Auto: " << sizeof(auto1) << " bytes" << endl;
    cout << "Objeto Persona: " << sizeof(persona1) << " bytes" << endl;

    return 0;
}
