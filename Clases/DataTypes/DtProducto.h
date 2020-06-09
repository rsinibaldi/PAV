#ifndef DTPRODUCTO_H
#define DTPRODUCTO_H

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "DtProductoBase.h"


using namespace std;

class DtProducto: public DtProductoBase {
private:
    float precioProducto;
    int cantidad;

 public:
    //constructores
    DtProducto();
    DtProducto(string codigoProducto, string descripcionProducto, float precioProducto, int cantidad);
    //geterAndSetter
    float getPrecioProducto();
    void setPrecioProducto(float precioProducto);
    int getCantidad();
    void setCantidad(int cantidad);

    //destructores
    virtual ~DtProducto();

    friend ostream& operator <<(ostream&, const DtProducto&);
    //metodos

    
};

#endif