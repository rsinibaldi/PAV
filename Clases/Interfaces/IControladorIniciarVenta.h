#ifndef ICONTROLADORINICIARVENTA
#define ICONTROLADORINICIARVENTA

#include <list>

using namespace std;

class IControladorIniciarVenta {
public:
    virtual list<int> ingresarIDMozo(int) = 0;
    virtual list<int> seleccionarMesas(list<int>) = 0;
    virtual void cancelarIniciarVenta() = 0;
    virtual void confirmarIniciarVenta() = 0;
};

#endif //ICONTROLADORINICIARVENTA