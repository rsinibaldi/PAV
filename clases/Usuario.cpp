#include <string.h>
#include <iostream>
#include "Usuario.h"

//Constructores
Usuario::Usuario() {}
Usuario::Usuario(string cedula, string nombre/*, DtFecha fechaIngreso*/) {
    this->cedula = cedula;
    this->nombre = nombre;
    //this->fechaIngreso = fechaIngreso;
    this->topeV = 0;
}

//Getters & Setters
string Usuario::getUsuCedula() {
    return this->cedula;
}
void Usuario::setUsuCedula(string cedula) {
    this->cedula = cedula;
}
string Usuario::getUsuNombre() {
    return this->nombre;
}
void Usuario::setUsuNombre(string nombre) {
    this->nombre = nombre;
}
DtFecha Usuario::getUsuFechaIngreso() {
    return this->fechaIngreso;
}
void Usuario::setUsuFechaIngreso(DtFecha fechaIngreso) {
    this->fechaIngreso = fechaIngreso;
}

//Destructores
Usuario::~Usuario() {
    eliminarViajes();
}

//Métodos
int Usuario::getUsuTopeViajes() {
    return this->topeV;
}
bool Usuario::agregarViaje(Viaje* viaje) {
    if (getUsuTopeViajes() < MAX_VIAJES) {
        this->viajes[getUsuTopeViajes()] = viaje;
        this->topeV++;
    }
}
Viaje** Usuario::obtenerViajes() {
	Viaje** viajes = new Viaje*[getUsuTopeViajes()];
	for(int i=0; i<getUsuTopeViajes(); i++)
		viajes[i] = this->viajes[i];
	return viajes;
}
void Usuario::eliminarViajes() {
	for(int i=0; i<getUsuTopeViajes(); i++)
		delete this->viajes[i];
}
