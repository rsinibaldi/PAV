#ifndef Menu_H
#define Menu_H

#include "TipoProducto.h"
#include "Producto.h"
#include "Comun.h"
#include <string.h>
#include <iostream>

using namespace std;


class ProductoMenu{
private:
					int cantidadComunes;

public:

					Menu();
					Menu(int);
					int getCantidadComunes();
					void setCantidadComunes(int);
					~Menu();
					TipoProducto getTipoProducto();
					void eliminarComun(Producto, string);
					void decrementarCantidadComunes(int);
          void incrementarCantidadComunes(int);
          void agregarComunes(DTProductoCantidad[]);
          void aplicarDescuento();
          void calcularPrecio();
          void incrementarPrecio(float);


};

#endif
