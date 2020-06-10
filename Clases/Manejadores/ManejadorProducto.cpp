#include "ManejadorProducto.h"

//Constructor
ManejadorProducto::ManejadorProducto() {}

//Instancia
ManejadorProducto* ManejadorProducto::instancia = NULL;
ManejadorProducto* ManejadorProducto::getInstancia() {
    if (instancia == NULL)
        instancia = new ManejadorProducto();
    return instancia;
}

//Destructor
ManejadorProducto::~ManejadorProducto() {}

//Métodos
list<Producto*> ManejadorProducto::getProductos() {

}
Producto* ManejadorProducto::getProducto(string cod) {

}
void ManejadorProducto::removerProducto(Producto* p) {

}
bool ManejadorProducto::agregarProducto(Producto* p) {

}