#ifndef VENTAPRODUCTO
#define VENTAPRODUCTO

#include "../DataTypes/DtProducto.h"
#include "../DataTypes/DtProductoFactura.h"
#include "Producto.h"

class VentaProducto {
private:
	int cantidad;
	Producto* producto;
public:
	//Constructores
	VentaProducto();
	VentaProducto(int);
	VentaProducto(int, Producto*);

	//Getters & Setters
	int getCantidad();
	void setCantidad(int);
	Producto* getProducto();
	void setProducto(Producto*);

	//Destructores
	~VentaProducto();

	//Métodos
	string getCodigoProducto();
	void incrementarCantidad(int);
	int decrementarCantidad(int);
	DtProductoFactura* getDtProductoFactura();
	float getPrecioProductoEnVenta();
	DtProducto* getDtProducto();
};

#endif //VENTAPRODUCTO