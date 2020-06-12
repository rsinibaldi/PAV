#ifndef PAV_CONTROLADORAGREGARDATOS_H
#define PAV_CONTROLADORAGREGARDATOS_H

#include "../Clases/Interfaces/IControladorAgregarDatos.h"
//aca va la carga de datos

class ControladorAgregarDatos: public IControladorAgregarDatos{
public:
    void cargarDatos();
};


#endif //PAV_CONTROLADORAGREGARDATOS_H
