#ifndef ICONTROLADORQUITARPRODUCTO
#define ICONTROLADORQUITARPRODUCTO

#include <list>
#include "../DataTypes/DtProducto.h"
#include "../DataTypes/DtProductoCantidad.h"

class IControladorQuitarProducto {
public:
    virtual list<DtProducto*> listarProductos(int) = 0;
    virtual void seleccionarProductoEliminar(DtProductoCantidad) = 0;
    virtual void cancelarQuitarProducto() = 0;
    virtual void confirmarQuitarProducto() = 0;
};

#endif //ICONTROLADORQUITARPRODUCTO