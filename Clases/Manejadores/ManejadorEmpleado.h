#ifndef MANEJADOREMPLEADO
#define MANEJADOREMPLEADO

#include <list>
#include <map>

#include "../Objetos/Mozo.h"

class ManejadorEmpleado {
private:
    static ManejadorEmpleado* instancia;
    map<string, Empleado*> empleados;
    ManejadorEmpleado();
public:
    //Instancia
    static ManejadorEmpleado* getInstancia();

    //Destructor
    virtual ~ManejadorEmpleado();

    //M�todos
    list<Empleado*> getEmpleados();
    Empleado* getEmpleado(string);
    void removerEmpleado(Empleado*);
    void agregarEmpleado(Empleado*);
};

#endif //MANEJADOREMPLEADO