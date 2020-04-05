#ifndef Bicicleta_H
#define Bicicleta_H

#include "Vehiculo.h"
#include <string.h>
#include <iostream>

using namespace std;


class Bicicleta: public Vehiculo {
private:
    string tipo;
    int cantCambios;
public:
    //Constructores
    Bicicleta();
    Bicicleta(int, float, float, string, int);

    //Getters & Setters
    string getTipoBici();
    void setTipoBici(string);
    int getCambios();
    void setCambios(int);

    //Destructores
    ~Bicicleta();

    //Métodos
    float darPrecioViaje(int, int);
};

#endif //Bicicleta_H
