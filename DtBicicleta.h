
#ifndef MIKE_DTBICICLETA_H
#define MIKE_DTBICICLETA_H
class DtBicicleta: public DtVehiculo{
private:
    enum tipoBici;
    int cantCambios;
public:
    DtBicicleta();
    DtBicicleta(int, float, float, tipoBici, int);
    enum getTipoBici();
    int getCantCambios();
    ~DtBicicleta();

    friend ostream& operator << (ostream&, const DtBicicleta&);
};
#endif //MIKE_DTMONOPATIN_H
#endif //MIKE_DTBICICLETA_H
