#ifndef Usuario_H
#define Usuario_H

#define MAX_VIAJES 100

#include "Viaje.h"
#include "../dtTypes/DtFecha.h"

#include <string.h>
#include <iostream>

using namespace std;

class Usuario {
private:
  string cedula;
  string nombre;
  DtFecha fechaIngreso;
  int topeV;
  Viaje* viajes[MAX_VIAJES];
public:
  //Constructores
  Usuario();
  Usuario(string, string, DtFecha);

  //Getters & Setters
  string getUsuCedula();
  void setUsuCedula(string cedula);
  string getUsuNombre();
  void setUsuNombre(string nombre);
  DtFecha getUsuFechaIngreso();
  void setUsuFechaIngreso(DtFecha);

  //Destructores
  ~Usuario();

  //Métodos
  int getUsuTopeViajes();
  bool agregarViaje(Viaje*);
  Viaje** obtenerViajes();
  void eliminarViajes();
  friend ostream& operator <<(ostream&, const Usuario&);
};

#endif //Usuario_H
