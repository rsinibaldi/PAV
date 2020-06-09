#include "DtFactura.h"
#include <iostream>
using namespace std;

DtFactura::DtFactura() {}
DtFactura::DtFactura(string codVenta, DtFecha fechaEmision, list <DtProductoFactura*> productos, float subtotal, float descuento, float montoTotalVenta, float montoTotalVentaConIva) {
    this-> codVenta=codVenta;
    this-> fechaEmision = fechaEmision;
    this-> productos = productos;
    this-> subtotalVenta = subtotal;
    this-> descuento= descuento;
    this-> montoTotalVenta= montoTotalVenta;
    this -> montoTotalVentaConIva= montoTotalVentaConIva;
}

string DtFactura::getCodVenta(){
    return this->codVenta;
}

DtFecha DtFactura::getFechaEmsion(){
    return this-> fechaEmision;
}

float DtFactura::getSubtotalVenta(){
    return this-> subtotalVenta;
}

DtProductoFactura::~DtProductoFactura() {}


float DtFactura::getDescuento(){
    return this-> descuento;
}

float DtFactura::getMontoTotalVenta(){
    return this->montoTotalVenta;
}

float DtFactura::getTotalMontoVentaConIva(){
    return this -> montoTotalVentaConIva;
}

list<DtProductoFactura*> DtFactura::getProductos() {
    return this ->productos;
}
