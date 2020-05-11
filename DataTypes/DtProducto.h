#ifndef DTPRODUCTO.H
#define DTPRODUCTO.H

#include <stdio.h>
#include <string.h>

using namespace std;

class DtProducto {
private:
    string codigoProducto;
    string descripcionProducto;
    float precioProducto;
    int cantidad;

 public:
    //constructores
    DtProducto();
    DtProducto( string codigoProducto, string descripcionProducto, float precioProducto, int cantidad);


    //geterAndSetter
    string getCodigoProducto();
    void setCodigoProducto(string codigoProducto);
    string getDescripcionProducto();
    void setDescripcionProducto(string descripcionProducto);
    float getPrecioProducto();
    void setPrecioProducto(float precioProducto);
    int getCantidad();
    void setCantidad(int cantidad);

    //destructores
    ~DtProducto();

    //metodos

    
};

#endif