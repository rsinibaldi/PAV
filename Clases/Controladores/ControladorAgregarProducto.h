#ifndef CONTROLADORAGREGARPRODUCTO
#define CONTROLADORAGREGARPRODUCTO

#include "../Interfaces/IControladorAgregarProducto.h"

class ControladorAgregarProducto : public IControladorAgregarProducto {
public:
    void seleccionarMesa(int);
    void seleccionarProducto(DtProductoCantidad);
    list<DtProductoBase*> listarProductos();
    void cancelarAgregarProductoVenta();
    void confirmarAgregarProductoVenta();
};

#endif //CONTROLADORAGREGARPRODUCTO