#include "Menu.h"

//Constructores
Menu::Menu() {}
Menu::Menu(string codigo, string descripcion, float precio, int cantidadComunes):Producto(codigo, descripcion, precio) {
	this->cantidadComunes = cantidadComunes;
}

//Getters & Setters
int Menu::getCantidadComunes() {
	return this->cantidadComunes;
}
void Menu::setCantidadComunes(int cantidadComunes) {
	this->cantidadComunes = cantidadComunes;
}
list<ProductoMenu*> Menu::getProductosMenu() {
	return this->productosMenu;
}
void Menu::setProductosMenu(list<ProductoMenu*> productosMenu) {
	this->productosMenu = productosMenu;
}

//Destructores
Menu::~Menu() {}

//M�todos
TipoProducto Menu::getTipoProducto() {
	return menu;
}
int Menu::eliminarComun(string codigo) { //REVISAR Producto pro, string codigo
	for (ProductoMenu* pm : this->getProductosMenu()) {
		if (pm->getCodigoComun() == codigo) {
			this->getProductosMenu().remove(pm);
			delete pm;
			this->decrementarCantidadComunes();
		}
	};
	return getCantidadComunes();
}
void Menu::decrementarCantidadComunes() {
	this->setCantidadComunes(this->getCantidadComunes() - 1);
}
void Menu::incrementarCantidadComunes() {
	this->setCantidadComunes(this->getCantidadComunes() + 1);
}
void Menu::agregarComunes(list<DtProductoCantidad*> productosComun) {
	ProductoMenu* pm;
	DtProductoCantidad* pc;
	for (DtProductoCantidad* pc : productosComun)
		pm = new ProductoMenu(pc->getCantidad());
	pm->asignarComun(pc->getCodigo());
	this->getProductosMenu().push_back(pm);
	this->incrementarCantidadComunes();
}
void Menu::aplicarDescuento() {
	this->setPrecio(this->getPrecio() * 0.90);
}
void Menu::calcularPrecio() {
	for (ProductoMenu* pm : this->getProductosMenu()) {
		float precioCom = pm->getPrecio();
		this->incrementarPrecio(precioCom);
	}
	this->aplicarDescuento();
}
void Menu::incrementarPrecio(float precio) {
	this->setPrecio(this->getPrecio() + precio);
}