#include "ProductoMenu.h"


//Constructores

ProductoMenu::ProductoMenu(){}
ProductoMenu::ProductoMenu(int cantidad){
					this->cantidad = cantidad;
}


//GyS

int ProductoMenu::getCantidad(){
					return this->cantidad;
}
void ProductoMenu::setCantidad(int cantidad){
					this->cantidad = cantidad;
}

//Destructores

ProductoMenu::~ProductoMenu(){}


//Metodos

string ProductoMenu::getCodigoComun(){

}
void ProductoMenu::asignarComun(string codigo){

}
float ProductoMenu::getPrecio(){

}
