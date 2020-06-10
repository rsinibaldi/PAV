#include "DtProductoBase.h"

//Constructores
DtProductoBase::DtProductoBase() {}
DtProductoBase::DtProductoBase(string codigo, string descripcion) {
    this->codigo = codigo;
    this->descripcion = descripcion;
}

//Getters & Setters
string DtProductoBase::getCodigo() {
    return this->codigo;
}
void DtProductoBase::setCodigo(string codigo) {
    this->codigo = codigo;
}
string DtProductoBase::getDescripcion() {
    return this->descripcion;
}
void DtProductoBase::setDescripcion(string descripcion) {
    this->descripcion = descripcion;
}

//Destructores
DtProductoBase::~DtProductoBase() {}

//Métodos