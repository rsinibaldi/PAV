#include "vehiculo.h"
Vehiculo::Vehiculo(){}
Vehiculo::Vehiculo(int nroSerie, float porcentajeBateria, float precioBase) {
    this -> nroSerie=nroSerie;
    this -> porcentajeBateria=porcentajeBateria;
    this -> precioBase=precioBase;
}

int Vehiculo::getPrecioBase() {
    return  this->nroSerie;
}
void Vehiculo::setNroSerie(int) {
    this->nroSerie=nroSerie;
}

float Vehiculo::getPorcentajeBateria() {
    return  this -> porcentajeBateria;
}
void Vehiculo::setPorcentajeBateria(float) {
    this->porcentajeBateria=porcentajeBateria;
}
float Vehiculo::getPrecioBase() {
    return this->precioBase;
}
void Vehiculo::setPrecioBase(float) {
    this->precioBase=precioBase;
}

Vehiculo::~Vehiculo() {}
