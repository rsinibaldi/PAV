#ifndef DTFACTURA
#define DTFACTURA

#include <list>
#include "DtFechaHora.h"
#include "DtProductoFactura.h"

class DtFactura {
protected:
    string codVenta;
    DtFechaHora fechaEmision;
    list<DtProductoFactura*> productos;
    float subtotalVenta;
    float descuento;
    float montoTotalVenta;
    float montoTotalVentaConIva;
public:
    //Constructores
    DtFactura();
    DtFactura(string, DtFechaHora, list<DtProductoFactura*>, float, float, float, float);

    //Getters & Setters
    string getCodVenta();
    void setCodVenta(string);
    DtFechaHora getFechaEmision();
    void setFechaEmision(DtFechaHora);
    list<DtProductoFactura*> getProductos();
    void setProductos(list<DtProductoFactura*>);
    float getSubtotalVenta();
    void setSubtotalVenta(float);
    float getDescuento();
    void setDescuento(float);
    float getMontoTotalVenta();
    void setMontoTotalVenta(float);
    float getTotalMontoVentaConIva();
    void setTotalMontoVentaConIva(float);

    //Destructores
    ~DtFactura();

    //Métodos
};

#endif //DTFACTURA