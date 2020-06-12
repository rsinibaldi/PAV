#ifndef VENTALOCAL
#define VENTALOCAL

#include "../DataTypes/DtProductoCantidad.h"
//#include "Mozo.h"
#include "Venta.h"

class VentaLocal : public Venta {
private:
    //Mozo mozo;  //REVISAR
public:
    //Constructores
    VentaLocal();
    VentaLocal(string);

    //Getters & Setters
    /*Mozo getMozo();
    void setMozo(Mozo);*/

    //Destructores
    ~VentaLocal();

    //Métodos
    bool tieneElProducto(string);
    void agregarProducto(DtProductoCantidad);
    void incrementar(DtProductoCantidad);
    list<DtProducto*> listarProductos();
    string getNombreMozo(); //REVISAR
    float getSubTotalVenta();
    list<DtProductoFactura*> getDtProductoFactura();
};

#endif //VENTALOCAL