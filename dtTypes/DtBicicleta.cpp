#include "DtBicicleta.h"

#include <iostream>
#include <stdlib.h>

//Constructores
DtBicicleta::DtBicicleta() {}
DtBicicleta::DtBicicleta(int nroSerie, float porcentaje, float precioBase, string tipoo, int cantCambios ):DtVehiculo(nroSerie, porcentaje, precioBase) {
    this->tipo = tipoo;
    this->cantCambios = cantCambios;
}

//Getters & Setters
string DtBicicleta::getTipoBici() {
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

		cout << dtB.tipo << endl;
    cout << endl << "\t-  Cantidad de cambios: ";
    cout << dtB.cantCambios << endl;
    return salida;
}
