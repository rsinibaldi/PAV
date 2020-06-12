#include "../Manejadores/ManejadorProducto.h"
#include "../Manejadores/ManejadorVenta.h"
#include "../Objetos/Menu.h"
#include "ControladorBajaProducto.h"

//Getters & Setters
string ControladorBajaProducto::getCodigo() {
	return this->codigo;
}
void ControladorBajaProducto::setCodigo(string codigo) {
	this->codigo = codigo;
}

//Destructor
ControladorBajaProducto::~ControladorBajaProducto() {}

list<DtProductoBase*> ControladorBajaProducto::listarProductos() {
	ManejadorProducto* mP = ManejadorProducto::getInstancia();
	list<DtProductoBase*> dtproductos;
	for (Producto* p : mP->getProductos())
		dtproductos.push_back(p->getDtProductoBase());
	return dtproductos;
}

void ControladorBajaProducto::seleccionarProducto(string cod) {
	this->setCodigo(cod);
}

void ControladorBajaProducto::cancelarBajaProducto() {
	//REVISAR
}

void ControladorBajaProducto::eliminarProducto() {
	ManejadorProducto* mP = ManejadorProducto::getInstancia();
	Producto* pro = mP->getProducto(this->getCodigo());
	ManejadorVenta* mV = ManejadorVenta::getInstancia();
	list<Venta*> ventas = mV->getVentas();
	for (Venta* v : ventas)
		v->eliminarProducto(this->getCodigo());
	TipoProducto tipo = pro->getTipoProducto();
	if (tipo == comun) {
		for (Producto* p : mP->getProductos()) {
			Menu* m = dynamic_cast<Menu*>(p);
			if (m->eliminarComun(this->getCodigo()) == 0) { //REVISAR pro, this->getCodigo()
				for (Venta* v : ventas)
					v->eliminarProducto(m->getCodigo());
				mP->removerProducto(m);
				delete m;
			}
		}
	}
	mP->removerProducto(pro);
	delete pro;
}