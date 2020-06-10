#include "Producto.h"

//Constructores
Producto::Producto() {}
Producto::Producto(string codigo, string descripcion, float precio) {
	this->codigo = codigo;
	this->descripcion = descripcion;
	this->precio = precio;
}

//Getters & Setters
string Producto::getCodigo() {
    return this->codigo;
}
void Producto::setCodigo(string codigo) {
	this->codigo = codigo;
}
string Producto::getDescripcion() {
    return this->descripcion;
}
void Producto::setDescripcion(string descripcion) {
	this->descripcion = descripcion;
}
float Producto::getPrecio() {
	return this->precio;
}
void Producto::setPrecio(float precio) {
	this->precio = precio;
}

//Destructores
Producto::~Producto() {}

//Métodos
TipoProducto Producto::getTipoProducto() {
}
DtProductoBase Producto::getDtProductoBase() {
}