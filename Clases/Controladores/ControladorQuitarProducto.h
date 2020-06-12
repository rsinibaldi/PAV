#ifndef CONTROLADORQUITARPRODUCTO
#define CONTROLADORQUITARPRODUCTO

#include "../Interfaces/IControladorQuitarProducto.h"

class ControladorQuitarProducto : public IControladorQuitarProducto {
private:
    int mesa;
    DtProductoCantidad productoVenta;
public:
    //Getters & Setters
    int getMesa();
    void setMesa(int);
    DtProductoCantidad getProductoVenta();
    void setProductoVenta(DtProductoCantidad);

    //Destructor
    ~ControladorQuitarProducto();

    //M�todos
    list<DtProducto*> listarProductos(int);
    void seleccionarProductoEliminar(DtProductoCantidad);
    void cancelarQuitarProducto();
    void confirmarQuitarProducto();
};

#endif //CONTROLADORQUITARPRODUCTO