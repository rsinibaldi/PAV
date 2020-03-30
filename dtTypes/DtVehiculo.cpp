#include "DtVehiculo.h"

//Constructores
DtVehiculo::DtVehiculo () {}
DtVehiculo::DtVehiculo(int nroSerie, float porcentaje, float precioBase) {
    this->nroSerie = nroSerie;
    this->porcentaje = porcentaje;
    this->precioBase = precioBase;
}

//Getters & Setters
int DtVehiculo::getNroSerie() {
    return this->nroSerie;
}
float DtVehiculo::getPorcentaje() {
    return this->porcentaje;
}
float DtVehiculo::getPrecioBase() {
    return this->precioBase;
}

//Destructores
DtVehiculo::~DtVehiculo() {}

//Métodos
ostream& operator <<(ostream& salida, const DtVehiculo& dtV) {
    cout << "Número de serie: " << dtV.nroSerie <<
    "\nPorcentaje de batería: " << dtV.porcentaje <<
    "\nPrecio base: " << dtV.precioBase << endl;
    return salida;
}