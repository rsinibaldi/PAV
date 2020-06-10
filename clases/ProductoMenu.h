#ifndef ProductoMenu_H
#define ProductoMenu_H

#include "Producto.h" // ?
#include "Comun.h"
#include <stdio.h>
#include <iostream>
#include <string.h>

using	namespace	 std;

class ProductoMenu{
private:
					int cantidad;

public:
					//Constructor
					ProductoMenu();
					ProductoMenu(int);

					//GyS
					int getCantidad();
					void setCantidad(int);

					//Destructores
					~ProductoMenu();

					//Metodos

					string getCodigoComun();
					void asignarComun(string);
					float getPrecio();

};

#endif // PRODUCTOMENU_H
