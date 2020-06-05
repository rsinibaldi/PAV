#include "Venta.h"
#include <string.h>
#include <iostream>

using namespace std;

Venta::Venta() {}
Venta::Venta(string codigo) {
    this->codigo=codigo;
}

string Venta::getCodigoVenta() {
    return this->codigo;
}

void Venta::eliminarProducto(string codigo) {
    //metodo
}