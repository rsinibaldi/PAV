#ifndef DTFACTURALOCAL
#define DTFACTURALOCAL

#include <iostream>
#include <list>
#include <string>
#include "DtFactura.h"

class DtFacturaLocal : public DtFactura {
private:
    string nombreMozo;
public:
    DtFacturaLocal();
    DtFacturaLocal(string codVenta, DtFecha fechaEmision, list<DtProductoFactura*>productos, float subTotal, float descuento, float montoTotalVenta, float montoTotalVentaConIva);
    
    string getNombreMozo();
    void setNombreMozo();

    virtual ~DtFacturaLocal();
};

#endif //DTFACTURALOCAL
