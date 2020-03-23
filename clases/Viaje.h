#ifndef Viaje_H
#define Viaje_H

#include "../dtTypes/DtFecha.h"
#include "Vehiculo.h"

using namespace std;

class Viaje {
private:
  DtFecha fecha;
  int duracion;
  int distancia;
  int vehiculo;
public:
  //Constructores
  Viaje();
  Viaje(DtFecha, int, int, int);

  //Getters & Setters
  DtFecha getViajeFecha();
  void setViajeFecha(DtFecha fecha);
  int getViajeDuracion();
  void setViajeDuracion(int duracion);
  int getViajeDistancia();
  void setViajeDistancia(int distancia);
  int getViajeVehiculo();
  void setViajeVehiculo(int vehiculo);

  //Destructores
  ~Viaje();

  //Métodos
};

#endif //Viaje_H
