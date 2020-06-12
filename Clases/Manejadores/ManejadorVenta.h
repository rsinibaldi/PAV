#ifndef MANEJADORVENTA
#define MANEJADORVENTA

#include <map>
#include "../Objetos/Venta.h"

class ManejadorVenta {
private:
    static ManejadorVenta* instancia;
    map<string, Venta*> ventas;
    ManejadorVenta();
public:
    //Instancia
    static ManejadorVenta* getInstancia();

    //Destructor
    virtual ~ManejadorVenta();

    //Métodos
    list<Venta*> getVentas();
    Venta* getVenta(string);
    void removerVenta(Venta*);
    bool agregarVenta(Venta*);
};

#endif //MANEJADORVENTA