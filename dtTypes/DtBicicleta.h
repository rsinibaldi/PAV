#ifndef MIKE_DTBICICLETA_H
#define MIKE_DTBICICLETA_H

#include "../dtTypes/DtVehiculo.h"
#include <string.h>
#include <iostream>
using namespace std;

class DtBicicleta: public DtVehiculo{
private:
    string tipo;
    int cantCambios;
public:
    DtBicicleta();
    DtBicicleta(int, float, float, string, int);
    string getTipoBici();
    int getCantCambios();
    ~DtBicicleta();

    friend ostream& operator << (ostream&, const DtBicicleta&);
};

#endif //MIKE_DTBICICLETA_H
