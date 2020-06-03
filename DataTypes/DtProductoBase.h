#ifndef PAV_DTPRODUCTOBASE_H
#define PAV_DTPRODUCTOBASE_H

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <DtProducto.h>

using namespace std;

class DtProductoBase {
protected:
    string codigoProducto;
    string descripcionProducto;

public:
    //constructores
    DtProductoBase();
    DtProductoBase(string, string);

    //geterAndSetter
    string getCodigoProducto();
    void setCodigoProducto(string codigoProducto);
    string  getDescripcionProducto();
    void setDescripcionProducto(string descripcionProducto);
    //destructores
    virtual ~DtProductoBase();

    //metodos


};


#endif //PAV_DTPRODUCTOBASE_H
