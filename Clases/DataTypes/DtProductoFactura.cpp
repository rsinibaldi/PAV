#include "DtProductoFactura.h"

//Constructores
DtProductoFactura::DtProductoFactura() {}
DtProductoFactura::DtProductoFactura(string descripcion, float precio, int cantidad) {
    this->descripcion = descripcion;
    this->precio = precio;
    this->cantidad = cantidad;
}

//Getters & Setters
string DtProductoFactura::getDescripcion() {
    return this->descripcion;
}
void DtProductoFactura::setDescripcion(string descripcion) {
    this->descripcion = descripcion;
}
float DtProductoFactura::getPrecio() {
    return this->precio;
}
void DtProductoFactura::setPrecio(float precio) {
    this->precio = precio;
}
int DtProductoFactura::getCantidad() const {
    return this->cantidad;
}
void DtProductoFactura::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}

//Destructores
DtProductoFactura::~DtProductoFactura() {}

//Métodos