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
list<DtProductoCantidad> ControladorAltaProducto::getProductosComun() {
	return this->productosComun;
}
void ControladorAltaProducto::setProductosComun(list<DtProductoCantidad> productosComun) {
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
list<DtProductoBase*> ControladorAltaProducto::listarProductosComunes() { /*
	ManejadorProducto mP = ManejadorProduto::getInstancia();
	list<Producto> productos = mP->getProductos();*/
	list<DtProductoBase*> dtproductos;/*
	foreach c in productos{
		//Hay que castear al Producto c a Comun
		DtProductoBase dtpb = dynamic_cast<COMUN>(c->getDtProductoBase());
		dtproductos.push_back(dtpb);
	}*/
	return dtproductos;
}
void ControladorAltaProducto::datosProductoComun(string cod, string desc , float precio) {
	this->setCodComun(cod);
	this->setDescComun(desc);
	this->setPrecioComun(precio);
}
void ControladorAltaProducto::cancelarProductoComun() {
}
void ControladorAltaProducto::confirmarProductoComun() { /*
	ManejadorProducto* mP = ManejadorProducto::getInstancia();
	Comun* c = new Comun(this->codComun, this->descComun, this->precioComun)
	mP->agregarProducto(c);*/
}
void ControladorAltaProducto::datosProductoMenu(string cod, string desc) {
	this->setCodMenu(cod);
	this->setDescMenu(desc);
}
void ControladorAltaProducto::agregarAlProductoMenu(DtProductoCantidad pc) {
	this->productosComun.push_back(pc);
}
void ControladorAltaProducto::cancelarProductoMenu() {
}
void ControladorAltaProducto::confirmarProductoMenu() {
}