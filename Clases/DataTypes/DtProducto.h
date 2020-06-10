#ifndef DTPRODUCTO
#define DTPRODUCTO

#include <iostream>
#include <string>
#include "DtProductoBase.h"

using namespace std;

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
    friend ostream& operator <<(ostream&, const DtProducto&);
};

#endif //DTPRODUCTO