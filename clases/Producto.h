#ifndef Producto_H
#define Producto_H

#include "../DataTypes/DtProductoBase.h"
#include "../enum/TipoProducto.h"
#include <string.h>
#include <iostream>

using namespace std;

class Producto {
private:
	string codigo;
	string descripcion;
	float precio;

public:
	//Constructores
	Producto();
	Producto(int, float, float);

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
virtual TipoProducto getTipoProducto() = 0;
virtual DtProductoBase getDtProductoBase() = 0;


};

#endif
