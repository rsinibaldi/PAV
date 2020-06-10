#include "ProductoMenu.h"
#include "../Manejadores/ManejadorProducto.h"

//Constructores
ProductoMenu::ProductoMenu(){}
ProductoMenu::ProductoMenu(int cantidad){
	this->cantidad = cantidad;
}

//Getters & Setters
int ProductoMenu::getCantidad(){
	return this->cantidad;
}
void ProductoMenu::setCantidad(int cantidad){
	this->cantidad = cantidad;
}
Comun* ProductoMenu::getComun() {
	return this->comun;
}
void ProductoMenu::setComun(Comun* comun) {
	this->comun = comun;
}

//Destructores
ProductoMenu::~ProductoMenu(){}

//Métodos
string ProductoMenu::getCodigoComun(){
	return this->comun->getCodigo();
}
void ProductoMenu::asignarComun(string codigo){
	ManejadorProducto* mP = ManejadorProducto::getInstancia();
	Producto* c = mP->getProducto(codigo);
	Comun* com = dynamic_cast<Comun*>(c); //REVISAR
	this->setComun(com);
}
float ProductoMenu::getPrecio(){
	return this->comun->getPrecio() * this->cantidad;
}