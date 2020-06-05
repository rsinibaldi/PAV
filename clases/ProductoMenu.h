#ifndef ProductoMenu_H
#define ProductoMenu_H

#include "Producto.h" // ?
#include "Comun.h"
#include <string.h>
#include <iostream>

using namespace std;


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
