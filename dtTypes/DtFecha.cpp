#include "DtFecha.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>

using namespace std;

//Constructores
DtFecha::DtFecha() {}
DtFecha::DtFecha(int d, int m, int a) {
  this->dia = d;
  this->mes = m;
  this->anio = a;
}

//Getters & Setters
int DtFecha::getDia() {
  return this->dia;
}
int DtFecha::getMes() {
  return this->mes;
}
int DtFecha::getAnio() {
  return this->anio;
}

//Destructores
DtFecha::~DtFecha() {}

//Métodos
bool operator <(const DtFecha& dtf1, const DtFecha& dtf2) {
	bool retorno = false;
	if (dtf1.anio < dtf2.anio)
		retorno = true;
	else if(dtf1.anio == dtf2.anio){
		if (dtf1.mes < dtf2.mes)
			retorno = true;
		else if(dtf1.mes == dtf2.mes && dtf1.dia < dtf2.dia)
				retorno = true;
	}
	return retorno;
}
ostream& operator <<(ostream& salida, const DtFecha& dtf) {
	cout << dtf.dia << "/" << dtf.mes << "/" << dtf.anio << endl;
	return salida;
}