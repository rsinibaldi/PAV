#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Viaje.h"
#include "Usuario.h"

//Constructores
Viaje::Viaje() {}
Viaje::Viaje(DtFecha fecha, int duracion, int distancia, int vehiculo) {
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
int Viaje::getViajeVehiculo() {
    return this->vehiculo;
}
void Viaje::setViajeVehiculo(int vehiculo) {
    this->vehiculo = vehiculo;
}

//Destructores
Viaje::~Viaje() {}

//Métodos
