#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "Usuario.h"

using namespace std;

Usuario::Usuario(){}
Usuario::~Usuario(){}//destrctor
Usuario::Usuario(string ci,string nom,DtFecha fchIngreso){

    this->cedula = ci;
    this->nombre = nom;
    this->fechaIngreso = fchIngreso;

}

void Usuario::setUsuNombre(string nom){
    this ->nombre=nom;
}
void Usuario::setUsuCedula(string ci) {
    this -> cedula=ci;
}

void Usuario::setUsuFechaIngreso(DtFecha fecha){
    this ->fechaIngreso=fecha;
}

// void getUsuNombre();
// void getUsuCedula();
// void getUsuFechaIngreso();

void Usuario::agregarViaje(Viaje* v){
  this->viajes[this->topeV] = v;
  this->topeV++;
}
