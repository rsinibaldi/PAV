#ifndef MIKE_DTBICICLETA_H
#define MIKE_DTBICICLETA_H

#include "../dtTypes/DtVehiculo.h"
#include "../enum/TipoBici.h"
class DtBicicleta: public DtVehiculo{
private:
    tipoBici tipo;
    int cantCambios;
public:
    DtBicicleta();
    DtBicicleta(int, float, float, tipoBici, int);
    tipoBici getTipoBici();
    int getCantCambios();
    ~DtBicicleta();

    friend ostream& operator << (ostream&, const DtBicicleta&);
};

#endif //MIKE_DTBICICLETA_H
