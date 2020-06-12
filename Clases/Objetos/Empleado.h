#ifndef EMPLEADO
#define EMPLEADO

#include <string>
#include "VentaLocal.h"

using namespace std;

class Empleado {
private:
    string idEmpleado;
    string nombre;
public:
    //Constructores
    Empleado();
    Empleado(string, string);

    //Getters & Setters
    string getIdEmpleado();
    void setIdEmpleado(string);
    string getNombre();
    void setNombre(string);

    //Destructores
    ~Empleado();

    //Métodos
    virtual list<int> mesasAsignadasSinVenta() = 0;
    virtual void asignarMesas(list<int>, VentaLocal*) = 0;
};

#endif //EMPLEADO