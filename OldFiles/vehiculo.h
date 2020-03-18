#ifndef MIKE_VEHICULO_H
#define MIKE_VEHICULO_H

#include "../enum/TipoBici"
#include "iostream"

using namespace std;
class Vehiculo{
private:
    int nroSerie;
    float porcentajeBateria;
    float precioBase;
public:
    Vehiculo();
    Vehiculo(int, float, float);
    int getNroSerie();
    void setNroSerie(int);
    float getPorcentajeBateria();
    void setPorcentajeBateria(float);
    float getPrecioBase();
    void setPrecioBase(float);
    ~Vehiculo();
    virtual float darPrecioviaje()=0;
};
#endif //MIKE_VEHICULO_H
