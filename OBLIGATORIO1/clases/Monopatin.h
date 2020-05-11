#ifndef Monopatin_H
#define Monopatin_H

#include "../clases/Vehiculo.h"

class Monopatin: public Vehiculo {
private:
    bool tieneLuces;
public:
    //Constructores
    Monopatin();
    Monopatin(int, float, float, bool);

    //Getters & Setters
    bool getTieneLuces();
    void setTieneLuces(bool);

    //Destructores
    ~Monopatin();

    //Métodos
    float darPrecioViaje(int, int);
};

#endif //Monopatin_H
