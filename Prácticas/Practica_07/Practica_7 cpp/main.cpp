#include <iostream>
#include "Auto.h"
#include "Persona.h"

using namespace std;

int main() {

    Auto auto1(250000, 2022);
    Persona persona1("Luis", "Guzman", "Perez", "Masculino", 20);

    cout << "=== DATOS DEL AUTO ===" << endl;
    auto1.mostrarAuto();

    cout << "\n=== DATOS DE LA PERSONA ===" << endl;
    persona1.mostrarPersona();

    return 0;
}
