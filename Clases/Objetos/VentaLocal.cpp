#include "VentaLocal.h"
#include <string.h>
#include <iostream>
#include "Venta.h"
#include "Producto.h"
#include "VentaProducto.h"
#include "../Manejadores/ManejadorVenta.h"


using namespace std;

VentaLocal::VentaLocal(){}

bool VentaLocal::tieneProducto(string codigoProducto){
    int i=0;
    bool tiene= false;
    ManejadorVenta* mv= ManejadorVenta::getInstancia();
    VentaProducto* ventaProd ;
    Venta* venta;
    string codV= ventaProd->getCodigoProducto();
    while(!tiene && i< 


}

void VentaLocal::agregarProducto(DtProductoCantidad pc){

}

void VentaLocal::incrementar(DtProductoCantidad pc){

}

map<DtProducto*, int> VentaLocal::listarProductos(){

}

list<DtProductoFactura*> VentaLocal::getDtProductoFactura(){

}