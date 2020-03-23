#include "Vehiculo.h"

//Constructores
Vehiculo::Vehiculo() {}
Vehiculo::Vehiculo(int nroSerie, float porcentajeBateria, float precioBase) {
    this->nroSerie = nroSerie;
    this->porcentajeBateria = porcentajeBateria;
    this->precioBase = precioBase;
}

//Getters & Setters
int Vehiculo::getNroSerie() {
    return this->nroSerie;
}
void Vehiculo::setNroSerie(int nroSerie) {
    this->nroSerie = nroSerie;
}
float Vehiculo::getPorcentajeBateria() {
    return  this->porcentajeBateria;
}
void Vehiculo::setPorcentajeBateria(float porcentajeBateria) {
    this->porcentajeBateria = porcentajeBateria;
}
float Vehiculo::getPrecioBase() {
    return this->precioBase;
}
void Vehiculo::setPrecioBase(float precioBase) {
    this->precioBase = precioBase;
}

//Destructores
Vehiculo::~Vehiculo() {}

//Métodos
float Vehiculo::darPrecioviaje(int duracion, int distancia) {};