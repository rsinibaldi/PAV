#include "VentaProducto.h"

//Constructores
VentaProducto::VentaProducto() {}
VentaProducto::VentaProducto(int cantidad) {
	this->cantidad = cantidad;
}
VentaProducto::VentaProducto(int cantidad, Producto* producto) {
	this->cantidad = cantidad;
	this->producto = producto;
}

//Getters & Setters
int VentaProducto::getCantidad() {
	return this->cantidad;
}
void VentaProducto::setCantidad(int cantidad) {
	this->cantidad = cantidad;
}
Producto* VentaProducto::getProducto() {
	return this->producto;
}
void VentaProducto::setProducto(Producto *producto) {
	this->producto = producto;
}

//Destructores
VentaProducto::~VentaProducto() {}

//M�todos
string VentaProducto::getCodigoProducto() {
	return this->getProducto()->getCodigo();
}
void VentaProducto::incrementarCantidad(int cantidad) {
	this->setCantidad(this->getCantidad() + cantidad);
}
int VentaProducto::decrementarCantidad(int cantidad) {
	this->setCantidad(this->getCantidad() - cantidad);
	return this->getCantidad();
}
DtProductoFactura* VentaProducto::getDtProductoFactura() {
	float precio = this->getProducto()->getPrecio();
	string desc = this->getProducto()->getDescripcion();
	int cant = this->getCantidad();

	DtProductoFactura* dtpf = new DtProductoFactura(desc, precio, cant);
	return dtpf;
}
float VentaProducto::getPrecioProductoEnVenta() {
	float precio = this->getProducto()->getPrecio();
	return this->getCantidad() * precio;
}
DtProducto* VentaProducto::getDtProducto() {
	int precio = this->getProducto()->getPrecio();
	string desc = this->getProducto()->getDescripcion();
	string cod = this->getProducto()->getCodigo();
	float cant = this->getCantidad();

	DtProducto* dtp = new DtProducto(cod, desc, precio,cant);
	return dtp;
}