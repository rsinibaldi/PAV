#ifndef PAV_DTVIAJEBASE_H
#define PAV_DTVIAJEBASE_H

#include <iostream>
#include "../dtTypes/DtFecha.h"

using namespace std;
class DtViajeBase{
protected:
  int duracion;
  int distancia;
  DtFecha fechaIngreso;
public:
    DtViajeBase();
    DtViajeBase(int,int,DtFecha);
    int getDtViajeBaseDuracion();
    int getDtViajeBaseDistancia();
    DtFecha getDtViajeBaseFechaIngreso();
    ~DtViajeBase();//destrctor

    friend ostream& operator << (ostream&, const DtViajeBase&);
};

#endif //PAV_DTVIAJEBASE_H
