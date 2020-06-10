#ifndef DTPRODUCTOCANTIDAD
#define DTPRODUCTOCANTIDAD

#include <string>

using namespace std;

class DtProductoCantidad {
private:
    string codigo;
    int cantidad;
public:
    //Constructores
    DtProductoCantidad();
    DtProductoCantidad(string, int);

    //Getters & Setters
    string getCodigo();
    void setCodigo(string);
    int getCantidad();
    void setCantidad(int);

    //Destructores
    ~DtProductoCantidad();

    //Métodos
};

#endif //DTPRODUCTOCANTIDAD