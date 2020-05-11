#include "DtViajeBase.h"

#include <iostream>

using namespace std;

//Constructores
DtViajeBase::DtViajeBase() {}
DtViajeBase::DtViajeBase(int duracion, int distancia, DtFecha fechaIngreso) {
    this->duracion = duracion;
    this->distancia = distancia;
    this->fechaIngreso = fechaIngreso;
}

//Getters & Setters
int DtViajeBase::getDtViajeBaseDuracion() {
    return this->duracion;
}
int DtViajeBase::getDtViajeBaseDistancia() {
    return this->distancia;
}
DtFecha DtViajeBase::getDtViajeBaseFechaIngreso() {
    return this->fechaIngreso;
}

//Destructores
DtViajeBase::~DtViajeBase() {}

//Métodos
ostream& operator <<(ostream& salida, const DtViajeBase& dtV) {
    cout << "-  Fecha: " << dtV.fechaIngreso <<
    "-  Duración: "<< dtV.duracion << " min." <<
    "\n-  Distancia: " << dtV.distancia << " kms." << endl;
    return salida;
}
