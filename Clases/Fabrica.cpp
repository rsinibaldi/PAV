#include "Fabrica.h"
#include "Controladores/IControladorAgregarProducto.h"
#include "Controladores/IControladorAltaProducto.h"
#include "Controladores/IControladorBajaProducto.h"
#include "Controladores/IControladorFacturacion.h"
#include "Controladores/IControladorIniciarVenta.h"
#include "Controladores/IControladorQuitarProducto.h"

Fabrica* Fabrica::instancia = NULL;

Fabrica::Fabrica() {}

Fabrica* Fabrica::getInstancia() {
    if (instancia == NULL)
        instancia = new Fabrica();
    return instancia;
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

Fabrica::~Fabrica() {}