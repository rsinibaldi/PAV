#include "DtBicicleta.h"
#include "TipoBici.h"
DtBicicleta::DtBicicleta(){}
DtBicicleta::DtBicicleta(int nroSerie, float porcentaje, float precioBase, tipoBici tipo, int cantCambios ):DtVehiculo(nroSerie, porcentaje, precioBase){
    this -> tipoBici = tipo;
    this -> cantCambios= cantCambios;
}

tipoBici DtBicicleta::getTipoBici() {
    return  this -> tipo;
}

int DtBicicleta::getCantCambios(){
    return this -> cantCAmbios;
}
DtBicicleta::~DtBicicleta() {}

ostream& operator << (ostream& salida, const DtBicicleta& dtB){
    string tipoBici[2]= {"Paseo", "Montana"};
    int cantCambios;

    cout<< (DtVehiculo) dtB << "Tipo de bici?: " << tipoBici[dtB.tipoBici]<< "\nCantidad de cambios: "<< cantCambios << endl;
        return salida;
}