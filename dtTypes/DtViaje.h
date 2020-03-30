#ifndef PAV_DTVIAJE_H
#define PAV_DTVIAJE_H

#include "DtViajeBase.h"
#include "DtVehiculo.h"
#include "DtFecha.h"

#include <iostream>

using namespace std;

class DtViaje : public DtViajeBase {
private:
    float precioTotal;
    DtVehiculo vehiculo;
public:
    //Constructores
    DtViaje();
    DtViaje(int, int, DtFecha, float, DtVehiculo);
    
    //Getters & Setters
    float getDtViajePrecioTotal();
    DtVehiculo getDtViajeVehiculo();

    //Destructores
    ~DtViaje();

    //Métodos
    friend ostream& operator <<(ostream&, const DtViaje&);
};

#endif //PAV_DTVIAJE_H