#include "Comun.h"

//Constructores
Comun::Comun(string codigo, string descripcion, float precio):Producto(codigo, descripcion, precio) {}

//Getters & Setters

//Destructores
Comun::~Comun() {}

//M�todos
TipoProducto Comun::getTipoProducto() {
	return comun;
}