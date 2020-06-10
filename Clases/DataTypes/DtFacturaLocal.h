#ifndef DTFACTURALOCAL
#define DTFACTURALOCAL

#include "DtFactura.h"

class DtFacturaLocal : public DtFactura {
private:
    string nombreMozo;
public:
    //Constructores
    DtFacturaLocal();
    DtFacturaLocal(string, DtFecha, list<DtProductoFactura*>, float, float, float, float, string);

    //Getters & Setters
    string getNombreMozo();
    void setNombreMozo(string);

    //Destructores
    virtual ~DtFacturaLocal();

    //Métodos
};

#endif //DTFACTURALOCAL