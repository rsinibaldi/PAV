#ifndef DTPRODUCTO
#define DTPRODUCTO

#include "DtProductoBase.h"

class DtProducto: public DtProductoBase {
private:
    float precio;
    int cantidad;
 public:
     //Constructores
    DtProducto();
    DtProducto(string, string, float, int);

    //Getters & Setters
    float getPrecio();
    void setPrecio(float);
    int getCantidad();
    void setCantidad(int);

    //Destructores
    virtual ~DtProducto();

    //Métodos
};

#endif //DTPRODUCTO