#ifndef MOZO
#define MOZO

#include "Empleado.h"

class Mozo: public Empleado {
private:
    //list<Mesa*> mesas; //REVISAR
public:
    //Constructores
    Mozo();
    Mozo(string, string);

    //Getters & Setters
    /*list<Mesa*> getMesas();
    void setMesas(list<Mesa*>);*/

    //Destructores
    ~Mozo();

    //Métodos
    list<int> mesasAsignadasSinVenta();
    void asignarMesas(list<int>, VentaLocal*);
};

#endif //MOZO