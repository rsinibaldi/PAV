#ifndef CONTROLADORFACTURACION
#define CONTROLADORFACTURACION

#include "Interfaces/IControladorBajaProducto.h"
#include "DataTypes/DtFacturaLocal.h"

using namespace std;

class ControladorFacturacion : public IControladorFacturacion {
public:
    DtFacturaLocal facturar(int, float);
};

#endif //CONTROLADORFACTURACION