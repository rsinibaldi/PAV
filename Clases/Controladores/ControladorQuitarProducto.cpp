#include "../Manejadores/ManejadorMesa.h"
#include "ControladorQuitarProducto.h"

//Getters & Setters
int ControladorQuitarProducto::getMesa() {
	return this->mesa;
}
void ControladorQuitarProducto::setMesa(int mesa) {
	this->mesa = mesa;
}
DtProductoCantidad ControladorQuitarProducto::getProductoVenta() {
	return this->productoVenta;
}
void ControladorQuitarProducto::setProductoVenta(DtProductoCantidad productoVenta) {
	this->productoVenta = productoVenta;
}

//Destructor
ControladorQuitarProducto::~ControladorQuitarProducto() {}

//Métodos
list<DtProducto*> ControladorQuitarProducto::listarProductos(int idMesa) {
	this->setMesa(idMesa);
	ManejadorMesa* mM = ManejadorMesa::getInstancia();
	Mesa* me = mM->getMesa(idMesa);
	return me->listarProductos();
}
void ControladorQuitarProducto::seleccionarProductoEliminar(DtProductoCantidad pc) {
	this->setProductoVenta(pc);
}
void ControladorQuitarProducto::cancelarQuitarProducto() {
	//REVISAR
}
void ControladorQuitarProducto::confirmarQuitarProducto() {
	ManejadorMesa* mM = ManejadorMesa::getInstancia();
	Mesa* me = mM->getMesa(this->getMesa());
	me->quitarProducto(this->getProductoVenta());
}