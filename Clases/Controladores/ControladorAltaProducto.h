#ifndef CONTROLADORALTAPRODUCTO
#define CONTROLADORALTAPRODUCTO

#include <list>
#include <string>
#include "../Interfaces/IControladorAltaProducto.h"
#include "../DataTypes/DtProductoCantidad.h"

using namespace std;

class ControladorAltaProducto : public IControladorAltaProducto {
private:
    string codMenu;
    string descMenu;
    string codComun;
    string descComun;
    list<DtProductoCantidad> productosComun;
    float precioComun;
public:
    //Getters & Setters
    string getCodMenu();
    void setCodMenu(string);
    string getDescMenu();
    void setDescMenu(string);
    string getCodComun();
    void setCodComun(string);
    string getDescComun();
    void setDescComun(string);
    list<DtProductoCantidad> getProductosComun();
    void setProductosComun(list<DtProductoCantidad>);
    float getPrecioComun();
    void setPrecioComun(float);

    //Destructor
    ~ControladorAltaProducto();

    //Métodos
    list<DtProductoBase*> listarProductosComunes();
    void datosProductoComun(string, string, float);
    void cancelarProductoComun();
    void confirmarProductoComun();
    void datosProductoMenu(string, string);
    void agregarAlProductoMenu(DtProductoCantidad);
    void cancelarProductoMenu();
    void confirmarProductoMenu();
};

#endif //CONTROLADORALTAPRODUCTO