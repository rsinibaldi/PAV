#include "DtProductoCantidad.h"
#include <iostream>

using namespace std;

DtProductoCantidad::DtProductoCantidad() {}
DtProductoCantidad::DtProductoCantidad(string codigo, int cantidad) {
    this->codigo=codigo;
    this ->cantidad=cantidad;
}

int DtProductoCantidad::getCantidad() {
    return this -> cantidad;
}

string DtProductoCantidad::getCodigo() {
    return this ->codigo;
}

void DtProductoCantidad::setCantidad(int cantidad) {
    this->cantidad=cantidad;
}

void DtProductoCantidad::setCodigo(string codigo) {
    this->codigo=codigo;
}

DtProductoCantidad::~DtProductoCantidad() {}