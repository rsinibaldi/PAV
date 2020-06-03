#ifndef PAV_DTPRODUCTOFACTURA_H
#define PAV_DTPRODUCTOFACTURA_H
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace  std;

class DtProductoFactura {
private:
    string descripcion;
    float precio;
    int cantidad;
public:
    DtProductoFactura();
    DtProductoFactura(string, float, int);
    string getDescripcion();
    float getPrecio();
    int getCantidad() const;
    void setDescripcion(string);
    void setPrecio(float);
    void setCantidad(int);
    ~DtProductoFactura();

};


#endif //PAV_DTPRODUCTOFACTURA_H
