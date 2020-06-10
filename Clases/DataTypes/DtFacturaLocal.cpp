#include "DtFacturaLocal.h"

//Constructores
DtFacturaLocal::DtFacturaLocal() {}
DtFacturaLocal::DtFacturaLocal(string codVenta, DtFecha fechaEmision, list<DtProductoFactura*> productos, float subTotalVenta, float descuento, float montoTotalVenta, float montoTotalVentaConIva, string nombreMozo):DtFactura(codVenta, fechaEmision, productos, subTotalVenta, descuento, montoTotalVenta, montoTotalVentaConIva) {
    this->nombreMozo = nombreMozo;
}

//Getters & Setters
string DtFacturaLocal::getNombreMozo() {
    return this->nombreMozo;
}
void DtFacturaLocal::setNombreMozo(string nombreMozo) {
    this->nombreMozo = nombreMozo;
}

//Destructores
DtFacturaLocal::~DtFacturaLocal() {}

//Métodos