#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
private:
    std::string nombre;
    std::string apellido;
    std::string am;
    std::string genero;
    int edad;

public:
    Persona(std::string nombre,
            std::string apellido,
            std::string am,
            std::string genero,
            int edad);

    void mostrarPersona();
};

#endif
