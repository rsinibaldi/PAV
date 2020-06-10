#include "DtProducto.h"

//Constructores
DtProducto::DtProducto(){};
DtProducto::DtProducto(string codigo, string descripcion, float precio, int cantidad):DtProductoBase(codigo, descripcion) {
    this->precio = precio;
    this->cantidad = cantidad;
}

//Getters & Setters
float DtProducto::getPrecio() {
    return this->precio;
}
void DtProducto::setPrecio(float precio) {
    this->precio = precio;
}
int DtProducto::getCantidad() {
    return this->cantidad;
}
void DtProducto::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}

//Destructores
DtProducto::~DtProducto() {}

//Métodos