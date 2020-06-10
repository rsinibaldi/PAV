#ifndef MANEJADORMESA
#define MANEJADORMESA

#include <list>
#include <map>
#include "../Objetos/Mesa.h"

class ManejadorMesa {
private:
    static ManejadorMesa* instancia;
    map<int, Mesa*> socios;
    ManejadorMesa();
public:
    //Instancia
    static ManejadorMesa* getInstancia();

    //Destructor
    virtual ~ManejadorMesa();

    //Métodos
    list<Mesa*> getMesas();
    Mesa* getMesa(int);
    void removerMesa(Mesa*);
    bool agregarMesa(Mesa*);
};

#endif //MANEJADORMESA