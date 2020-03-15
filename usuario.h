#ifndef USUARIO_H
#define USUARIO_H
#include "DtFecha.h"
#include <string>
#include "viaje.h"
#define MAX_VIAJES 100

usig namespace std;

class usuario{
  private:
    strig cedula;
    strig nombre;
    DtFecha fechaIngreso;
    Viaje* viajes[MAX_VIAJES];
    int topeV;

  public:
    usuario();
    usuario(string,string,DtFecha);





}




#endif
