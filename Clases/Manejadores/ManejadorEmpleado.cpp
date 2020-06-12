#include "ManejadorEmpleado.h"

//Constructor
ManejadorEmpleado::ManejadorEmpleado() {}

//Instancia
ManejadorEmpleado* ManejadorEmpleado::instancia = NULL;
ManejadorEmpleado* ManejadorEmpleado::getInstancia() {
    if (instancia == NULL)
        instancia = new ManejadorEmpleado();
    return instancia;
}

//Destructor
ManejadorEmpleado::~ManejadorEmpleado() {}

//Métodos
list<Empleado*> ManejadorEmpleado::getEmpleados() {
    list<Empleado*> lEmpleados;
    for (map<string, Empleado*>::iterator it = this->empleados.begin(); it != this->empleados.end(); ++it)
        lEmpleados.push_back(it->second);
    return lEmpleados;
}
Empleado* ManejadorEmpleado::getEmpleado(string cod) {
    map<string, Empleado*>::iterator it = this->empleados.find(cod);
    return it->second;
}
void ManejadorEmpleado::removerEmpleado(Empleado* e) {
    map<string, Empleado*>::iterator it = this->empleados.find(e->getIdEmpleado());
    this->empleados.erase(it);
}
void ManejadorEmpleado::agregarEmpleado(Empleado* e) {
    this->empleados.insert(pair<string, Empleado*>(e->getIdEmpleado(), e));
}