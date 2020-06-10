#ifndef CONTROLADORFACTURACION
#define CONTROLADORFACTURACION

#include "../Interfaces/IControladorFacturacion.h"
#include "../DataTypes/DtFacturaLocal.h"

class ControladorFacturacion : public IControladorFacturacion {
public:
    DtFacturaLocal facturar(int, float);
};

#endif //CONTROLADORFACTURACION