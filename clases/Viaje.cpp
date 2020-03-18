#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../clases/Viaje.h"
#include "../clases/Usuario.h"

using namespace std;

Viaje::Viaje() {}
Viaje::Viaje(DtFecha fecha, int duracion, int distancia){
    this-> fechaIngreso=fecha;
    this -> duracion=duracion;
    this -> distancia=distancia;
}
