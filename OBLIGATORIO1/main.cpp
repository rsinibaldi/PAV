#include "clases/Usuario.h"
#include "clases/Viaje.h"
#include "clases/Vehiculo.h"
#include "clases/Monopatin.h"
#include "clases/Bicicleta.h"

#include "dtTypes/DtViajeBase.h"
#include "dtTypes/DtViaje.h"
#include "dtTypes/DtVehiculo.h"
#include "dtTypes/DtMonopatin.h"
#include "dtTypes/DtBicicleta.h"
#include "dtTypes/DtFecha.h"

#include "enum/TipoBici.h"

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define MAX_USUARIOS 10
#define MAX_VEHICULOS 100

struct {
    Usuario* usuarios[MAX_USUARIOS];
    int tope;
}coleccionUsuarios;

struct {
    Vehiculo* vehiculos[MAX_VEHICULOS];
    int tope;
}coleccionVehiculos;

//OPERACION1 REGISTRAR USUARIO
void registrarUsuario();
void registrarUsuario(string, string);

//OPERACION2 REGISTRAR VEHICULOS
void agregarVehiculo();
void agregarVehiculo(DtVehiculo&);

//OPERACION3 INGRESAR VIAJES
void ingresarViaje();
void ingresarViaje(string, int, DtViajeBase&);

//OPERACION4 VER VIAJES ANTES DE FECHA
void verViajesAntesDeFecha();
DtViaje** verViajesAntesDeFecha(DtFecha&, string, int&);

//OPERACION5 ELIMINAR VIAJES
void eliminarViajes();
void eliminarViajes(string, DtFecha&);

//OPERACION6 CAMBIAR BATERIA
void cambiarBateria();
void cambiarBateriaVehiculo(int, float);

//OPERACION7 OBTENER VEHICULOS
void obtenerVehiculos();
DtVehiculo** obtenerVehiculos(int&);

//FUNCIONES AUXILIARES
void menu();
bool existeUsuario(string);
Usuario* obtenerUsuario(string);
bool existeVehiculo(int);
Vehiculo* obtenerVehiculo(int);
void validarRegistroUsuario(string ci);
bool validarRegistroVehiculo(int, float, float);

#pragma region Op1 - REGISTRAR USUARIO
void registrarUsuario(){
	system("clear");

	cout << "_____________________________________________________" << endl;
	cout << "========R E G I S T R O   D E   U S U A R I O========" << endl;
	cout << "_____________________________________________________" << endl;

	string ci, nombre;
	cout << endl << "NOMBRE: ";
	getline(cin >> ws, nombre);
	cout << endl << "CI: ";
	cin >> ci;

	registrarUsuario(ci, nombre);
}
void registrarUsuario(string ci, string nombre){
	time_t fechaActual = time(0);
	tm* fecha = localtime(&fechaActual);
	int dia = fecha->tm_mday;
	int mes = 1 + fecha->tm_mon;
	int anio = 1900 + fecha->tm_year;
	DtFecha dtFecha = DtFecha(dia, mes, anio);

    try{
		validarRegistroUsuario(ci);

		Usuario* usuario = new Usuario(ci, nombre, dtFecha);
		coleccionUsuarios.usuarios[coleccionUsuarios.tope] = usuario;
		coleccionUsuarios.tope++;

		cout << endl << "Usuario dado de alta." << endl;
    }
	catch (invalid_argument& e){
		cout << endl << e.what() << endl;
    }
}
#pragma endregion

#pragma region Op2 - REGISTRAR VEHICULOS
void agregarVehiculo(){
	system("clear");

	cout << "_____________________________________________________" << endl;
	cout << "======R E G I S T R O   D E   V E H I C U L O S======" << endl;
	cout << "_____________________________________________________" << endl;

	int nroSerie;
	float porcentajeBateria, precioBase;
	bool okRegistro = false;

	try{
		cout << endl << "Nº DE SERIE: ";
		cin >> nroSerie;
		cout << endl << "PORCENTAJE DE BATERIA: ";
		cin >> porcentajeBateria;
		cout << endl << "PRECIO BASE: ";
		cin >> precioBase;
	}
	catch (exception& e){
		cout << endl << "ERROR! Tipo de dato inválido." << endl;
	}

	try{
		if (validarRegistroVehiculo(nroSerie, porcentajeBateria, precioBase)){
			DtVehiculo dtVehiculo = DtVehiculo(nroSerie, porcentajeBateria, precioBase);
			agregarVehiculo(dtVehiculo);
		}
	}
	catch (invalid_argument& e){
		cout << e.what() << endl;
	}
}
void agregarVehiculo(DtVehiculo& vehiculo){
    cout << endl << "TIPO DE VEHICULO" << endl;
    cout << "\t1.MONOPATIN" << endl;
    cout << "\t2.BICICLETA" << endl;
    cout << "OPCION: ";

	int tipoVehiculo;
	cin >> tipoVehiculo;
	if (tipoVehiculo < 1 || tipoVehiculo > 2)
		throw invalid_argument("\nERROR! opción invalida.");
	switch (tipoVehiculo){
	    case 1: {
            cout << endl << "¿TIENE LUCES?" << endl;
            cout << "\t1.SI " << endl;
            cout << "\t2.NO" << endl;
            cout << "OPCION: ";

            int opTieneLuces;
			cin >> opTieneLuces;
			if (opTieneLuces < 1 || opTieneLuces > 2)
				throw invalid_argument("\nERROR! opción inválida.");
			bool tieneLuces = (opTieneLuces == 1) ? true : false;

			Monopatin* mono = new Monopatin(vehiculo.getNroSerie(), vehiculo.getPorcentaje(), vehiculo.getPrecioBase(), tieneLuces);
			coleccionVehiculos.vehiculos[coleccionVehiculos.tope] = mono;

			break;
	    }
		case 2: {
            cout << endl << "TIPO DE BICICLETA: " << endl;
            cout << "\t1.PASEO" << endl;
            cout << "\t2.MONTANIA" << endl;
            cout << "OPCION: ";

			tipoBici tipo;
            int opTipoBici;
			cin >> opTipoBici;
			if (opTipoBici < 1 || opTipoBici > 2)
				throw invalid_argument("\nERROR! opción inválida.");
			switch (opTipoBici){
				case 1: tipo = Paseo;
				    break;
				case 2: tipo = Montania;
				    break;
			}

            int cantCambios;
			cout << endl << "CANTIDAD DE CAMBIOS: ";
			cin >> cantCambios;
			if (cantCambios < 0)
				throw invalid_argument("\nERROR! no puede ingresar cantidad negativa.");

			Bicicleta* bici = new Bicicleta(vehiculo.getNroSerie(), vehiculo.getPorcentaje(), vehiculo.getPrecioBase(), tipo, cantCambios);
			coleccionVehiculos.vehiculos[coleccionVehiculos.tope] = bici;

			break;
		}
	}
	coleccionVehiculos.tope++;

	cout << endl << "Vehículo dado de alta." << endl;
}
#pragma endregion

#pragma region Op3 - INGRESAR VIAJES
void ingresarViaje() {
	system("clear");

	cout << "_____________________________________________________" << endl;
	cout << "============I N G R E S A R   V I A J E S============" << endl;
	cout << "_____________________________________________________" << endl;

	try {
		string ci;
		cout << endl << "CI: ";
		cin >> ci;
		existeUsuario(ci);

		int nroSerie;
		cout << endl << "Nº DE SERIE: ";
		cin >> nroSerie;
		existeVehiculo(nroSerie);

		int duracionViaje;
		cout << endl << "DURACIÓN: ";
		cin >> duracionViaje;
		if (duracionViaje < 1)
			throw invalid_argument("ERROR! La duración del viaje debe ser postiiva.");

		int distanciaViaje;
		cout << endl << "DISTANCIA: ";
		cin >> distanciaViaje;
		if (distanciaViaje < 1)
			throw invalid_argument("ERROR! La distancia del viaje debe ser positiva.");

		int dia, mes, anio;
		cout << endl << "INGRESE LA FECHA A CONTINUACIÓN" << endl;
		cout << endl << "DIA: ";
		cin >> dia;
		if (dia < 1 || dia > 31)
			throw invalid_argument("ERROR! Día inválido.");
		cout << "MES: ";
		cin >> mes;
		if (mes < 1 || mes > 12)
			throw invalid_argument("ERROR! Mes inválido.");
		cout << "ANIO: ";
		cin >> anio;

		DtFecha fechaViaje = DtFecha(dia, mes, anio);
		Usuario* usuarioViaje = obtenerUsuario(ci);
		if (fechaViaje < usuarioViaje->getUsuFechaIngreso())
			throw invalid_argument("ERROR! La fecha del viaje es anterior a la fecha de registro del usuario.");

		DtViajeBase viaje = DtViajeBase(duracionViaje, distanciaViaje, fechaViaje);

		ingresarViaje(ci, nroSerie, viaje);
	} catch (invalid_argument& e){
		cout << endl << e.what() << endl;
	}
}
void ingresarViaje(string ci, int nroSerieVehiculo, DtViajeBase& viaje) {
	Usuario* usuario = obtenerUsuario(ci);

	DtFecha fecha = viaje.getDtViajeBaseFechaIngreso();
	int duracion = viaje.getDtViajeBaseDuracion();
	int distancia = viaje.getDtViajeBaseDistancia();
	Vehiculo* vehiculo = obtenerVehiculo(nroSerieVehiculo);

	Viaje* viajeUsuario = new Viaje(fecha, duracion, distancia, vehiculo);
	usuario->agregarViaje(viajeUsuario);

	cout << endl << "Viaje agregado." << endl;
}
#pragma endregion

#pragma region Op4 - VER VIAJES ANTES DE FECHA
void verViajesAntesDeFecha(){
	system("clear");

	cout <<"_____________________________________________________"<< endl;
	cout <<"==V E R   V I A J E S   A N T E S   D E   F E C H A=="<< endl;
	cout <<"_____________________________________________________"<< endl;

	try {
		string ci;
		cout << endl << "CI: ";
		cin >> ci;
		existeUsuario(ci);

		int dia, mes, anio;
		cout << endl << "INGRESE LA FECHA A CONTINUACIÓN" << endl;
		cout << endl << "DIA: ";
		cin >> dia;
		if (dia < 1 || dia > 31)
			throw invalid_argument("ERROR! Día inválido.");
		cout << "MES: ";
		cin >> mes;
		if (mes < 1 || mes > 12)
			throw invalid_argument("ERROR! Mes inválido.");
		cout << "ANIO: ";
		cin >> anio;
		cout << endl << "VIAJES ANTES DEL " << dia << "/" << mes << "/" << anio << ":";

		int cantViajes;
		DtFecha dtFecha = DtFecha(dia, mes, anio);
		DtViaje** viajes = verViajesAntesDeFecha(dtFecha, ci, cantViajes);
		if (cantViajes > 0){
			for (int i = 0; i < cantViajes; i++)
				cout << "\n\n" << *(viajes[i]);
		}
		else
			cout << endl << endl << "No se encontraron registros." << endl;
	} catch (invalid_argument& e){
		cout << endl << e.what() << endl;
	}
}
DtViaje** verViajesAntesDeFecha(DtFecha& fecha, string ci, int& cantViajes){
	Usuario* usuario = obtenerUsuario(ci);
    int cantViajesUsuario = usuario->getUsuTopeViajes();
	Viaje** viajes = usuario->obtenerViajes();
    cantViajes = 0;
	DtViaje** dtViajes = new DtViaje*[cantViajes];

	int i = 0;
	while (i < cantViajesUsuario){
        DtFecha dtFechaActual = viajes[i]->getViajeFecha();
        int duracion = viajes[i]->getViajeDuracion();
		int distancia = viajes[i]->getViajeDistancia();
		Vehiculo* vehiculo = viajes[i]->getViajeVehiculo();

		DtVehiculo dtVehiculo;
		float precioViaje;
		if (Monopatin* m = dynamic_cast<Monopatin*>(vehiculo)){
			precioViaje = m->darPrecioViaje(duracion, distancia);
			dtVehiculo = DtVehiculo(m->getNroSerie(), m->getPorcentajeBateria(), m->getPrecioBase());
		}
		else {
			if (Bicicleta* b = dynamic_cast<Bicicleta*>(vehiculo)) {
				precioViaje = b->darPrecioViaje(duracion, distancia);
				dtVehiculo = DtVehiculo(b->getNroSerie(), b->getPorcentajeBateria(), b->getPrecioBase());
			}
		}
        
		if (dtFechaActual < fecha){
			DtViaje* dtViaje = new DtViaje(duracion, distancia, dtFechaActual, precioViaje, dtVehiculo);
			dtViajes[cantViajes] = dtViaje;
			cantViajes++;
		}
		i++;
	}
	return dtViajes;
}
#pragma endregion 

#pragma region Op5 - ELIMINAR VIAJES
void eliminarViajes(){
	system("clear");

	cout << "_____________________________________________________" << endl;
	cout << "============E L I M I N A R   V I A J E S============" << endl;
	cout << "_____________________________________________________" << endl;

	try {
		string ci;

        cout << endl << "CI: ";
        cin >> ci;
		existeUsuario(ci);

		int dia, mes, anio;
		cout << endl << "INGRESE LA FECHA A CONTINUACIÓN" << endl;
        cout << endl << "DIA: ";
        cin >>dia;
        if (dia < 1 || dia > 31)
            throw invalid_argument("ERROR! Día inválido.");
        cout << "MES: ";
        cin >> mes;
        if (mes < 1 || mes > 12)
            throw invalid_argument("ERROR! Mes inválido.");
        cout << "ANIO: ";
		cin >> anio;

		DtFecha fecha = DtFecha(dia, mes, anio);
        eliminarViajes(ci, fecha);
    }catch(invalid_argument& e){
      	cout << endl << e.what() << endl;
    }
}
void eliminarViajes(string ci, DtFecha& fecha){
    Usuario* usuario = obtenerUsuario(ci);
	int cantViajesEliminados = usuario->eliminarViajesFecha(fecha);
	cout << endl << "Viajes eliminados: " << cantViajesEliminados << endl;
}
#pragma endregion 

#pragma region Op6 - CARGA BATERIA
void cambiarBateria(){
	system("clear");

	cout << "_____________________________________________________" << endl;
	cout << "=============C A R G A R   B A T E R Í A=============" << endl;
	cout << "_____________________________________________________" << endl;

	int nroSerie;
	float porcentajeBateria;
	bool okRegistro = false;

	cout << endl << "Nº DE SERIE: ";
	cin >> nroSerie;

	try{
		if (existeVehiculo(nroSerie)){
			cout << endl << "PORCENTAJE DE BATERIA CARGADO: ";
			cin >> porcentajeBateria;

			cambiarBateriaVehiculo(nroSerie, porcentajeBateria);

			cout << endl << "Porcentaje de batería actualizado." << endl;
		}
	}catch (invalid_argument& e){
		cout << endl << e.what() << endl;
	}
}
void cambiarBateriaVehiculo(int nSerie, float porcentaje){
	int i = 0;
	bool existe = false;

	if (porcentaje < 0 || porcentaje>100) {
		throw invalid_argument("\nERROR! El porcentaje debe estar entre 0 y 100.");
	}
	else {
		while ((i < coleccionVehiculos.tope) && (!existe)) {
			if (nSerie == coleccionVehiculos.vehiculos[i]->getNroSerie())
				coleccionVehiculos.vehiculos[i]->setPorcentajeBateria(porcentaje);
			existe = true;
			i++;
		}
	}
}
#pragma endregion

#pragma region Op7 - OBTENER VEHICULOS
void obtenerVehiculos(){
    system ("clear");

	cout << "_____________________________________________________" << endl;
	cout << "=========L I S T A   D E   V E H I C U L O S=========" << endl;
	cout << "_____________________________________________________" << endl;

	int cantVehiculos;
    DtVehiculo** lista = obtenerVehiculos(cantVehiculos);
    if (cantVehiculos == 0)
        cout << endl << "El sistema no tiene vehículos ingresados." << endl;
    else{
		for (int i = 0; i < cantVehiculos; i++) {
			DtMonopatin* m = dynamic_cast<DtMonopatin*>(lista[i]);
			if (m != NULL)
				cout << "\t" << endl << *m;
			else{
				DtBicicleta* b = dynamic_cast<DtBicicleta*>(lista[i]);
				if (b != NULL)
					cout << "\t" << endl << *b;
			}
		}
    }
}
DtVehiculo** obtenerVehiculos(int& cantVehiculos){
	cantVehiculos = 0;
    DtVehiculo** lista = new DtVehiculo*[coleccionVehiculos.tope];
    for (int i = 0; i < coleccionVehiculos.tope; i++){
		if (Monopatin* m = dynamic_cast<Monopatin*>(coleccionVehiculos.vehiculos[i])){
			DtMonopatin* monos = new DtMonopatin(m->getNroSerie(), m->getPorcentajeBateria(), m->getPrecioBase(), m->getTieneLuces());
			lista[i] = monos;
		}
		else {
			if (Bicicleta* b = dynamic_cast<Bicicleta*>(coleccionVehiculos.vehiculos[i])){
				DtBicicleta* bici = new DtBicicleta(b->getNroSerie(), b->getPorcentajeBateria(), b->getPrecioBase(), b->getTipoBici(), b->getCambios());
				lista[i] = bici;
			}
		}
		cantVehiculos++;
    }
    return lista;
}
#pragma endregion

#pragma region FUNCIONES AUXILIARES
bool existeUsuario(string ci){
    int i = 0;
    bool existe = false;
    while ((i < coleccionUsuarios.tope) && (!existe)){
        if (ci == coleccionUsuarios.usuarios[i]->getUsuCedula())
            existe = true;
        i++;
    }
    if (!existe)
      throw invalid_argument("ERROR! No existe usuario.\n");
}

bool existeVehiculo(int nSerie){
    int i = 0;
    bool existe = false;
    while ((i < coleccionVehiculos.tope) && (!existe)){
        if (nSerie == coleccionVehiculos.vehiculos[i]->getNroSerie())
             existe = true;
        i++;
    }
    if (!existe){
		throw invalid_argument("ERROR! No existe el vehículo.\n");
    }

    return existe;
}

bool validarRegistroVehiculo(int nSerie, float porcentaje, float precio){
    bool resp = true;
    if (porcentaje < 0 || porcentaje > 100){
		resp = false;
		throw invalid_argument("\nERROR! El porcentaje debe estar entre 0 y 100.\n");
    }
    if (precio < 0){
		resp = false;
		throw invalid_argument("\nERROR! El precio debe ser mayor a 0.\n");
	}

	int i = 0;
	bool existeVehiculo = false;
	while ((i < coleccionVehiculos.tope) && (!existeVehiculo)) {
		if (nSerie == coleccionVehiculos.vehiculos[i]->getNroSerie()) {
			existeVehiculo = true;
			resp = false;
		}
		i++;
	}
	if (existeVehiculo) {
		resp = false;
		throw invalid_argument("\nERROR! Ya existe un vehículo con ese número de serie.\n");
	}

    return resp;
}

void validarRegistroUsuario(string ci){
	int i = 0;
	bool existe = false;
	while ((i < coleccionUsuarios.tope) && (!existe)){
		if (ci == coleccionUsuarios.usuarios[i]->getUsuCedula())
			existe = true;
		i++;
	}
	if (existe)
		throw invalid_argument("ERROR! El usuario ya existe en el sistema.\n");
}

Usuario* obtenerUsuario(string ci){
    Usuario* usuarioEncontrado;
    int i=0;
    bool existe= false;
    while ((i<coleccionUsuarios.tope)&&(!existe)){
        if (ci == coleccionUsuarios.usuarios[i]->getUsuCedula()){
            usuarioEncontrado=coleccionUsuarios.usuarios[i];
            existe=true;
        }
        i++;
    }
    return usuarioEncontrado;
}

Vehiculo* obtenerVehiculo(int nSerie){
    Vehiculo* vehiculoEncontrado;
    int i = 0;
    bool existe = false;
    while ((i < coleccionVehiculos.tope) && (!existe)){
        if (nSerie == coleccionVehiculos.vehiculos[i]->getNroSerie()){
            vehiculoEncontrado = coleccionVehiculos.vehiculos[i];
            existe = true;
        }
        i++;
    }
	return vehiculoEncontrado;
}
#pragma endregion

//MENU
void menu(){
	cout << "_____________________________________________________" << endl;
	cout << "==                    M  E  N  U                   ==" << endl;
	cout << "=====================================================" << endl;
	cout << "1. REGISTRAR USUARIO" << endl;
	cout << "2. AGREGAR VEHICULO" << endl;
	cout << "3. INGRESAR VIAJE" << endl;
	cout << "4. VER VIAJES ANTES DE FECHA" << endl;
	cout << "5. ELIMINAR VIAJES" << endl;
	cout << "6. CAMBIAR BATERIA DE VEHICULO" << endl;
	cout << "7. OBTENER VEHICULOS" << endl;
	cout << "0. SALIR" << endl;
	cout << "_____________________________________________________" << endl;
	cout << "OPCION>> ";
}

//MAIN
int main() {
	menu();

	int opcion;
    cin>> opcion;
    while(opcion != 0){
        switch (opcion){
            case 1: registrarUsuario();
                break;
            case 2: agregarVehiculo();
                break;
            case 3: ingresarViaje();
                break;
            case 4: verViajesAntesDeFecha();
                break;
            case 5: eliminarViajes();
                break;
            case 6: cambiarBateria();
                break;
            case 7: obtenerVehiculos();
                break;
            case 0: {
                system("exit");

                cout << "SALIENDO..." << endl;
            }
			default:
				cout << "OPCIÓN INCORRECTA" << endl;
        }
        menu();

        cin >> opcion;
    }
    return 0;
}
