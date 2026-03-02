#ifndef AUTO_H
#define AUTO_H

class Auto {
private:
    int *precio;
    int *anio;

public:
    Auto(int, int);
    ~Auto();

    int getPrecio();
    int getAnio();
};

#endif