#ifndef PAV_DTPRODUCTOCANTIDAD_H
#define PAV_DTPRODUCTOCANTIDAD_H
#include <iostream>
#include "DtProductoFactura.h"
#include "DtFecha.h"

using namespace std;

class DtProductoCantidad {
private:
    string codigo;
    int cantidad;

public:
    DtProductoCantidad();
    DtProductoCantidad(string codigo, int cantidad);
    string getCodigo();
    int getCantidad();
    void setCodigo(string);
    void setCantidad(int);
    ~DtProductoCantidad();

};




#endif //PAV_DTPRODUCTOCANTIDAD_H
