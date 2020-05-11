#include <DtProducto.h>


using namespace std;

//constructores

DtProducto::DtProducto(){};
DtProducto::DtProducto( string codigoProducto, string descripcionProducto, float precioProducto, int cantidad){
    this -> codigoProducto = codigoProducto;
    this -> descripcionProducto = descripcionProducto;
    this -> precioProducto = precioProducto;
    this -> cantidad = cantidad;
}

//getterAndSetters
    string getCodigoProducto() {
        return this->codigoProducto;
    }
    void setCodigoProducto(string codigoProducto) {
        this->codigoProducto= codigoProducto;
    }

    string getDescripcionProducto() {
            return this->descripcionProducto;
    }
    void setDescripcionProducto(string descripcionProducto) {
            this->descripcionProducto = descripcionProducto;
    }

    float getPrecioProducto(){
        return this->precioProducto;
    }
    void setPrecioProducto(float precioProducto){
        this->precioProducto= precioProducto;
    }

    int getCantidad(){
        return this->cantidad;
    }

    void setCantidad(int cantidad){
        this ->cantidad = cantidad;

//destructores
DtProducto::~DtProducto() {}

//metodos