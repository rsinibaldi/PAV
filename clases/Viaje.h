#ifndef Viaje_H
#define Viaje_H

#include "../dtTypes/DtFecha.h"

using namespace std;

class Viaje{
  private:
    int duracion;
    int distancia;
    DtFecha fechaIngreso;

  public:
    Viaje();
    Viaje(DtFecha,int,int);
    void setViajeDuracion(int duracion);
    void setViajeDistancia(int distancia);
    void setViajeFechaIngreso(DtFecha fecha);
    int getViajeDuracion();
    int getViajeDistancia();
    DtFecha getViajeFechaIngreso();
    ~Viaje();//destrctor

//aca hay que agregar las funciones que vinculen a viaje
};



#endif
