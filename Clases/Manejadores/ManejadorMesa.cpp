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
    list<Mesa*> lMesas;
    for (map<int, Mesa*>::iterator it = this->mesas.begin(); it != this->mesas.end(); ++it)
        lMesas.push_back(it->second);
    return lMesas;
}
Mesa* ManejadorMesa::getMesa(int cod) {
    map<int, Mesa*>::iterator it = this->mesas.find(cod);
    return it->second;
}
void ManejadorMesa::removerMesa(Mesa* m) {
    map<int, Mesa*>::iterator it = this->mesas.find(m->getNumero());
    this->mesas.erase(it);
}
void ManejadorMesa::agregarMesa(Mesa* m) {
    this->mesas.insert(pair<int, Mesa*>(m->getNumero(), m));
}