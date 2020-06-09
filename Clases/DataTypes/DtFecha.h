#ifndef DTFECHA_H
#define DTFECHA_H

#include <iostream>

using namespace std;

class DtFecha {
  private:
    int dia;
    int mes;
    int anio;
  public:
    //Constructores
    DtFecha();
    DtFecha(int dia, int mes, int anio);

    //Getters & Setters
    int getDia();
    int getMes();
    int getAnio();

    //Destructores
    ~DtFecha();

    //Métodos
    friend bool operator <(const DtFecha&, const DtFecha&);
    friend ostream& operator <<(ostream&, const DtFecha&);
};

#endif //DTFECHA_H
