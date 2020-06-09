#ifndef ICONTROLADORFACTURACION
#define ICONTROLADORFACTURACION

#include "DataTypes/DtFacturaLocal.h"

using namespace std;

class IControladorFacturacion {
public:
    virtual DtFacturaLocal facturar(int, float) = 0;
};

#endif //ICONTROLADORFACTURACION