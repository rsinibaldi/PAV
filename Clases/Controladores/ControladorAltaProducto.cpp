#include "../Manejadores/ManejadorProducto.h"
#include "../Objetos/Comun.h"
#include "../Objetos/Menu.h"
#include "ControladorAltaProducto.h"

//Getters & Setters
string ControladorAltaProducto::getCodMenu() {
	return this->codMenu;
}
void ControladorAltaProducto::setCodMenu(string codMenu) {
	this->codMenu = codMenu;
}
string ControladorAltaProducto::getDescMenu() {
	return this->descMenu;
}
void ControladorAltaProducto::setDescMenu(string descMenu) {
	this->descMenu = descMenu;
}
string ControladorAltaProducto::getCodComun() {
	return this->codComun;
}
void ControladorAltaProducto::setCodComun(string codComun) {
	this->codComun = codComun;
}
string ControladorAltaProducto::getDescComun() {
	return this->descComun;
}
void ControladorAltaProducto::setDescComun(string descComun) {
	this->descComun = descComun;
}
list<DtProductoCantidad*> ControladorAltaProducto::getProductosComun() {
	return this->productosComun;
}
void ControladorAltaProducto::setProductosComun(list<DtProductoCantidad*> productosComun) {
	this->productosComun = productosComun;
}
float ControladorAltaProducto::getPrecioComun() {
	return this->precioComun;
}
void ControladorAltaProducto::setPrecioComun(float precioComun) {
	this->precioComun = precioComun;
}

//Destructor
ControladorAltaProducto::~ControladorAltaProducto() {}

//Métodos
list<DtProductoBase*> ControladorAltaProducto::listarProductosComunes() { //REVISAR
	ManejadorProducto* mP = ManejadorProducto::getInstancia();
	list<DtProductoBase*> dtproductos;
	for (Producto* p : mP->getProductos()) {
		Comun* c = dynamic_cast<Comun*>(p);
		dtproductos.push_back(c->getDtProductoBase());
	}
	return dtproductos;
}
void ControladorAltaProducto::datosProductoComun(string cod, string desc , float precio) {
	this->setCodComun(cod);
	this->setDescComun(desc);
	this->setPrecioComun(precio);
}
void ControladorAltaProducto::cancelarProductoComun() {
	//REVISAR
}
void ControladorAltaProducto::confirmarProductoComun() {
	ManejadorProducto* mP = ManejadorProducto::getInstancia();
	Comun* c = new Comun(this->getCodComun(), this->getDescComun(), this->getPrecioComun());
	mP->agregarProducto(c);
}
void ControladorAltaProducto::datosProductoMenu(string cod, string desc) {
	this->setCodMenu(cod);
	this->setDescMenu(desc);
}
void ControladorAltaProducto::agregarAlProductoMenu(DtProductoCantidad* pc) {
	this->productosComun.push_back(pc);
}
void ControladorAltaProducto::cancelarProductoMenu() {
	//REVISAR
}
void ControladorAltaProducto::confirmarProductoMenu() {
	ManejadorProducto* mP = ManejadorProducto::getInstancia();
	Menu* m = new Menu(this->getCodMenu(), this->getDescMenu(), 0, 0);
	m->agregarComunes(this->getProductosComun());
	m->calcularPrecio();
	mP->agregarProducto(m);
}