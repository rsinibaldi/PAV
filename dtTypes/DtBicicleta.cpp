#include <iostream>
#include <stdlib.h>
#include "DtBicicleta.h"
#include "../enum/TipoBici.h"
DtBicicleta::DtBicicleta(){}
DtBicicleta::DtBicicleta(int nroSerie, float porcentaje, float precioBase, tipoBici tipoo, int cantCambios ):DtVehiculo(nroSerie, porcentaje, precioBase){
    this -> tipo = tipo;
    this -> cantCambios= cantCambios;
}

tipoBici DtBicicleta::getTipoBici() {
    return  this -> tipo;
}

int DtBicicleta::getCantCambios(){
    return this -> cantCambios;
}
DtBicicleta::~DtBicicleta() {}

ostream& operator <<(ostream& salida, const DtBicicleta& dtB) {
    cout << (DtVehiculo) dtB <<
    "\nTipo de bicicleta: " << dtB.tipo <<
    "\nTiene "<< dtB.cantCambios<< " cambios"<< endl;
    return salida;
}
