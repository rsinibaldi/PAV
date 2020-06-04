#ifndef Empleado_H
#define Empleado_H

#include <string.h>
#include <iostream>

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
    string getNombreEmpleado();
    void setNombreEmpleado(string);

    //Destructores
    ~Empleado();

#endif //Empleado_H
