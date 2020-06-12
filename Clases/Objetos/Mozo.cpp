#include "../Manejadores/ManejadorMesa.h"
#include "Mozo.h"

//Constructores
Mozo::Mozo() {}
Mozo::Mozo(string idEmpleado, string nombre):Empleado(idEmpleado, nombre) {}

//Getters & Setters
/*list<Mesa*> Mozo::getMesas() {
	return this->mesas;
}
void Mozo::setMesas(list<Mesa*> mesas) {
	this->mesas = mesas;
}*/

//Destructores
Mozo::~Mozo() {};

//Métodos
list<int> Mozo::mesasAsignadasSinVenta() {
	ManejadorMesa* mM = ManejadorMesa::getInstancia();
	list<int> mesasSinVenta;
	for (Mesa* me : mM->getMesas()) { //REVISAR
		if (!me->tieneVenta())
			mesasSinVenta.push_back(me->getNumero());
	}
	return mesasSinVenta;
}
void Mozo::asignarMesas(list<int> mesas, VentaLocal* vl) {
	ManejadorMesa* mM = ManejadorMesa::getInstancia();
	for (int me : mesas) {
		Mesa* m = mM->getMesa(me); //REVISAR
		m->setVentaLocal(vl);
	}
}