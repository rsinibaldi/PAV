#ifndef MANEJADORMESA
#define MANEJADORMESA

#include <list>
#include <map>
#include "Objetos/Mesa.h"

using namespace std;

class ManejadorMesa {
private:
    static ManejadorMesa* instancia;
    map<int, Mesa*> socios;
    ManejadorMesa();
public:
    static ManejadorMesa* getInstancia();

    list<Mesa*> getMesas();
    Mesa* getMesa(int);
    void removerMesa(Mesa*);
    bool agregarMesa(Mesa*);

    virtual ~ManejadorMesa();
};

#endif //MANEJADORMESA