#ifndef PAV_DTVEHICULO_H
#define PAV_DTVEHICULO_H

#include <iostream>

using namespace std;

class DtVehiculo {
protected:
    int nroSerie;
    float porcentaje;
    float precioBase;
public:
    //Constructores
    DtVehiculo();
    DtVehiculo(int, float, float);
    
    //Getters & Setters
    int getNroSerie();
    float getPorcentaje();
    float getPrecioBase();

    //Destructores
    virtual ~DtVehiculo();

    //Métodos
    friend ostream& operator <<(ostream&, const DtVehiculo&);
};

#endif //PAV_DTVEHICULO_H
