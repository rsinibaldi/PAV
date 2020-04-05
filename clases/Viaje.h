#ifndef Viaje_H
#define Viaje_H

#include "../dtTypes/DtFecha.h"
#include "../dtTypes/DtVehiculo.h"
#include "Vehiculo.h"

using namespace std;

class Viaje {
private:
  DtFecha fecha;
  int duracion;
  int distancia;
  Vehiculo* vehiculo;
public:
  //Constructores
  Viaje();
  Viaje(DtFecha, int, int, Vehiculo*);

  //Getters & Setters
  DtFecha getViajeFecha();
  void setViajeFecha(DtFecha fecha);
  int getViajeDuracion();
  void setViajeDuracion(int duracion);
  int getViajeDistancia();
  void setViajeDistancia(int distancia);
  Vehiculo* getViajeVehiculo();
  void setViajeVehiculo(Vehiculo* vehiculo);

  //Destructores
  ~Viaje();

  //Métodos
};

#endif //Viaje_H
