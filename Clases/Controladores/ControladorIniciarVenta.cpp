#include "../Manejadores/ManejadorEmpleado.h"
#include "../Manejadores/ManejadorVenta.h"
#include "../Objetos/Mozo.h"
#include "ControladorIniciarVenta.h"

//Getters & Setters
string ControladorIniciarVenta::getMozo() {
	return this->mozo;
}
void ControladorIniciarVenta::setMozo(string mozo) {
	this->mozo = mozo;
}
list<int> ControladorIniciarVenta::getMesas() {
	return this->mesas;
}
void ControladorIniciarVenta::setMesas(list<int> mesas) {
	this->mesas = mesas;
}

//Destructor
ControladorIniciarVenta::~ControladorIniciarVenta() {}

//Metodos
list<int> ControladorIniciarVenta::ingresarIDMozo(string idMozo) {
	this->setMozo(idMozo);
	ManejadorEmpleado* mE = ManejadorEmpleado::getInstancia();
	Mozo* mo = dynamic_cast<Mozo*>(mE->getEmpleado(this->getMozo()));
	return mo->mesasAsignadasSinVenta();
}
list<int> ControladorIniciarVenta::seleccionarMesas(list<int> mesas) {
	this->setMesas(mesas);
	return mesas;
}
void ControladorIniciarVenta::cancelarIniciarVenta() {
	//REVISAR
}
void ControladorIniciarVenta::confirmarIniciarVenta() {
	ManejadorEmpleado* mE = ManejadorEmpleado::getInstancia();
	Mozo* mo = dynamic_cast<Mozo*>(mE->getEmpleado(this->getMozo()));
	VentaLocal* vl = new VentaLocal(); //REVISAR VentaLocal(mo)
	mo->asignarMesas(this->getMesas(), vl);
	ManejadorVenta* mV = ManejadorVenta::getInstancia();
	mV->agregarVenta(vl);
}