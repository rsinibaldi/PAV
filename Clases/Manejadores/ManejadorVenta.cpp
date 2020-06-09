#include <list>
#include <string>
#include "ManejadorVenta.h"

using namespace std;

ManejadorVenta* ManejadorVenta::instancia = NULL;

ManejadorVenta::ManejadorVenta() {}

static ManejadorVenta* ManejadorVenta::getInstancia() {
    if (instancia == NULL)
        instancia = new ManejadorVenta();
    return instancia;
}

list<Venta*> ManejadorVenta::getVentas() {

}

Venta* ManejadorVenta::getVenta(string cod) {

}

void ManejadorVenta::removerVenta(Venta* v) {
}

bool ManejadorVenta::agregarVenta(Venta* v) {

}

ManejadorVenta::~ManejadorVenta() {}