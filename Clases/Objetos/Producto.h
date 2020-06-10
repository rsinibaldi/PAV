#ifndef PRODUCTO
#define PRODUCTO

#include <iostream>
#include <string>
#include "../DataTypes/DtProductoBase.h"
#include "../../enum/TipoProducto.h"

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