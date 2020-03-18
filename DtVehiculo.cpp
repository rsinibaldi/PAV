#include "DtVehiculo.h"
DtVehiculo::DtVehiculo (){}
DtVehiculo::DtVehiculo(int nroSerie, float porcentaje, float precioBase){
    this -> nroSerie = nroSerie;
    this -> porcentaje = porcentaje;
    this -> precioBase = precioBase;
}

int DtVehiculo::getNroSerie(){
    return this -> nroSerie;
}
float DtVehiculo::getPorcentaje(){
    return this -> porcentaje;
}

float DtVehiculo::getPrecioBase(){
    return this -> precioBase;
}

DtVehiculo::~DtVehiculo(){}

ostream& operator <<(ostream& salida, const DtVehiculo& dtV){
    cout << "numero de serie: "<< dtV.nroSerie <<
    "\n" "Porcentaje: " << dtV.porcentaje <<
    "\n" "Precio Base: " << dtV.precioBase << endl;
    return salida;
}