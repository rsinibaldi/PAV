#include "../clases/Monopatin.h"
#include "../clases/Vehiculo.h"
#include "../clases/Viaje.h"

Monopatin::Monopatin(){}
Monopatin::Monopatin(int nroSerie, float porcentajeBateria, float precioBase, bool tieneLuces):Vehiculo(nroSerie,porcentajeBateria,precioBase){
    this ->tieneLuces =tieneLuces;

}
int Monopatin::getTieneLuces() {
    return this ->tieneLuces;
}
void Monopatin:setTieneLuces(bool tineLuces){
    this -> tieneLuces=tineLuces;
};

Monopatin::~Monopatin() {}

float Monopatin::darPrecioViaje() {
    if (getTieneLuces())
        return this -> (0.5 * getDuraci
}