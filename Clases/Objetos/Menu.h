#ifndef MENU
#define MENU

#include <list>
#include <string>
#include "Comun.h"
#include "Producto.h"
#include "ProductoMenu.h"
#include "../DataTypes/DtProductoCantidad.h"
#include "../../enum/TipoProducto.h"

using namespace std;

class Menu {
private:
	int cantidadComunes;
	list<ProductoMenu>* productosMenu;
public:
	//Constructores
	Menu();
	Menu(int);

	//Getters & Setters
	int getCantidadComunes();
	void setCantidadComunes(int);
	list<ProductoMenu>* getProductosMenu();
	void setProductosMenu(list<ProductoMenu>*);

	//Destructores
	~Menu();

	//Métodos
	TipoProducto getTipoProducto();
	int eliminarComun(string); //Producto, string
	void decrementarCantidadComunes();
    void incrementarCantidadComunes();
    void agregarComunes(list<DtProductoCantidad>);
    void aplicarDescuento();
    void calcularPrecio();
    void incrementarPrecio(float);
};

#endif //MENU