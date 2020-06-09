#ifndef FABRICA
#define FABRICA

#include "Interfases/IControladorAgregarProducto.h"
#include "Interfases/IControladorAltaProducto.h"
#include "Interfases/IControladorBajaProducto.h"
#include "Interfases/IControladorFacturacion.h"
#include "Interfases/IControladorIniciarVenta.h"
#include "Interfases/IControladorQuitarProducto.h"

class Fabrica {
private:
    static Fabrica* instancia;
    Fabrica();
public:
    static Fabrica* getInstancia();

    IControladorAgregarProducto* getIControladorAgregarProducto();
    IControladorAltaProducto* getIControladorAltaProducto();
    IControladorBajaProducto* getIControladorBajaProducto();
    IControladorFacturacion* getIControladorFacturacion();
    IControladorIniciarVenta* getIControladorIniciarVenta();
    IControladorQuitarProducto* getIControladorQuitarProducto();

    ~Fabrica();
};

#endif //FABRICA