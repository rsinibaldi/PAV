#ifndef CONTROLADORQUITARPRODUCTO
#define CONTROLADORQUITARPRODUCTO

#include "Interfaces/IControladorQuitarProducto.h"

using namespace std;

class ControladorQuitarProducto : public IControladorQuitarProducto {
public:
    list<DtProducto*> listarProductos(int);
    void seleccionarProductoEliminar(DtProductoCantidad);
    void cancelarQuitarProducto();
    void confirmarQuitarProducto();
};

#endif //CONTROLADORQUITARPRODUCTO