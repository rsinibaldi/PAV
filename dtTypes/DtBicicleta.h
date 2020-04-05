#ifndef DTBICICLETA_H
#define DTBICICLETA_H

#include "../dtTypes/DtVehiculo.h"
#include "../enum/TipoBici.h"

#include <string.h>
#include <iostream>

using namespace std;

class DtBicicleta: public DtVehiculo{
private:
    tipoBici tipo;
    int cantCambios;
public:
	//Constructores
    DtBicicleta();
    DtBicicleta(int, float, float, tipoBici, int);

	//Getters & Setters
    tipoBici getTipoBici();
	int getCantCambios();

	//Destructores
    ~DtBicicleta();

	//Metodos
    friend ostream& operator << (ostream&, const DtBicicleta&);
};

#endif //DTBICICLETA_H
