#ifndef PAV_DTVIAJE_H
#define PAV_DTVIAJE_H
#include "../dtTypes/DtViajeBase.h"
#include "../dtTypes/DtFecha.h"
#include "../dtTypes/DtVehiculo.h"

class DtViaje{
private:
    float precioTotal;
    DtVehiculo vehiculo;
public:
    DtViaje();
    DtViaje(float, DtVehiculo);
    float getDtViajePrecioTotal();
    DtVehiculo getDtViajeVehiculo();
    ~DtViaje();

    //friend ostream& operator << (ostream&, const DtViaje&);
};
#endif //PAV_DTVIAJE_H
