#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad);
    virtual ~Persona();

    string getNombre() const;
    int getEdad() const;

    virtual string mostrar() const;
};

class Alumno : public Persona {
private:
    float promedio;

public:
    Alumno(string nombre, int edad, float promedio);
    ~Alumno();

    float getPromedio() const;
    string mostrar() const override;
};

#endif
