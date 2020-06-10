#ifndef CONTROLADORBAJAPRODUCTO
#define CONTROLADORBAJAPRODUCTO

#include "../Interfaces/IControladorBajaProducto.h"

class ControladorBajaProducto : public IControladorBajaProducto {
public:
    list<DtProductoBase*> listarProductos();
    void seleccionarProducto(string);
    void cancelarBajaProducto();
    void eliminarProducto();
};

#endif //CONTROLADORBAJAPRODUCTO