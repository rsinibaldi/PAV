#include "DtFactura.h"

//Constructores
DtFactura::DtFactura() {}
DtFactura::DtFactura(string codVenta, DtFecha fechaEmision, list <DtProductoFactura*> productos, float subTotalVenta, float descuento, float montoTotalVenta, float montoTotalVentaConIva) {
    this->codVenta = codVenta;
    this->fechaEmision = fechaEmision;
    this->productos = productos;
    this->subtotalVenta = subTotalVenta;
    this->descuento = descuento;
    this->montoTotalVenta = montoTotalVenta;
    this->montoTotalVentaConIva = montoTotalVentaConIva;
}

//Getters & Setters
string DtFactura::getCodVenta() {
    return this->codVenta;
}
void DtFactura::setCodVenta(string codVenta) {
    this->codVenta = codVenta;
}
DtFecha DtFactura::getFechaEmision() {
    return this->fechaEmision;
}
void DtFactura::setFechaEmision(DtFecha fechaEmision) {
    this->fechaEmision = fechaEmision;
}
list<DtProductoFactura*> DtFactura::getProductos() {
    return this->productos;
}
void DtFactura::setProductos(list<DtProductoFactura*> productos) {
    this->productos = productos;
}
float DtFactura::getSubtotalVenta() {
    return this->subtotalVenta;
}
void DtFactura::setSubtotalVenta(float subtotalVenta) {
    this->subtotalVenta = subtotalVenta;
}
float DtFactura::getDescuento() {
    return this->descuento;
}
void DtFactura::setDescuento(float descuento) {
    this->descuento = descuento;
}
float DtFactura::getMontoTotalVenta() {
    return this->montoTotalVenta;
}
void DtFactura::setMontoTotalVenta(float montoTotalVenta) {
    this->montoTotalVenta = montoTotalVenta;
}
float DtFactura::getTotalMontoVentaConIva() {
    return this->montoTotalVentaConIva;
}
void DtFactura::setTotalMontoVentaConIva(float montoTotalVentaConIva) {
    this->montoTotalVentaConIva = montoTotalVentaConIva;
}

//Destructores
DtProductoFactura::~DtProductoFactura() {}

//Métodos