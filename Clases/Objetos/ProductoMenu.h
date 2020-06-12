#ifndef PRODUCTOMENU
#define PRODUCTOMENU

#include <list>
#include "Comun.h"

class ProductoMenu {
private:
	int cantidad;
	Comun* comun;
public:
	//Constructores
	ProductoMenu();
	ProductoMenu(int);

	//Getters & Setters
	int getCantidad();
	void setCantidad(int);
	Comun* getComun();
	void setComun(Comun*);

	//Destructores
	~ProductoMenu();

	//M�todos
	string getCodigoComun();
	void asignarComun(string);
	float getPrecio();
};

#endif //PRODUCTOMENU