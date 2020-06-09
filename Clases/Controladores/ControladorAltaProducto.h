#ifndef CONTROLADORALTAPRODUCTO
#define CONTROLADORALTAPRODUCTO

#include "Interfaces/IControladorAltaProducto.h"
#include <string.h>

using namespace std;

class ControladorAltaProducto : public IControladorAltaProducto {
private:
    string codMenu, descMenu, codComun, descComun;
    list<DtProductoCantidad> productoComun;
    float precioComun;
public:
    string getCodMenu();
    string getDescMenu();
    string getCodComun();
    string getDescComun();
    list<DtProductoCantidad> getProductoComun();
    float getPrecioComun();

    void setCodMenu(string);
    void setDescMenu(string);
    void setCodComun(string);
    void setDescComun(string);
    void setProductoComun(list<DtProductoCantidad>);
    void setPrecioComun(float);

    list<DtProductoBase*> listarProductosComunes();
    void datosProductoComun(string, string, float);
    void cancelarProductoComun();
    void confirmarProductoComun();
    void datosProductoMenu(string, string);
    void agregarAlProductoMenu(DtProductoCantidad);
    void cancelarProductoMenu();
    void confirmarProductoMenu();

    ~ControladorAltaProducto();
};

#endif //CONTROLADORALTAPRODUCTO