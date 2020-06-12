#include "Fabrica.h"
#include "Controladores/ControladorAgregarDatos.h"
#include "Controladores/ControladorAgregarProducto.h"
#include "Controladores/ControladorAltaProducto.h"
#include "Controladores/ControladorBajaProducto.h"
#include "Controladores/ControladorFacturacion.h"
#include "Controladores/ControladorIniciarVenta.h"
#include "Controladores/ControladorQuitarProducto.h"

//Constructor
Fabrica::Fabrica() {}

//Instancia
Fabrica* Fabrica::instancia = NULL;
Fabrica* Fabrica::getInstancia() {
    if (instancia == NULL)
        instancia = new Fabrica();
    return instancia;
}

//Destructor
Fabrica::~Fabrica() {}

//Metodos
IControladorAgregarDatos* Fabrica::getIControladorAgregarDatos() {
    return new ControladorAgregarDatos();
}
IControladorAgregarProducto* Fabrica::getIControladorAgregarProducto() {
    return new ControladorAgregarProducto();
}
IControladorAltaProducto* Fabrica::getIControladorAltaProducto() {
    return new ControladorAltaProducto();
}
IControladorBajaProducto* Fabrica::getIControladorBajaProducto() {
    return new ControladorBajaProducto();
}
IControladorFacturacion* Fabrica::getIControladorFacturacion() {
    return new ControladorFacturacion();
}
IControladorIniciarVenta* Fabrica::getIControladorIniciarVenta() {
    return new ControladorIniciarVenta();
}
IControladorQuitarProducto* Fabrica::getIControladorQuitarProducto() {
    return new ControladorQuitarProducto();
}