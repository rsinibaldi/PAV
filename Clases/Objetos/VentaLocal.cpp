#include "../Manejadores/ManejadorProducto.h"
#include "VentaLocal.h"

//Constructores
VentaLocal::VentaLocal() {}
VentaLocal::VentaLocal(string codigo):Venta(codigo) {}

//Getters & Setters
/*Mozo VentaLocal::getMozo() {
    return this->mozo;
}
void VentaLocal::setMozo(Mozo mozo) {
    this->mozo = mozo;
}*/

//Destructores
VentaLocal::~VentaLocal() {}

//Métodos
bool VentaLocal::tieneElProducto(string codigoProducto) {
    bool tiene = false;
    for (VentaProducto* vp : this->getVentaProductos()) {
        if (vp->getCodigoProducto() == codigoProducto) {
            tiene = true;
            return 0;
        }
    }
    return tiene;
}
void VentaLocal::agregarProducto(DtProductoCantidad pc) {
    ManejadorProducto* mP = ManejadorProducto::getInstancia();
    Producto* pro = mP->getProducto(pc.getCodigo());
    VentaProducto* vp = new VentaProducto(pc.getCantidad(), pro);
    this->getVentaProductos().push_back(vp);
}
void VentaLocal::incrementar(DtProductoCantidad pc) {
    for (VentaProducto* vp : this->getVentaProductos()) {
        if (vp->getCodigoProducto() == pc.getCodigo())
            vp->incrementarCantidad(pc.getCantidad());
    }
}
list<DtProducto*> VentaLocal::listarProductos() {
    list<DtProducto*> dtproductos;
    for (VentaProducto* vp : this->getVentaProductos()) {
        DtProducto* dtp = vp->getDtProducto();
        dtproductos.push_back(dtp);
    }
    return dtproductos;
}
string VentaLocal::getNombreMozo() {
    return ""; //this->getMozo()->getNombre();
}
float VentaLocal::getSubTotalVenta() {
    float suma = 0;
    for (VentaProducto* vp : this->getVentaProductos())
        suma += vp->getPrecioProductoEnVenta();
    return suma;
}
list<DtProductoFactura*> VentaLocal::getDtProductoFactura() {
    list<DtProductoFactura*> dtproductosFact;
    for (VentaProducto* vp : this->getVentaProductos()) {
        DtProductoFactura* dtpf = vp->getDtProductoFactura();
        dtproductosFact.push_back(dtpf);
    }
    return dtproductosFact;
}