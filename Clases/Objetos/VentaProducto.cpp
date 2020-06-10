#include "VentaProducto.h"

//Constructores
VentaProducto::VentaProducto() {}
VentaProducto::VentaProducto(int cantidad) {
	return this->cantidad;
}

//Getters & Setters
int VentaProducto::getCantidad() {
	return this->cantidad;
}
void VentaProducto::setCantidad(int cantidad) {
	this->cantidad = cantidad;
}
Producto *VentaProducto::getProducto() {
	return this->producto;
}
void VentaProducto::setProducto(Producto *producto) {
	this->producto = producto;
}

//Destructores
VentaProducto::~VentaProducto() {}

//M�todos
string VentaProducto::getCodigoProducto() {
	return this->producto->getCodigo();
}
void VentaProducto::incrementarCantidad(int cantidad) {
	this->cantidad = this->cantidad + cantidad;
}
int VentaProducto::decrementarCantidad(int cantidad) {
	this->cantidad = this->cantidad - cantidad;
	return this->cantidad;
}
DtProductoFactura VentaProducto::getDtProductoFactura() {
	float precio = this->producto->getPrecio();
	string desc = this->producto->getDescripcion();
	int cant = this->getCantidad();

	DtProductoFactura dtpf = DtProductoFactura(precio, desc, cant);
	return dtpf;
}
float VentaProducto::getPrecioProductoEnVenta() {
	float precio = this->producto->getPrecio();
	return this->cantidad * precio;
}
DtProducto VentaProducto::getDtProducto() {
	float precio = this->producto->getPrecio();
	string desc = this->producto->getDescripcion();
	float cod = this->producto->getCodigo();
	int cant = this->getCantidad();

	DtProducto dtp = DtProducto(cod, precio, desc, cant);
	return dtp;
}