#include "Mesa.h"

//Constructores
Mesa::Mesa() {}
Mesa::Mesa(int nroMesa) {
    this->numero = nroMesa;
}

//Getters & Setters
string Mesa::getNumero() {
    return this->numero;
}
void Mesa::setNumero(int numero) {
    this->numero = numero;
}
VentaLocal* Mesa::getVentaLocal() {
    return this->ventaLocal;
}
void Mesa::setVentaLocal(VentaLocal* ventaLocal) {
    this->ventaLocal = ventaLocal;
}

//Destructores
Mesa::~Mesa() {};

//Métodos
bool Mesa::tieneVenta() {
    VentaLocal* vl = this->getVentaLocal();
    return vl == NULL;
}
void Mesa::agregarProducto(DtProductoCantidad pc) {
    if (this->setVentaLocal()->tieneElProducto(pc.getCodigo()))
        this->setVentaLocal()->incrementar(pc);
    else
        this->setVentaLocal()->agregarProducto(pc);
}
list<DtProducto*> Mesa::listarProductos() {
    return this->getVentaLocal()->listarProductos();
}
void Mesa::quitarProducto(DtProductoCantidad pc) {
    this->getVentaLocal()->eliminarProducto(pc.getCodigo()); //REVISAR
}