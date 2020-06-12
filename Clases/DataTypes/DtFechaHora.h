#ifndef DTFECHAHORA
#define DTFECHAHORA

#include "DtFecha.h"

class DtFechaHora : DtFecha {
private:
    int hora;
    int min;
    int seg;
public:
    //Constructores
    DtFechaHora();
    DtFechaHora(int, int, int, int, int, int);

    //Getters & Setters
    int getHora();
    void setHora(int);
    int getMin();
    void setMin(int);
    int getSeg();
    void setSeg(int);

    //Destructores
    ~DtFechaHora();

    //Métodos
    friend ostream& operator <<(ostream&, const DtFechaHora&);
    DtFechaHora actual();
};

#endif //DTFECHAHORA