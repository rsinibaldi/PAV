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
    list<Producto*> lProductos;
    for (map<string, Producto*>::iterator it = this->productos.begin(); it != this->productos.end(); ++it)
        lProductos.push_back(it->second);
    return lProductos;
}
Producto* ManejadorProducto::getProducto(string cod) {
    map<string, Producto*>::iterator it = this->productos.find(cod);
    return it->second;
}
void ManejadorProducto::removerProducto(Producto* p) {
    map<string, Producto*>::iterator it = this->productos.find(p->getCodigo());
    this->productos.erase(it);
}
bool ManejadorProducto::agregarProducto(Producto* p) {
    this->productos.insert(pair<string, Producto*>(p->getCodigo(), p));
}