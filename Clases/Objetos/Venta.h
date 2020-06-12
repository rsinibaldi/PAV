#ifndef VENTA
#define VENTA

#include "../DataTypes/DtFactura.h"
#include "VentaProducto.h"

class Venta {
private:
    string codigo;
    DtFactura* factura;
    list<VentaProducto>* ventaProductos;
public:
    //Constructores
    Venta();
    Venta(string);
    
    //Getters & Setters
    string getCodigo();
    void setCodigoVenta(string);
    DtFactura* getFactura();
    void setFactura(DtFactura*);
    list<VentaProducto*> getVentaProductos();
    void setVentaProductos(list<VentaProducto*>);

    //Destructores
    ~Venta();

    //Métodos
    void eliminarProducto(string);
};

#endif //VENTA