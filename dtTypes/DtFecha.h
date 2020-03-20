#ifndef DTFECHA_H
#define DTFECHA_H

class DtFecha{
  private:
    int dia;
    int mes;
    int anio;

  public:
    DtFecha();
    DtFecha(int dia,int mes, int anio);
    int getDia();
    int getMes();
    int getAnio();
    ~DtFecha();


};





#endif
