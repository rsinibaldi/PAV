#ifndef MANEJADORVENTA
#define MANEJADORVENTA

#include <list>
#include <map>
#include <string>
#include "Objetos/Venta.h"

using namespace std;

class ManejadorVenta {
private:
    static ManejadorVenta* instancia;
    map<string, Venta*> socios;
    ManejadorVenta();
public:
    static ManejadorVenta* getInstancia();

    list<Venta*> getVentas();
    Venta* getVenta(string);
    void removerVenta(Venta*);
    bool agregarVenta(Venta*);

    virtual ~ManejadorVenta();
};

#endif //MANEJADORVENTA