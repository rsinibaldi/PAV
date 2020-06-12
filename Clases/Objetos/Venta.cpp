#include "Venta.h"

//Constructores
Venta::Venta() {}
Venta::Venta(string codigo) {
    this->codigo = codigo;
}

//Getters & Setters
string Venta::getCodigo() {
    return this->codigo;
}
void Venta::setCodigoVenta(string codigo) {
    this->codigo = codigo;
}
DtFactura* Venta::getFactura() {
    return this->factura;
}
void Venta::setFactura(DtFactura* factura) {
    this->factura = factura;
}
list<VentaProducto*> Venta::getVentaProductos() {
    return this->ventaProductos;
}
void Venta::setVentaProductos(list<VentaProducto*> ventaProductos) {
    this->ventaProductos = ventaProductos;
}

//Destructores
Venta::~Venta() {}

//Métodos
void Venta::eliminarProducto(string codigo) {
    for each (VentaProducto vp in this->getVentaProductos()) {
        if (vp->getCodigoProducto() == codigo) {
            this->getCodigoProducto().remove(vp);
            delete vp;
        }
    }
}