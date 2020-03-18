<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../clases/Viaje.h"
#include "../clases/Usuario.h"

using namespace std;

Viaje::Viaje() {}
Viaje::Viaje(DtFecha fecha, int duracion, int distancia, Usuario* usuario){
    this-> fechaIngreso=fecha;
    this -> duracion=duracion;
    this -> distancia=distancia;

}
=======
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
>>>>>>> abe0b81931deaeb0ac6f427a00403a2130f20a91
