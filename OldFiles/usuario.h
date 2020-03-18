#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#define MAX_VIAJES 100

#include "DtFecha.h"
#include "viaje.h"

using namespace std;

class usuario{
  private:
    string cedula;
    string nombre;
    DtFecha fechaIngreso;
    viaje* viajes[MAX_VIAJES];
    int topeV;

  public:
    usuario();
    usuario(string,string,DtFecha);
    ~usuario();//destrctor
    void setUsuNombre(string);
    void setUsuCedula(string);
    void setUsuFechaIngreso(DtFecha);
    void getUsuNombre();
    void getUsuCedula();
    void getUsuFechaIngreso();
    void agregarViaje(viaje*);





};




#endif
