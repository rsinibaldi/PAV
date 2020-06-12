#include "Comun.h"

//Constructores
Comun::Comun(string codigo, string descripcion, float precio):Producto(codigo, descripcion, precio) {}

//Getters & Setters

//Destructores
Comun::~Comun() {}

//Métodos
TipoProducto Comun::getTipoProducto() {
	return comun;
}