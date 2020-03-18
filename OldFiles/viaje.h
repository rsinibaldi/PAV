#ifndef VIAJE_H
#define VIAJE_H

#include "DtFecha.h"

using namespace std;

class viaje{
  private:
    int duracion;
    int distancia;
    DtFecha fechaIngreso;

  public:
    viaje();
    viaje(int,int,DtFecha);
    ~viaje();//destrctor
    void setViajeDuracion(int);
    void setViajeDistancia(int);
    void setViajeFechaIngreso(DtFecha);
    int getViajeDuracion();
    int getViajeDistancia();
    DtFecha getViajeFechaIngreso();

};



#endif
