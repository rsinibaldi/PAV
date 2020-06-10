#ifndef EMPLEADO
#define EMPLEADO

#include <string>

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

    //Métodos
};

#endif //EMPLEADO