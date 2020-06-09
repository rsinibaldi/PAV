#include <list>
#include <string>
#include "ControladorAltaProducto.h"
#include "Manejadores/ManejadorProducto.h"
#include "DataTypes/DtProductoBase.h"
#include "DataTypes/DtProductoCantidad.h"
#include "Objetos/Comun.h"

list<DtProductoBase*> ControladorAltaProducto::listarProductosComunes() {
	ManejadorProducto mP = ManejadorProduto::getInstancia();
	list<Producto> productos = mP->getProductos();
	list<DtProductoBase> dtproductos;
	foreach c in productos{
		//Hay que castear al Producto c a Comun
		DtProductoBase dtpb = dynamic_cast<COMUN>(c->getDtProductoBase());
		dtproductos.push_back(dtpb);
	}
	return dtproductos;
}

void ControladorAltaProducto::datosProductoComun(string cod, string desc , float precio) {
	this->setCodComun(cod);
	this->setDescComun(desc);
	this->setPrecioComun(precio);
}

void ControladorAltaProducto::cancelarProductoComun() {
}

void ControladorAltaProducto::confirmarProductoComun() {
	ManejadorProducto* mP = ManejadorProducto::getInstancia();
	Comun* c = new Comun(this->codComun, this->descComun, this->precioComun)
	mP->agregarProducto(c);
}

void ControladorAltaProducto::datosProductoMenu(string cod, string desc) {
	this->setCodMenu(cod);
	this->setDescMenu(desc);
}

void ControladorAltaProducto::agregarAlProductoMenu(DtProductoCantidad pc) {
	this->productosComun.add(pc);
}

void ControladorAltaProducto::cancelarProductoMenu() {
}

void ControladorAltaProducto::confirmarProductoMenu() {
}