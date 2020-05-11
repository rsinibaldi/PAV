#ifndef PAV_DTVIAJEBASE_H
#define PAV_DTVIAJEBASE_H

#include "DtFecha.h"

#include <iostream>

using namespace std;

class DtViajeBase{
protected:
  int duracion;
  int distancia;
  DtFecha fechaIngreso;
public:
  //Constructores
  DtViajeBase();
  DtViajeBase(int, int, DtFecha);

  //Getters & Setters
  int getDtViajeBaseDuracion();
  int getDtViajeBaseDistancia();
  DtFecha getDtViajeBaseFechaIngreso();

  //Destructores
  ~DtViajeBase();

  //Métodos
  friend ostream& operator <<(ostream&, const DtViajeBase&);
};

#endif //PAV_DTVIAJEBASE_H
