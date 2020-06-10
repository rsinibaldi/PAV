#ifndef MESA
#define MESA

#include <list>
#include "../DataTypes/DtProducto.h"
#include "../DataTypes/DtProductoCantidad.h"
#include "VentaLocal.h"

using namespace std;

class Mesa{
private:
    int numero;
    VentaLocal *ventaLocal;
public:
    //Constructores
    Mesa();
    Mesa(int);

    //Getters & Setters
    int getNumero();
    void setNumero(int);
    VentaLocal *getVentaLocal();
    void setVentaLocal(VentaLocal*);

    //Destructores
    ~Mesa();

    //Métodos
    bool tieneVenta();
    void agregarProducto(DtProductoCantidad);
    list<DtProducto> listarProductos();
    void quitarProducto(DtProductoCantidad);
};

#endif //MESA