#include "Bicicleta.h"

//Constructores
Bicicleta::Bicicleta() {}
Bicicleta::Bicicleta(int nroSerie, float porcentajeBateria, float precioBase, tipoBici tipo, int cantCambios):Vehiculo(nroSerie,porcentajeBateria,precioBase) {
    this->tipo = tipo;
    this->cantCambios = cantCambios;
}

//Getters & Setters
tipoBici Bicicleta::getTipoBici() {
    return this->tipo;
}
void Bicicleta::setTipoBici(tipoBici tipo) {
    this->tipo = tipo;
}
int Bicicleta::getCambios() {
    return this->cantCambios;
}
void Bicicleta::setCambios(int cantCambios) {
    this->cantCambios = cantCambios;
}

//Destructores
Bicicleta::~Bicicleta() {}

//Métodos
float Bicicleta::darPrecioViaje(int duracion, int distancia) {
    return getPrecioBase() * duracion;
}
