#include "DtBicicleta.h"

#include <iostream>
#include <stdlib.h>

//Constructores
DtBicicleta::DtBicicleta() {}
DtBicicleta::DtBicicleta(int nroSerie, float porcentaje, float precioBase, tipoBici tipo, int cantCambios ):DtVehiculo(nroSerie, porcentaje, precioBase) {
    this->tipo = tipo;
    this->cantCambios = cantCambios;
}

//Getters & Setters
tipoBici DtBicicleta::getTipoBici() {
    return this->tipo;
}
int DtBicicleta::getCantCambios() {
    return this->cantCambios;
}

//Destructores
DtBicicleta::~DtBicicleta() {}

//M�todos
ostream& operator <<(ostream& salida, const DtBicicleta& dtB) {
    cout << (DtVehiculo)dtB << "\t-  Tipo de bicicleta: ";
    (dtB.tipo == 1) ? cout << "Paseo" : cout << "Montania";
    cout << endl << "\t-  Cantidad de cambios: ";
    cout << dtB.cantCambios << endl;
    return salida;
}
