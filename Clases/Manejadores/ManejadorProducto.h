#ifndef MANEJADORPRODUCTO
#define MANEJADORPRODUCTO

#include <list>
#include <map>
#include <string>
#include "Objetos/Producto.h"

using namespace std;

class ManejadorProducto {
private:
    static ManejadorProducto* instancia;
    map<string, Producto*> socios;
    ManejadorProducto();
public:
    static ManejadorProducto* getInstancia();

    list<Producto*> getProductos();
    Producto* getProducto(string);
    void removerProducto(Producto*);
    bool agregarProducto(Producto*);

    virtual ~ManejadorProducto();
};

#endif //MANEJADORPRODUCTO