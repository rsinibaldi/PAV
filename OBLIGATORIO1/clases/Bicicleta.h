#ifndef Bicicleta_H
#define Bicicleta_H

#include "Vehiculo.h"
#include "../enum/TipoBici.h"

#include <string.h>
#include <iostream>

using namespace std;

class Bicicleta: public Vehiculo {
private:
    tipoBici tipo;
    int cantCambios;
public:
    //Constructores
    Bicicleta();
    Bicicleta(int, float, float, tipoBici, int);

    //Getters & Setters
    tipoBici getTipoBici();
    void setTipoBici(tipoBici);
    int getCambios();
    void setCambios(int);

    //Destructores
    ~Bicicleta();

    //Métodos
    float darPrecioViaje(int, int);
};

#endif //Bicicleta_H
