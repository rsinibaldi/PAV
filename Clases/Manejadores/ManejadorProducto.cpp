#include <list>
#include <string>
#include "ManejadorProducto.h"

using namespace std;

ManejadorProducto* ManejadorProducto::instancia = NULL;

ManejadorProducto::ManejadorProducto() {}

static ManejadorProducto* ManejadorProducto::getInstancia() {
    if (instancia == NULL)
        instancia = new ManejadorProducto();
    return instancia;
}

list<Producto*> ManejadorProducto::getProductos() {

}

Producto* ManejadorProducto::getProducto(string cod) {

}

void ManejadorProducto::removerProducto(Producto* p) {

}

bool ManejadorProducto::agregarProducto(Producto* p) {

}

ManejadorProducto::~ManejadorProducto() {}