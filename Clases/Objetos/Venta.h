#ifndef PAV_VENTA_H
#define PAV_VENTA_H
#include <list>
#include <string.h>
#include <iostream>
#include <VentaProducto.h>

using namespace std;

class Venta {
private:
    string codigo;
		<list VentaProducto>* ventasProducto;
public:
    Venta();
    Venta(string codigo);
    string getCodigoVenta();
    void eliminarProducto(string codigo);
};


#endif //PAV_VENTA_H
