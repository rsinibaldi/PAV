#include "DtMonopatin.h"
#include <iostream>
DtMonopatin::DtMonopatin(){}
DtMonopatin::DtMonopatin(int nroSerie, float porcentaje, float precioBase, bool tieneLuces):DtVehiculo(nroSerie, porcentaje, precioBase){
    this -> tieneLuces = tieneLuces;
}

bool DtMonopatin::getTieneLuces() {
    return  this -> tieneLuces;
}
DtMonopatin::~DtMonopatin() {}

ostream& operator <<(ostream& salida, const DtMonopatin& dtM) {
    cout << "Número de serie: " << dtM.nroSerie <<
    "\nPorcentaje de batería: " << dtM.porcentaje <<
    "\nPrecio base: " << dtM.precioBase <<
    "\nTiene Luces es: " << dtM.tieneLuces << endl;
    return salida;
}
