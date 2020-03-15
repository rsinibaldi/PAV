#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include "DtFecha.h"
#include "DtFecha.h"

using namespace std;

DtFecha::DtFecha(){}

DtFecha::DtFecha(int d, int m, int a){
  this->dia = d;
  this->mes = m;
  this->anio = a;
}

int DtFecha::getDia(){
  return this->dia;
}
int DtFecha::getMes(){
  return this->mes;
}
int DtFecha::getAnio(){
  return this->anio;
}

DtFecha::~DtFecha();
