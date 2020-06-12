#ifndef CONTROLADORINICIARVENTA
#define CONTROLADORINICIARVENTA

#include <string>
#include "../Interfaces/IControladorIniciarVenta.h"

class ControladorIniciarVenta : public IControladorIniciarVenta {
private:
    string mozo;
    list<int> mesas;
public:
    //Getters & Setters
    string getMozo();
    void setMozo(string);
    list<int> getMesas();
    void setMesas(list<int>);

    //Destructor
    ~ControladorIniciarVenta();

    //Métodos
    list<int> ingresarIDMozo(string); //REVISAR
    list<int> seleccionarMesas(list<int>);
    void cancelarIniciarVenta();
    void confirmarIniciarVenta();
};

#endif //CONTROLADORINICIARVENTA