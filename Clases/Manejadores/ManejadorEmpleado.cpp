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

}
Empleado* ManejadorEmpleado::getEmpleado(string cod) {

}
void ManejadorEmpleado::removerEmpleado(Empleado* e) {

}
bool ManejadorEmpleado::agregarEmpleado(Empleado* e) {

}