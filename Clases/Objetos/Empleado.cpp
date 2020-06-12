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
void Empleado::setIdEmpleado(string idEmpleado) {
    this->idEmpleado = idEmpleado;
}
string Empleado::getNombre() {
    return this->nombre;
}
void Empleado::setNombre(string nombre) {
    this->nombre = nombre;
}

//Destructores
Empleado::~Empleado() {};

//Métodos
list<int> mesasAsignadasSinVenta() {}
void asignarMesas(list<int>, VentaLocal*) {}