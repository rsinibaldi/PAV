#ifndef VENTA
#define VENTA

#include <list>
#include <string.h>
#include "VentaProducto.h"

class Venta {
private:
    string codigo;
    list<VentaProducto>* ventaProductos;
public:
    //Constructores
    Venta();
    Venta(string);
    
    //Getters & Setters
    string getCodigo();
    void setCodigoVenta(string);
    list<VentaProducto>* getVentaProductos();
    void setVentaProductos(list<VentaProducto>*);

    //Destructores
    ~Venta();

    //M�todos
    void eliminarProducto(string);
};

#endif //VENTA