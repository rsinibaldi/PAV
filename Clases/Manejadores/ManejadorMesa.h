#ifndef MANEJADORMESA
#define MANEJADORMESA

#include <map>
#include "../Objetos/Mesa.h"

class ManejadorMesa {
private:
    static ManejadorMesa* instancia;
    map<int, Mesa*> mesas;
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
    void agregarMesa(Mesa*);
};

#endif //MANEJADORMESA