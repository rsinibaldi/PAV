#include "ManejadorMesa.h"

//Constructor
ManejadorMesa::ManejadorMesa() {}

//Instancia
ManejadorMesa* ManejadorMesa::instancia = NULL;
ManejadorMesa* ManejadorMesa::getInstancia() {
    if (instancia == NULL)
        instancia = new ManejadorMesa();
    return instancia;
}

//Destructor
ManejadorMesa::~ManejadorMesa() {}

//Métodos
list<Mesa*> ManejadorMesa::getMesas() {

}
Mesa* ManejadorMesa::getMesa(int cod) {

}
void ManejadorMesa::removerMesa(Mesa* m) {

}
bool ManejadorMesa::agregarMesa(Mesa* m) {

}