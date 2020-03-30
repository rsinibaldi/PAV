#include "DtViaje.h"
#include "DtViajeBase.h"
#include "DtVehiculo.h"
#include "DtFecha.h"

#include <iostream>

using namespace std;

//Constructores
DtViaje::DtViaje() {}
DtViaje::DtViaje(int duracion, int distancia, DtFecha fechaIngreso, float precioTotal, DtVehiculo vehiculo):DtViajeBase(duracion, distancia, fechaIngreso) {
    this->precioTotal = precioTotal;
    this->vehiculo = vehiculo;
}

//Getters & Setters
float DtViaje::getDtViajePrecioTotal() {
  return this->precioTotal;
}
DtVehiculo DtViaje::getDtViajeVehiculo() {
  return this->vehiculo;
}

//Destructores
DtViaje::~DtViaje() {}

//Métodos
ostream& operator <<(ostream& salida, const DtViaje& dtv) {
  cout << (DtViajeBase) dtv <<
  "\nPrecio total: $ " << dtv.precioTotal <<
  "\nVehículo: " << dtv.vehiculo << endl;
	return salida;
}