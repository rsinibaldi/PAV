#include "Mesa.h"

//Constructores
Mesa::Mesa() {}
Mesa::Mesa(int nroMesa) {
    this->numero = nroMesa;
}

//Getters & Setters
string Mesa::getNumMesa() {
    return this->numero;
}
void Mesa::setidMesa(int nroMesa) {
    this->numero = nroMesa;
}

//Destructores
Mesa::~Mesa() {};


//Métodos
bool tieneVenta(){}
agregarProducto(DtProductoCantidad){}
DtProducot listarProductos(){}//: Set(DtProducot)
quitarProducto(DtProductoCantidad){}
