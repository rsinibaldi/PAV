#ifndef DTFECHA
#define DTFECHA

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
    DtFecha(int, int, int);

    //Getters & Setters
    int getDia();
    void setDia(int);
    int getMes();
    void setMes(int);
    int getAnio();
    void setAnio(int);

    //Destructores
    ~DtFecha();

    //Métodos
    friend bool operator <(const DtFecha&, const DtFecha&);
    friend ostream& operator <<(ostream&, const DtFecha&);
};

#endif //DTFECHA