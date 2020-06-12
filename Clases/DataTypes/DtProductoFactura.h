#ifndef DTPRODUCTOFACTURA
#define DTPRODUCTOFACTURA

#include <string>

using namespace std;

class DtProductoFactura {
private:
    string descripcion;
    float precio;
    int cantidad;
public:
    //Constructores
    DtProductoFactura();
    DtProductoFactura(string, float, int);

    //Getters & Setters
    string getDescripcion();
    void setDescripcion(string);
    float getPrecio();
    void setPrecio(float);
    int getCantidad() const;
    void setCantidad(int);

    //Destructores
    ~DtProductoFactura();

    //M�todos
};

#endif //DTPRODUCTOFACTURA