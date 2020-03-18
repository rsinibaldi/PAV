#ifndef PAV_DTVEHICULO_H
#define PAV_DTVEHICULO_H

#include <iostream>

using namespace std;
class DtVehiculo{
protected:
    int nroSerie;
    float porcentaje;
    float precioBase;
public:
    DtVehiculo();
    DtVehiculo(int,float,float);
    int getNroSerie();
    float getPorcentaje();
    float getPrecioBase();
    virtual ~DtVehiculo();

    friend ostream& operator << (ostream&, const DtVehiculo&);
};

#endif //PAV_DTVEHICULO_H
