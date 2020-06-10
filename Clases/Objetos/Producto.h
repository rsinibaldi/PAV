#ifndef PRODUCTO
#define PRODUCTO

<<<<<<< HEAD:clases/Producto.h
#include "../DataTypes/DtProductoBase.h"
#include "../enum/TipoProducto.h"

#include <string.h>
#include <iostream>
#include <stdio.h>

=======
#include <iostream>
#include <string.h>
#include "../DataTypes/DtProductoBase.h"
#include "../../enum/TipoProducto.h"
>>>>>>> ce27c4f7e9071e4b3830c708bebcb7411da0e4a0:Clases/Objetos/Producto.h

using namespace std;

class Producto{
private:
	string codigo;
	string descripcion;
	float precio;
public:
	//Constructores
	Producto();
	Producto(string, string, float);

	//Getters & Setters
	string getCodigo();
	void setCodigo(string);
	string getDescripcion();
	void setDescripcion(string);
	float getPrecio();
	void setPrecio(float);

	//Destructores
	~Producto();

	//Métodos
	DtProductoBase getDtProductoBase();
	virtual TipoProducto getTipoProducto() = 0;
};

#endif //PRODUCTO