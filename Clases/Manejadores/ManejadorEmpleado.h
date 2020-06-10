#ifndef MANEJADOREMPLEADO
#define MANEJADOREMPLEADO

#include <list>
#include <map>
#include <string>
#include "../Objetos/Empleado.h"

class ManejadorEmpleado {
private:
    static ManejadorEmpleado* instancia;
    map<string, Empleado*> socios;
    ManejadorEmpleado();
public:
    //Instancia
    static ManejadorEmpleado* getInstancia();

    //Destructor
    virtual ~ManejadorEmpleado();

    //Métodos
    list<Empleado*> getEmpleados();
    Empleado* getEmpleado(string);
    void removerEmpleado(Empleado*);
    bool agregarEmpleado(Empleado*);
};

#endif //MANEJADOREMPLEADO