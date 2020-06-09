#include <list>
#include <string>
#include "ManejadorEmpleado.h"

using namespace std;

ManejadorEmpleado* ManejadorEmpleado::instancia = NULL;

ManejadorEmpleado::ManejadorEmpleado() {}

static ManejadorEmpleado* ManejadorEmpleado::getInstancia() {
    if (instancia == NULL)
        instancia = new ManejadorEmpleado();
    return instancia;
}

list<Empleado*> ManejadorEmpleado::getEmpleados() {

}

Empleado* ManejadorEmpleado::getEmpleado(string cod) {

}

void ManejadorEmpleado::removerEmpleado(Empleado* e) {

}

bool ManejadorEmpleado::agregarEmpleado(Empleado* e) {

}

ManejadorEmpleado::~ManejadorEmpleado() {}