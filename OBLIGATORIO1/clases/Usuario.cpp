#include "Usuario.h"

using namespace std;

//Constructores
Usuario::Usuario() {}
Usuario::Usuario(string cedula, string nombre, DtFecha fechaIngreso) {
    this->cedula = cedula;
    this->nombre = nombre;
    this->fechaIngreso = fechaIngreso;
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
    if (getUsuTopeViajes() < MAX_VIAJES){
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
	this->topeV = 0;
}
int Usuario::eliminarViajesFecha(DtFecha& fecha) {
	int cantViajes = 0;

	for(int i=0; i<getUsuTopeViajes(); i++){
		DtFecha fechaViaje = this->viajes[i]->getViajeFecha();

		int diaA = fechaViaje.getDia();
		int mesA = fechaViaje.getMes();
		int anioA = fechaViaje.getAnio();

		int diaB = fecha.getDia();
		int mesB = fecha.getMes();
		int anioB = fecha.getAnio();

		if ((diaA == diaB) && (mesA == mesB) && (anioA == anioB)){
			Viaje* viaje = this->viajes[i];
			this->viajes[i] = this->viajes[this->topeV];
			this->viajes[this->topeV] = viaje;

			delete this->viajes[this->topeV];
			this->topeV--;

			cantViajes++;
		}
	}

	return cantViajes;
}
ostream& operator <<(ostream& salida, const Usuario& usu) {
    cout << "Nombre: " << usu.nombre << endl <<
    "CI: " << usu.cedula << endl <<
    "Fecha de ingreso: " << usu.fechaIngreso <<
    "Cantidad de viajes: " << usu.topeV << endl;
    return salida;
}
