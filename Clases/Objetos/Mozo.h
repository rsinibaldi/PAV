#ifndef MOZO
#define MOZO

#include <list>
#include <string>
#include "Empleado.h"
#include "Mesa.h"
#include "VentaLocal.h"

using namespace std;

class Mozo: public Empleado {
private:
    list<Mesa> *mesas;
public:
    //Constructores
    Mozo();
    Mozo(string, string);

    //Getters & Setters
    list<Mesa>* getMesas();
    setMesas(list<Mesa>*);

    //Destructores
    ~Mozo();

    //Métodos
    list<int> mesasAsignadasSinVenta();
    void asignarMesas(list<int>, VentaLocal);
};

#endif //MOZO