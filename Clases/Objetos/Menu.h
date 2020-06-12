#ifndef MENU
#define MENU

#include "ProductoMenu.h"
#include "../DataTypes/DtProductoCantidad.h"

class Menu : public Producto {
private:
	int cantidadComunes;
	list<ProductoMenu*> productosMenu;
public:
	//Constructores
	Menu();
	Menu(string, string, float, int);

	//Getters & Setters
	int getCantidadComunes();
	void setCantidadComunes(int);
	list<ProductoMenu*> getProductosMenu();
	void setProductosMenu(list<ProductoMenu*>);

	//Destructores
	~Menu();

	//Métodos
	TipoProducto getTipoProducto();
	int eliminarComun(string); //Producto, string
	void decrementarCantidadComunes();
    void incrementarCantidadComunes();
    void agregarComunes(list<DtProductoCantidad*>);
    void aplicarDescuento();
    void calcularPrecio();
    void incrementarPrecio(float);
};

#endif //MENU