#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {
private:
    string *nombre;
    int *edad;

public:
    Persona(string, int);
    ~Persona();

    string getNombre();
    int getEdad();
};

#endif