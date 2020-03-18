#include "DtMonopatin.h"
DtMonopatin::DtMonopatin(){}
DtMonopatin::DtMonopatin(int nroSerie, float porcentaje, float precioBase, bool tieneLuces):DtVehiculo(nroSerie, porcentaje, precioBase){
    this -> tieneLuces = tieneLuces;
}

bool DtMonopatin::getTieneLuces() {
    return  this -> tieneLuces;
}
DtMonopatin::~DtMonopatin() {}

ostream& operator << (ostream& salida, const DtMonopatin& dtM){
    string luces = (dtM.tieneLuces)? "True":"False";
    cout<< (DtVehiculo) dtM << "Tiene Luces?: " << luces[dtM.tieneLuces] << luces << endl;
    return salida;
}