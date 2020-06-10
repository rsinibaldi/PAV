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

}
Venta* ManejadorVenta::getVenta(string cod) {

}
void ManejadorVenta::removerVenta(Venta* v) {
}
bool ManejadorVenta::agregarVenta(Venta* v) {

}