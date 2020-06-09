#include "ProductoMenu.h"


//Constructores

Menu::Menu(){}
Menu::Menu(int cantidadComunes){
					this->cantidadCantidad = cantidadComunes;
}


//Getters and setters

int Menu::getCantidadComunes(){
					return this->cantidadComunes;
}
void Menu::setCantidadComunes(int cantidadComunes){
					this->cantidadComunes = cantidadComunes;
}

//Destructores

Menu::~Menu(){}


//Metodos

TipoProducto Menu::getTipoProducto(){

}
void Menu::eliminarComun(Producto pro, string codigo){

}
void Menu::decrementarCantidadComunes(int cantidad){

}
void Menu::incrementarCantidadComunes(int cantidad){

}
void Menu::agregarComunes(DTProductoCantidad[] prouctoAgrega){

}
void Menu::aplicarDescuento(){

}
void Menu::calcularPrecio(){

}
void Menu::incrementarPrecio(float precio){

}
