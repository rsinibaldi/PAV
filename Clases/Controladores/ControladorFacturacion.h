#ifndef CONTROLADORFACTURACION
#define CONTROLADORFACTURACION

#include "../Interfaces/IControladorFacturacion.h"

class ControladorFacturacion : public IControladorFacturacion {
public:
    //Destructor
    ~ControladorFacturacion();

    //Métodos
    DtFacturaLocal facturar(int, float);
};

#endif //CONTROLADORFACTURACION