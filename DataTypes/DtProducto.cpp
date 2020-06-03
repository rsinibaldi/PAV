#include <DtProducto.h>


using namespace std;

//constructores

DtProducto::DtProducto(){};
DtProducto::DtProducto(string codigoProducto, string descripcionProducto, float precioProducto, int cantidad):DtProductoBase(codigoProducto, descripcionProducto){

    this -> precioProducto = precioProducto;
    this -> cantidad = cantidad;
}

//getterAndSetters
    float DtProducto::getPrecioProducto(){
        return this->precioProducto;
    }
    void DtProducto::setPrecioProducto(float precioProducto){
        this->precioProducto= precioProducto;
    }

    int DtProducto::getCantidad(){
        return this->cantidad;
    }

    void DtProducto::setCantidad(int cantidad) {
        this->cantidad = cantidad;
    }

//destructores
DtProducto::~DtProducto(){}

//metodos