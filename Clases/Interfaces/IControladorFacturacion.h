#ifndef ICONTROLADORFACTURACION
#define ICONTROLADORFACTURACION

#include "../DataTypes/DtFacturaLocal.h"

class IControladorFacturacion {
public:
    virtual DtFacturaLocal facturar(int, float) = 0;
};

#endif //ICONTROLADORFACTURACION