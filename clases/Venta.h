#ifndef PAV_VENTA_H
#define PAV_VENTA_H
#include <string.h>
#include <iostream>

using namespace std;

class Venta {
private:
    string codigo;
public:
    Venta();
    Venta(string codigo);
    string getCodigoVenta();
    void eliminarProducto(string codigo);
};


#endif //PAV_VENTA_H
