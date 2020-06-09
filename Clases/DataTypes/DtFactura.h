#ifndef PAV_DTFACTURA_H
#define PAV_DTFACTURA_H
#include <iostream>
#include <list>
#include "DtProductoFactura.h"
#include "DtFecha.h"


class DtFactura {
protected:
    string codVenta;
    DtFecha fechaEmision;
    list<DtProductoFactura*>productos;
    float subtotalVenta;
    float descuento;
    float montoTotalVenta;
    float montoTotalVentaConIva;

public:
    DtFactura();
    DtFactura(string codVenta, DtFecha fechaEmision, list<DtProductoFactura*>productos, float subTotal, float descuento, float montoTotalVenta, float montoTotalVentaConIva);
    string getCodVenta();
    DtFecha getFechaEmsion();
    float getSubtotalVenta();
    float getDescuento();
    virtual list<DtProductoFactura*> getProductos();
    float getMontoTotalVenta();
    float getTotalMontoVentaConIva();
    void setCodVenta(string);
    void setFechaEmision(DtFecha);
    void setProductos();

    ~DtFactura();
};


#endif //PAV_DTFACTURA_H
