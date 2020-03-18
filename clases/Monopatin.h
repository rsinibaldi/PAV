//
// Created by yokad on 3/17/2020.
//

#ifndef MIKE_MONOPATIN_H
#define MIKE_MONOPATIN_H

#include "../clases/Vehiculo.h"

class Monopatin: public Vehiculo {
private:
    bool tieneLuces;
public:
    Monopatin();
    Monopatin(int,float,float,bool);
    bool getTieneLuces();
    void setTieneLuces(bool);
    ~Monopatin();

    virtual float darPrecioViaje();

};


#endif //MIKE_MONOPATIN_H
