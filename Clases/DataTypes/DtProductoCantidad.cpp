#include "DtProductoCantidad.h"

//Constructores
DtProductoCantidad::DtProductoCantidad() {}
DtProductoCantidad::DtProductoCantidad(string codigo, int cantidad) {
    this->codigo = codigo;
    this->cantidad = cantidad;
}

//Getters & Setters
string DtProductoCantidad::getCodigo() {
    return this->codigo;
}
void DtProductoCantidad::setCodigo(string codigo) {
    this->codigo = codigo;
}
int DtProductoCantidad::getCantidad() {
    return this->cantidad;
}
void DtProductoCantidad::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}

//Destructores
DtProductoCantidad::~DtProductoCantidad() {}

//Métodos