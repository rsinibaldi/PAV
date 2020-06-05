#ifndef Comun_H
#define Comun_H

#include "../clases/Producto.h"


class Comun: public Producto {
private:
				TipoProducto tipoProd;
public:
				//Constructor
				Comun();

				//Metodos
				TipoProducto getTipoProducto();

				//Destructor
				~Comun();
};

#endif //Comun_H
