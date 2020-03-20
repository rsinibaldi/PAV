//
// Created by yokad on 3/19/2020.
//

#ifndef MIKE_DTRELOJ_H
#define MIKE_DTRELOJ_H

#include <iostream>
#include <string>

class DtReloj {
public:
    DtReloj();

    DtReloj(int dia, int mes, int anio);

    int getDia() const;

    int getMes() const;

    int getAnio() const;

    virtual ~DtReloj();

private:
    int dia;
    int mes;
    int anio;
};


#endif //MIKE_DTRELOJ_H
