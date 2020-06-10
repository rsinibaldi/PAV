#ifndef COMUN
#define COMUN

#include "Producto.h"

class Comun: public Producto {
public:
	//Constructores
	Comun();

	//Destructores
	~Comun();

	//Metodos
	TipoProducto getTipoProducto();
};

#endif //COMUN