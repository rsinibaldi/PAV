#ifndef VENTAPRODUCTO
#define VENTAPRODUCTO

#include <iostream>
#include <string.h>
#include "DataTypes/DtProducto.h"
#include "DataTypes/DtProductoFactura.h"
#include "Objetos/Producto.h"

using namespace std;

class VentaProducto {
private:
	int cantidad;
	Producto *producto;
public:
	//Constructores
	VentaProducto();
	VentaProducto(int);

	//Getters & Setters
	int getCantidad();
	void setCantidad(int);

	//Destructores
	~VentaProducto();

    //M�todos
	string getCodigoProducto();
	void incrementarCantidad(int);
	int decrementarCantidad(int);
	DtProductoFactura getDtProductoFactura();
	float getPrecioProductoEnVenta();
	DtProducto getDtProducto();
};

#endif //VENTAPRODUCTO