#include "ProductoMenu.h"
#include "../Manejadores/ManejadorProducto.h"

//Constructores
ProductoMenu::ProductoMenu() {}
ProductoMenu::ProductoMenu(int cantidad) {
	this->cantidad = cantidad;
}

//Getters & Setters
int ProductoMenu::getCantidad() {
	return this->cantidad;
}
void ProductoMenu::setCantidad(int cantidad) {
	this->cantidad = cantidad;
}
Comun* ProductoMenu::getComun() {
	return this->comun;
}
void ProductoMenu::setComun(Comun* comun) {
	this->comun = comun;
}

//Destructores
ProductoMenu::~ProductoMenu() {}

//Métodos
string ProductoMenu::getCodigoComun() {
	return this->getComun()->getCodigo();
}
void ProductoMenu::asignarComun(string codigo) {
	ManejadorProducto* mP = ManejadorProducto::getInstancia();
	Comun* com = dynamic_cast<Comun*>(mP->getProducto(codigo));
	this->setComun(com);
}
float ProductoMenu::getPrecio() {
	return this->getComun()->getPrecio() * this->getCantidad();
}