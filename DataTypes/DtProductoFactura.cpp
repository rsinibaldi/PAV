#include <DtProductoFactura.h>
#include <iostream>

using namespace std;

DtProductoFactura::DtProductoFactura(){}
DtProductoFactura::DtProductoFactura(string descripcion, float precio, int cantidad ){
    this -> descripcion= descripcion;
    this -> precio= precio;
    this-> cantidad=cantidad;
}

int DtProductoFactura::getCantidad() const {
    return this ->cantidad;
}
string DtProductoFactura::getDescripcion() {
    return  this-> descripcion;
}

float DtProductoFactura::getPrecio() {
    return this->precio;
}

void DtProductoFactura::setDescripcion(string) {
    this->descripcion= descripcion;
}

void DtProductoFactura::setPrecio(float) {
    this->precio=precio;
}

void DtProductoFactura::setCantidad(int){
    this ->cantidad=cantidad;
}