#ifndef Mozo_H
#define Mozo_H

#include "../clases/Empleado.h"

class Mozo: public Empleado {

public:
    //Constructores
    Mozo();
    Mozo(string, string);

    //Getters & Setters

    //Destructores
    ~Mozo();

    //Métodos
    // mesasAsignadasSinVenta():Set(int);
    // asignarMesas(set(int),VentaLocal);
};

#endif //Mozo_H
