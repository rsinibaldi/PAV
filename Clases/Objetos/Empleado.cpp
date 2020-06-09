#include "Empleado.h"

//Constructores
Empleado::Empleado() {}
Empleado::Empleado(string idEmpleado, string nombre) {
    this->idEmpleado = idEmpleado;
    this->nombre = nombre;
}

//Getters & Setters
string Empleado::getIdEmpleado() {
    return this->idEmpleado;
}
void Empleado::setidEmpleado(string idEmpleado) {
    this->idEmpleado = idEmpleado;
}
string Empleado::getNombreEmpleado() {
    return  this->nombre;
}
void Empleado::setNombreEmpleado(string nombre) {
    this->nombre = nombre;
}

//Destructores
Empleado::~Empleado() {};
