#include "ManejadorVenta.h"

//Constructor
ManejadorVenta::ManejadorVenta() {}

//Instancia
ManejadorVenta* ManejadorVenta::instancia = NULL;
ManejadorVenta* ManejadorVenta::getInstancia() {
    if (instancia == NULL)
        instancia = new ManejadorVenta();
    return instancia;
}

//Destructor
ManejadorVenta::~ManejadorVenta() {}

//Métodos
list<Venta*> ManejadorVenta::getVentas() {
    list<Venta*> lVentas;
    for (map<string, Venta*>::iterator it = this->ventas.begin(); it != this->ventas.end(); ++it)
        lVentas.push_back(it->second);
    return lVentas;
}
Venta* ManejadorVenta::getVenta(string cod) {
    map<string, Venta*>::iterator it = this->ventas.find(cod);
    return it->second;
}
void ManejadorVenta::removerVenta(Venta* v) {
    map<string, Venta*>::iterator it = this->ventas.find(v->getCodigo());
    this->ventas.erase(it);
}
bool ManejadorVenta::agregarVenta(Venta* v) {
    this->ventas.insert(pair<string, Venta*>(v->getCodigo(), v));
}