#include "DtFechaHora.h"

//Constructores
DtFechaHora::DtFechaHora() {}
DtFechaHora::DtFechaHora(int dia, int mes, int anio, int hora, int min, int seg):DtFecha(dia, mes, anio) {
	this->hora = hora;
	this->min = min;
	this->seg = seg;
}

//Getters & Setters
int DtFechaHora::getHora() {
	return this->hora;
}
void DtFechaHora::setHora(int hora) {
	this->hora = hora;
}
int DtFechaHora::getMin() {
	return this->min;
}
void DtFechaHora::setMin(int min) {
	this->min = min;
}
int DtFechaHora::getSeg() {
	return this->seg;
}
void DtFechaHora::setSeg(int seg) {
	this->seg = seg;
}

//Destructores
DtFechaHora::~DtFechaHora() {}

//Métodos
ostream& operator <<(ostream& salida, const DtFechaHora& dtf) {
	cout << (DtFecha)dtf;
	cout << " " << dtf.hora << ":" << dtf.min << ":" << dtf.seg << endl;
	return salida;
}
DtFechaHora DtFechaHora::actual() {
	time_t fechaActual = time(0);
	tm* fecha = localtime(&fechaActual);

	int dia = fecha->tm_mday;
	int mes = 1 + fecha->tm_mon;
	int anio = 1900 + fecha->tm_year;
	int hora = fecha->tm_hour;
	int min = fecha->tm_min;
	int seg = fecha->tm_sec;

	DtFechaHora dtFechaHora = DtFechaHora(dia, mes, anio, hora, min, seg);
	return dtFechaHora;
}