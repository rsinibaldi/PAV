#ifndef Vehiculo_H
#define Vehiculo_H

class Vehiculo {
private:
    int nroSerie;
    float porcentajeBateria;
    float precioBase;
public:
    //Constructores
    Vehiculo();
    Vehiculo(int, float, float);
    
    //Getters & Setters
    int getNroSerie();
    void setNroSerie(int);
    float getPorcentajeBateria();
    void setPorcentajeBateria(float);
    float getPrecioBase();
    void setPrecioBase(float);

    //Destructores
    ~Vehiculo();

    //Métodos
	virtual float darPrecioviaje(int, int)=0;
};

#endif //Vehiculo_H
