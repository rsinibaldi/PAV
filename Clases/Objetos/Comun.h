#ifndef COMUN
#define COMUN

#include "Producto.h"

class Comun : public Producto {
public:
	//Constructores
	Comun(string, string, float);

	//Getters & Setters

	//Destructores
	~Comun();

	//Metodos
	TipoProducto getTipoProducto();
};

#endif //COMUN