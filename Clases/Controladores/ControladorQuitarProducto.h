#ifndef CONTROLADORQUITARPRODUCTO
#define CONTROLADORQUITARPRODUCTO

#include <list>
#include "../Interfaces/IControladorQuitarProducto.h"

class ControladorQuitarProducto : public IControladorQuitarProducto {
public:
    list<DtProducto*> listarProductos(int);
    void seleccionarProductoEliminar(DtProductoCantidad);
    void cancelarQuitarProducto();
    void confirmarQuitarProducto();
};

#endif //CONTROLADORQUITARPRODUCTO