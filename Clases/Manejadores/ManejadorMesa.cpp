#include <list>
#include "ManejadorMesa.h"

using namespace std;

ManejadorMesa* ManejadorMesa::instancia = NULL;

ManejadorMesa::ManejadorMesa() {}

static ManejadorMesa* ManejadorMesa::getInstancia() {
    if (instancia == NULL)
        instancia = new ManejadorMesa();
    return instancia;
}

list<Mesa*> ManejadorMesa::getMesas() {

}

Mesa* ManejadorMesa::getMesa(int cod) {

}

void ManejadorMesa::removerMesa(Mesa* m) {

}

bool ManejadorMesa::agregarMesa(Mesa* m) {

}

ManejadorMesa::~ManejadorMesa() {}