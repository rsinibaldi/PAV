#ifndef MANEJADOREMPLEADO
#define MANEJADOREMPLEADO

#include <list>
#include <map>
#include <string>
#include "Objetos/Empleado.h"

using namespace std;

class ManejadorEmpleado {
private:
    static ManejadorEmpleado* instancia;
    map<string, Empleado*> socios;
    ManejadorEmpleado();
public:
    static ManejadorEmpleado* getInstancia();

    list<Empleado*> getEmpleados();
    Empleado* getEmpleado(string);
    void removerEmpleado(Empleado*);
    bool agregarEmpleado(Empleado*);

    virtual ~ManejadorEmpleado();
};

#endif //MANEJADOREMPLEADO