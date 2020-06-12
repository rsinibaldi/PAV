#ifndef FABRICA
#define FABRICA

#include "Interfaces/IControladorAgregarProducto.h"
#include "Interfaces/IControladorAltaProducto.h"
#include "Interfaces/IControladorBajaProducto.h"
#include "Interfaces/IControladorFacturacion.h"
#include "Interfaces/IControladorIniciarVenta.h"
#include "Interfaces/IControladorQuitarProducto.h"
#include "Interfaces/IControladorAgregarDatos.h"

class Fabrica {
private:
    static Fabrica* instancia;
    Fabrica();
public:
    //Instancia
    static Fabrica* getInstancia();

    //Destructor
    ~Fabrica();

    //M�todos
    IControladorAgregarProducto* getIControladorAgregarProducto();
    IControladorAltaProducto* getIControladorAltaProducto();
    IControladorBajaProducto* getIControladorBajaProducto();
    IControladorFacturacion* getIControladorFacturacion();
    IControladorIniciarVenta* getIControladorIniciarVenta();
    IControladorQuitarProducto* getIControladorQuitarProducto();
    IControladorAgregarDatos* getIControladorAgregarDatos();
};

#endif //FABRICA