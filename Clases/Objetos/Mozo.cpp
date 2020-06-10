#include "Mozo.h"

//Constructores
Mozo::Mozo() {}
Mozo::Mozo(string idMozo, string nombre):Empleado(string idEmpleado, string nombre) {}

//Getters & Setters
list<Mesa>* getMesas() {
	return this->mesas;
}
setMesas(list<Mesa>* mesas) {
	this->mesas = mesas;
}

//Destructores
Mozo::~Mozo() {};

//Métodos
list<int> Mozo::mesasAsignadasSinVenta() {
	list<Mesa> mesasSinVenta;
	bool tieneVenta = false;
	for each (Mesa me in this->mesas)
		tieneVenta = me->tieneVenta();
	if (!tieneVenta) {
		int num = me->getNumero();
		mesasSinVenta.push_back(num);
	}
	return mesasSinVenta;
}
void Mozo::asignarMesas(list<int> mesas, VentaLocal vl) {
	for each (int me in mesas) {
		Mesa* m = this->mesas.find(me);
		m->setVentaLocal(vl);
	}
}