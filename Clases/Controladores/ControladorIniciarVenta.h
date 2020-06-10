#ifndef CONTROLADORINICIARVENTA
#define CONTROLADORINICIARVENTA

#include <list>
#include "../Interfaces/IControladorIniciarVenta.h"

using namespace std;

class ControladorIniciarVenta : public IControladorIniciarVenta {
public:
    list<int> ingresarIDMozo(int);
    list<int> seleccionarMesas(list<int>);
    void cancelarIniciarVenta();
    void confirmarIniciarVenta();
};

#endif //CONTROLADORINICIARVENTA