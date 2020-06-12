#ifndef MANEJADORPRODUCTO
#define MANEJADORPRODUCTO

#include <list>
#include <map>
#include "../Objetos/Producto.h"

class ManejadorProducto {
private:
    static ManejadorProducto* instancia;
    map<string, Producto*> productos;
    ManejadorProducto();
public:
    //Instancia
    static ManejadorProducto* getInstancia();

    //Destructor
    virtual ~ManejadorProducto();

    //M�todos
    list<Producto*> getProductos();
    Producto* getProducto(string);
    void removerProducto(Producto*);
    bool agregarProducto(Producto*);
};

#endif //MANEJADORPRODUCTO