#ifndef CONTROLADORBAJAPRODUCTO
#define CONTROLADORBAJAPRODUCTO

#include "../Interfaces/IControladorBajaProducto.h"

class ControladorBajaProducto : public IControladorBajaProducto {
private:
    string codigo;
public:
    //Getters & Setters
    string getCodigo();
    void setCodigo(string);

    //Destructor
    ~ControladorBajaProducto();

    //Métodos
    list<DtProductoBase*> listarProductos();
    void seleccionarProducto(string);
    void cancelarBajaProducto();
    void eliminarProducto();
};

#endif //CONTROLADORBAJAPRODUCTO