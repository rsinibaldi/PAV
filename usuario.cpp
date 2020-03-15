#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include "usuario.h"
#include "usuario.h"

using namespace std;

usuario::usuario(){}
~usuario::~usuario(){}//destrctor
usuario::usuario(string ci,string nom,DtFecha fchIngreso){

    this->cedula = ci;
    this->nombre = nom;
    this->fechaIngreso = fchIngreso;

}

// void setUsuNombre(string nom);
// void setUsuCedula(string);
// void setUsuFechaIngreso(DtFecha);
// void getUsuNombre();
// void getUsuCedula();
// void getUsuFechaIngreso();

void usuario::agregarViaje(viaje* v){
  this->viajes[this->topeV] = v;
  this->topeV++;
}
