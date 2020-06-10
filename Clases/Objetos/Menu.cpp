#include "Menu.h"

//Constructores
Menu::Menu() {}
Menu::Menu(int cantidadComunes) {
	this->cantidadCantidad = cantidadComunes;
}

//Getters & Setters
int Menu::getCantidadComunes() {
	return this->cantidadComunes;
}
void Menu::setCantidadComunes(int cantidadComunes) {
	this->cantidadComunes = cantidadComunes;
}
list<ProductoMenu>* Menu::getProductosMenu() {
	return this->productosMenu;
}
void Menu::setProductosMenu(list<ProductoMenu>* productosMenu) {
	this->productosMenu = productosMenu;
}

//Destructores
Menu::~Menu() {}

//Métodos
TipoProducto Menu::getTipoProducto() {
	return menu;
}
int Menu::eliminarComun(Producto pro, string codigo) {
	for each (ProductoMenu* pm in this->productosMenu) {
		if (pm->getCodigoComun() == codigo) {
			this->productosMenu.remove(pm);
			delete pm;
			this->decrementarCantidadComunes();
		}
	}
	return getCantidadComunes();
}
void Menu::decrementarCantidadComunes() {
	this->cantComunes--;
}
void Menu::incrementarCantidadComunes() {
	this->cantComunes++;
}
void Menu::agregarComunes(list<DtProductoCantidad> productosComun) {
	ProductoMenu* pm;
	for each (DtProductoCantidad* pc in productosComun)
		pm = new ProductoMenu(pc.cantidad);
	pm->asignarComun(pc.codigo);

	this->productosMenu.push_back(pm);
	this->incrementarCantidadComunes();
}
void Menu::aplicarDescuento() {
	this->precio = this->precio * 0.90;
}
void Menu::calcularPrecio() {
	for each (ProductoMenu* pm in this->productosMenu) {
		float precioCom = pm->getPrecio();
		this->incrementarPrecio(precioCom);
	}
	this->aplicarDescuento();
}
void Menu::incrementarPrecio(float precio) {
	this->precio = this->precio + precio;
}