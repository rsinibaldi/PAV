#include "DtProducto.h"
#include <iostream>
using namespace std;

DtProductoBase::DtProductoBase() {}
DtProductoBase::DtProductoBase(string codigoProducto, string descripcionProducto) {
this -> codigoProducto=codigoProducto;
this -> descripcionProducto= descripcionProducto;
}
string DtProductoBase::getCodigoProducto(){
    return this ->codigoProducto;
}

string DtProductoBase::getDescripcionProducto(){
    return this -> descripcionProducto;
}

void DtProductoBase::setCodigoProducto(string codigoProducto) {
    this->codigoProducto=codigoProducto;
}

void DtProductoBase::setDescripcionProducto(string descripcionProducto) {
    this ->descripcionProducto=descripcionProducto;
}

DtProductoBase::~DtProductoBase() {}

