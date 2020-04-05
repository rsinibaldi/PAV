#include "DtMonopatin.h"

#include <iostream>

//Constructores
DtMonopatin::DtMonopatin(){}
DtMonopatin::DtMonopatin(int nroSerie, float porcentaje, float precioBase, bool tieneLuces):DtVehiculo(nroSerie, porcentaje, precioBase){
    this->tieneLuces = tieneLuces;
}

//Getters & Setters
bool DtMonopatin::getTieneLuces() {
    return this->tieneLuces;
}

//Destructores
DtMonopatin::~DtMonopatin() {}

//Métodos
ostream& operator <<(ostream& salida, const DtMonopatin& dtM) {
	cout << (DtVehiculo)dtM << "\t-  Tiene luces: ";
    if (dtM.tieneLuces)
        cout << "Si";
	else
		cout << "No";
    cout << endl;
    return salida;
}
