#ifndef MIKE_DTMONOPATIN_H
#define MIKE_DTMONOPATIN_H
#include "DtVehiculo.h"

class DtMonopatin: public DtVehiculo{
private:
    bool tieneLuces;
public:
    DtMonopatin();
    DtMonopatin(int, float, float, bool);
    bool getTieneLuces();
    ~DtMonopatin();

    friend ostream& operator << (ostream&, const DtMonopatin&);
};
#endif //MIKE_DTMONOPATIN_H
