#include "Viaje.h"

//Constructores
Viaje::Viaje() {}
Viaje::Viaje(DtFecha fecha, int duracion, int distancia, Vehiculo vehiculo) {
    this->fecha = fecha;
    this->duracion = duracion;
    this->distancia = distancia;
    this->vehiculo = vehiculo;
}

//Getters & Setters
DtFecha Viaje::getViajeFecha() {
    return this->fecha;
}
void Viaje::setViajeFecha(DtFecha fecha) {
    this->fecha = fecha;
}
int Viaje::getViajeDuracion() {
    return this->duracion;
}
void Viaje::setViajeDuracion(int duracion) {
    this->duracion = duracion;
}
int Viaje::getViajeDistancia() {
    return this->distancia;
}
void Viaje::setViajeDistancia(int distancia) {
    this->distancia = distancia;
}
Vehiculo Viaje::getViajeVehiculo() {
    return this->vehiculo;
}
void Viaje::setViajeVehiculo(Vehiculo vehiculo) {
    this->vehiculo = vehiculo;
}

//Destructores
Viaje::~Viaje() {}

//Métodos