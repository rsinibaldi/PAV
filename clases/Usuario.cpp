#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Usuario.h"

using namespace std;

Usuario::Usuario(){}
Usuario::~Usuario(){}//destrctor
Usuario::Usuario(string ci,string nom,DtFecha fchIngreso){

    this->cedula = ci;
    this->nombre = nom;
    this->fechaIngreso = fchIngreso;

}

string Usuario::setUsuNombre(string nom){
    this ->nombre=nom;
}
string Usuario::setUsuCedula(string ci) {
    this -> cedula=ci;
}

DtFecha Usuario::setUsuFechaIngreso(DtFecha fecha){
    this ->fechaIngreso=fecha;
}

// void getUsuNombre();
// void getUsuCedula();
// void getUsuFechaIngreso();

void Usuario::agregarViaje(viaje* v){
  this->viajes[this->topeV] = v;
  this->topeV++;
}
