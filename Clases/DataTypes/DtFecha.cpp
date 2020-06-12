#include "DtFecha.h"

//Constructores
DtFecha::DtFecha() {}
DtFecha::DtFecha(int dia, int mes, int anio) {
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
}

//Getters & Setters
int DtFecha::getDia() {
	return this->dia;
}
void DtFecha::setDia(int dia) {
	this->dia = dia;
}
int DtFecha::getMes() {
	return this->mes;
}
void DtFecha::setMes(int mes) {
	this->mes = mes;
}
int DtFecha::getAnio() {
	return this->anio;
}
void DtFecha::setAnio(int anio) {
	this->anio = anio;
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