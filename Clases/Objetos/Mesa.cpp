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
VentaLocal *Mesa::getVentaLocal() {
    return this->ventaLocal;
}
void Mesa::setVentaLocal(VentaLocal *ventaLocal) {
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
    if (this->ventaLocal->tieneElProducto(pc.codigo))
        this->ventaLocal->incrementar(pc);
    else
        this->ventaLocal->agregarProducto(pc);
}
list<DtProducto> Mesa::listarProductos() {
    list<DtProducto> dtproductos = this->ventaLocal->listarProductos();
    return dtproductos;
}
void Mesa::quitarProducto(DtProductoCantidad pc) {
    this->ventaLocal->quitarProducto(pc);
}