#ifndef DTFACTURA
#define DTFACTURA

#include <list>
#include <string>
#include "DtFecha.h"
#include "DtProductoFactura.h"

using namespace std;

class DtFactura {
protected:
    string codVenta;
    DtFecha fechaEmision;
    list<DtProductoFactura*> productos;
    float subtotalVenta;
    float descuento;
    float montoTotalVenta;
    float montoTotalVentaConIva;
public:
    //Constructores
    DtFactura();
    DtFactura(string, DtFecha, list<DtProductoFactura*>, float, float, float, float);

    //Getters & Setters
    string getCodVenta();
    void setCodVenta(string);
    DtFecha getFechaEmision();
    void setFechaEmision(DtFecha);
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