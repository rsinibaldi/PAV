#ifndef PAV_DTVIAJE_H
#define PAV_DTVIAJE_H
#include "DtViaje.h"
#include "../dtTypes/DtFecha.h"

class DtViaje: public DtViajeBase{
private:
    float precioTotal;
    DtVehiculo vehiculo;
public:
    DtViaje();
    DtViaje(int, float, float, bool);
    float getDtViajePrecioTotal();
    DtVehiculo getDtViajeVehiculo();
    ~DtViaje();

    friend ostream& operator << (ostream&, const DtViaje&);
};
#endif //PAV_DTVIAJE_H
