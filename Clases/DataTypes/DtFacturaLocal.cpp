#include <iostream>
#include <list>
#include <string>
#include "DtFactura.h"

using namespace std;

DtFacturaLocal::DtFacturaLocal() {}
DtFacturaLocal::DtFacturaLocal(string codVenta, DtFecha fechaEmision, list<DtProductoFactura*>productos, float subTotal, float descuento, float montoTotalVenta, float montoTotalVentaConIva, string nombreMozo):DtFactura(codVenta, fechaEmision, productos, subtotal, descuento, montoTotalVenta, montoTotalVentaConIva) {
    this->nombreMozo = nombreMozo;
}

string DtFacturaLocal::getNombreMozo(){
    return this->nombreMozo;
}
void DtFacturaLocal::setNombreMozo(string nombreMozo) {
    this->nombreMozo = nombreMozo;
}

DtFacturaLocal::~DtFacturaLocal() {}