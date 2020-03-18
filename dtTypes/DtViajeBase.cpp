#include "DtViajeBase.h"
DtViajeBase::DtViajeBase (){}
DtViajeBase::DtViajeBase(int duracion, int distancia, DtFecha fechaIngreso){
    this -> duracion = duracion;
    this -> distancia = distancia;
    this -> fechaIngreso = fechaIngreso;
}

int DtViajeBase::getDtViajeBaseDuracion(){
    return this -> duracion;
}
int DtViajeBase::getDtViajeBaseDistancia(){
    return this -> distancia;
}
DtFecha DtViajeBase::getDtViajeBaseFechaIngreso(){
    return this -> fechaIngreso;
}

DtViajeBase::~DtViajeBase(){}

ostream& operator <<(ostream& salida, const DtViajeBase& dtV){
    // cout << "Duración: "<< dtV.duracion <<
    // "\n" "Distancia: " << dtV.distancia <<
    // "\n" "Fecha de Ingreso: " << dtV.fechaIngreso << endl;
    // return salida;
}
