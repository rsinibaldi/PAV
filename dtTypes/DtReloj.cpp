//
// Created by yokad on 3/19/2020.
//

#include "DtReloj.h"
#include <iomanip>
#include <ctime>

DtReloj::DtReloj(){
    time_t relojActual = time(nullptr);
    struct tm* relojParsed = localtime(&relojActual);

    this->anio= relojParsed->tm_year + 1900;
    this->mes= relojParsed->tm_mon +1;
    this->dia= relojParsed->tm_mday;
    this->hora= relojParsed->tm_hour;
    this->min= relojParsed->tm_min;
}

int DtReloj::getDia(){
    return this->dia;
};

int getMes(){
    return this->mes;
};

int getAnio(){
    return this->anio;
};