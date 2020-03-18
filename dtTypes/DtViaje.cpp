#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DtViaje.h"
#include "DtViajeBase.h"

using namespace std;

DtViaje::DtViaje() {}
DtViaje::DtViaje(float precioTotal, DtVehiculo vehiculo){
    this-> precioTotal=precioTotal;
    this -> vehiculo=vehiculo;
}

float DtViaje::getDtViajePrecioTotal(){
  return this-> precioTotal;
}
float DtViaje::getDtViajeVehiculo(){
  return this-> vehiculo;
}

DtViaje::~DtViaje(){}
