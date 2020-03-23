#include "Monopatin.h"
#include "Vehiculo.h"
#include "Viaje.h"

//Constructores
Monopatin::Monopatin() {}
Monopatin::Monopatin(int nroSerie, float porcentajeBateria, float precioBase, bool tieneLuces):Vehiculo(nroSerie,porcentajeBateria,precioBase) {
    this->tieneLuces = tieneLuces;
}

//Getters & Setters
bool Monopatin::getTieneLuces() {
    return this->tieneLuces;
}
void Monopatin::setTieneLuces(bool tineLuces) {
    this->tieneLuces = tineLuces;
}

//Destructores
Monopatin::~Monopatin() {}

//Métodos
float Monopatin::darPrecioViaje(int duracion, int distancia) {
    float precio = distancia * getPrecioBase();
    if (getTieneLuces()){
        precio += (0.5 * duracion);
    }
    return precio;
}
