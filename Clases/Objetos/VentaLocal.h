#ifndef PAV_VENTALOCAL_H
#define PAV_VENTALOCAL_H


#include "Venta.h"
#include "Clases/DataTypes/DtProducto.h"
#include "Clases/DataTypes/DtProductoFactura.h"
#include "Clases/DataTypes/DtProductoCantidad.h"
#include <map>
#include <list>

class VentaLocal: public Venta {
public:
    VentaLocal();
    bool tieneProducto(string codigoProducto);
    void agregarProducto(DtProductoCantidad pc);
    void incrementar(DtProductoCantidad pc);
    map<DtProducto*, int> listarProductos();
    list<DtProductoFactura*> getDtProductoFactura();
    string getNombreMozo(string idMozo);
    float getSubtotalVenta();
};

#endif //PAV_VENTALOCAL_H
