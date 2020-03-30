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

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define  MAX_USUARIOS 10

struct {
    Usuario* usuarios[MAX_USUARIOS];
    int tope;
}coleccionUsuarios;

struct {
    Vehiculo* vehiculos[MAX_USUARIOS];
    int tope;
}coleccionVehiculos;

//FUNCIONES AUXILIARES
void menu();
void existeUsuario(string);
Usuario* obtenerUsuario(string);
bool existeVehiculo(int);
Vehiculo* obtenerVehiculo(int);
void listarVehiculos();

//VALIDACIONES
void validarRegistroUsuario(string ci);
bool validarRegistroVehiculo(int, float, float);
bool validarRecargaBateria(int, float);

//OPERACION1 REGISTRAR USUARIO
void registrarUsuario();
void registrarUsuario(string ci, string nombre, DtFecha dtFecha);

//OPERACION2 REGISTRAR VEHICULOS
void agregarVehiculo();
void agregarVehiculo(int nroSerie, float porcentajeBateria, float precioBase);

//OPERACION3 INGRESAR VIAJES

//OPERACION4 VER VIAJES ANTES DE FECHA
void verViajesAntesDeFecha();
DtViaje** verViajesAntesDeFecha(DtFecha&, string, int&);

//OPERACION5 ELIMINAR VIAJES

//OPERACION6 CAMBIAR BATERIA
void cambiarBateria();
void cambiarBateriaVehiculo(int nroSerieVehiculo, float cargaVehiculo);

//OPERACION7 OBTENER VEHICULOS
void obtenerVehiculos();
DtVehiculo** obtenerVehiculos(int& cantVehiculos);

#pragma region Op1 - REGISTRAR USUARIO
void registrarUsuario(){
  system ("clear");
  cout <<"_____________________________________________________"<< endl;
  cout <<"========R E G I S T R O   D E   U S U A R I O========"<< endl;
  cout <<"_____________________________________________________"<< endl;

  string ci, nombre;
  DtFecha fechaIngreso;

  time_t fechaActual = time(0);
  tm* fecha = localtime(&fechaActual);
  int dia = fecha->tm_mday;
  int mes = 1 + fecha->tm_mon;
  int anio = 1900 + fecha->tm_year;
  DtFecha dtFecha = DtFecha(dia, mes, anio);

  cout << endl << "NOMBRE: ";
  cin >> nombre;
  cout << endl << "CI: ";
  cin >> ci;

  try{
    validarRegistroUsuario(ci);
    registrarUsuario(ci, nombre, dtFecha);
    cout << endl << "Usuario dado de alta." << endl;
  }catch(invalid_argument& e){
    cout << endl << e.what() << endl;
  }
}
void registrarUsuario(string ci, string nombre, DtFecha dtFecha){
    Usuario* usuario = new Usuario(ci, nombre, dtFecha);
    coleccionUsuarios.usuarios[coleccionUsuarios.tope] = usuario;
    coleccionUsuarios.tope++;
}
#pragma endregion Op1 - REGISTRAR USUARIO

#pragma region Op2 - REGISTRAR VEHICULOS
void agregarVehiculo(){
	system("clear");
  cout <<"_____________________________________________________" <<endl;
  cout <<"======R E G I S T R O   D E   V E H I C U L O S======"<< endl;
  cout <<"_____________________________________________________" <<endl;

  int nroSerie;
  float porcentajeBateria, precioBase;
  bool okRegistro = false;

  cout << endl << "Nº de serie: ";
  cin >> nroSerie;
  cout << endl << "Porcentaje de batería: ";
  cin >> porcentajeBateria;
  cout << endl << "Precio base: ";
  cin >> precioBase;

  try{
    okRegistro = validarRegistroVehiculo(nroSerie, porcentajeBateria, precioBase);
    if(okRegistro){
      agregarVehiculo(nroSerie, porcentajeBateria, precioBase);
    }
  }catch(invalid_argument& e){
    cout << e.what() << endl;
  }
}
void agregarVehiculo(int nroSerie, float porcentajeBateria, float precioBase){
  Vehiculo* vehiculo = new Vehiculo(nroSerie, porcentajeBateria, precioBase);
  coleccionVehiculos.vehiculos[coleccionVehiculos.tope]=vehiculo;
  coleccionVehiculos.tope++;
}
#pragma endregion Op2 - REGISTRAR VEHICULOS

#pragma region Op3 - INGRESAR VIAJES
#pragma endregion Op3 - INGRESAR VIAJES

#pragma region Op4 - VER VIAJES ANTES DE FECHA
void verViajesAntesDeFecha(){
	system("clear");
	cout <<"_____________________________________________________"<< endl;
	cout <<"==V E R   V I A J E S   A N T E S   D E   F E C H A=="<< endl;
	cout <<"_____________________________________________________"<< endl;

	string ci;
	int dia, mes, anio, cantViajes;
	DtFecha dtFecha;

	cout << endl << "CI: ";
	cin >> ci;
	try{
		existeUsuario(ci);

    cout << endl << "DIA: ";
    cin >> dia;
    if (dia < 1 || dia > 31)
        throw invalid_argument("ERROR! dia invalido.");
    cout << endl << "MES: ";
    cin >> mes;
    if (mes < 1 || mes > 12)
        throw invalid_argument("ERROR! mes invalido.");
    cout << endl << "ANIO: ";
    cin >> anio;
    cout << endl << "VIAJES ANTES DE " << dia << "/" << mes << "/" << anio << ":";

    dtFecha = DtFecha(dia, mes, anio);
    DtViaje** viajes = verViajesAntesDeFecha(dtFecha, ci, cantViajes);
    if (cantViajes > 0){
      for(int i = 0; i < cantViajes; i++)
        cout << "\n\n" << *(viajes[i]);
    }else
      cout << endl << endl << "No se encontraron registros." << endl;
	}catch(invalid_argument& e){
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
	while(i < cantViajesUsuario){
    DtFecha dtFechaActual = viajes[i]->getViajeFecha();
    Vehiculo vehiculo = viajes[i]->getViajeVehiculo();
    int duracion = viajes[i]->getViajeDuracion();
    int distancia = viajes[i]->getViajeDistancia();
    float precioViaje = vehiculo.darPrecioviaje(duracion, distancia);
    DtVehiculo dtVehiculo = DtVehiculo(vehiculo.getNroSerie(), vehiculo.getPorcentajeBateria(), vehiculo.getPrecioBase());

		if (dtFechaActual < fecha){
			DtViaje* dtViaje = new DtViaje(duracion, distancia, dtFechaActual, precioViaje, dtVehiculo);
			dtViajes[cantViajes] = dtViaje;
			cantViajes++;
		}
		i++;
	}
	return dtViajes;
}
#pragma endregion Op4 - VER VIAJES ANTES DE FECHA

#pragma region Op5 - ELIMINAR VIAJES
#pragma endregion Op5 - ELIMINAR VIAJES

#pragma region Op6 - CARGA BATERIA
void cambiarBateria(){

	system("clear");
  cout <<"___________________________________" <<endl;
  cout <<"====C A R G A R   B A T E R Í A===="<< endl;
  cout <<"___________________________________\n" <<endl;

  int nroSerie;
  float porcentajeBateria;
  bool  okRegistro  = false;

  cout << "Nº de serie a buscar: ";
  cin >> nroSerie;

  try{
    okRegistro = existeVehiculo(nroSerie);
    //Exite vehiculo, vamos a cargar la bateria
    if(okRegistro){
      cout << "Porcentaje de batería cargado: ";
      cin >> porcentajeBateria;

      try{
        cambiarBateriaVehiculo(nroSerie, porcentajeBateria);
      }catch(invalid_argument& e){
        cout << e.what() << endl;
      }
    }

  }catch(invalid_argument& e){
    cout << e.what() << endl;
  }

}
void cambiarBateriaVehiculo(int nSerie, float porcentaje){
  int i=0;
  bool existe=false;

  if(porcentaje<0 || porcentaje>100){
    throw invalid_argument("ERROR! El porcentaje debe estar entre 0 y 100.\n");
  }else{
    while ((i<coleccionVehiculos.tope) && (!existe)){
        if(nSerie==coleccionVehiculos.vehiculos[i]->getNroSerie())
          coleccionVehiculos.vehiculos[i]->setPorcentajeBateria(porcentaje);
          existe =true;
        i++;
    }
  }

}
#pragma endregion Op6 - CARGA BATERIA

#pragma region Op7 - OBTENER VEHICULOS

void obtenerVehiculos(){

        system ("clear");
        cout <<"____________________________________________" <<endl;
        cout <<"====L I S T A____D E____V E H I C U L O S===="<< endl;
        cout <<"____________________________________________\n" <<endl;

        DtVehiculo**  lista = obtenerVehiculos(coleccionVehiculos.tope);
        if(lista == NULL){
          cout<< "vacio" <<endl;
        }
        for(int i=0;i<coleccionVehiculos.tope;i++){
            cout<< "entro al for1" << endl;

                    DtMonopatin* m = dynamic_cast<DtMonopatin*>(lista[i]);  // aca me explota por algun motivo
                    cout << "rrrrrr" << endl;
                    if(m != NULL){
                      cout<< "Antes del cout1" << endl;
                          cout << *m << endl;
                            cout<< "dsp del cout1" << endl;
                    }else{
                          DtBicicleta* b = dynamic_cast<DtBicicleta*>(lista[i]);
                          if(b!=NULL){
                              cout<< "Antes del cout2" << endl;
                                  cout << *b << endl;
                                    cout<< "dsp del cout2" << endl;
                        }

                    }

        }

}


DtVehiculo** obtenerVehiculos(int& cantVehiculos){

        //Vehiculo* = obtenerVehiculo(vehiculos->getNroSerie());
        DtVehiculo** lista = new DtVehiculo*[coleccionVehiculos.tope];

        for(int i=0; i<coleccionVehiculos.tope; i++){
            cout<< "ENTRO AL FOR" << endl;
              if(Monopatin* m = dynamic_cast<Monopatin*>(coleccionVehiculos.vehiculos[i])){
                  cout<< "MONOPATIN" << endl;
                      DtMonopatin* monos = new DtMonopatin(m->getNroSerie(), m->getPorcentajeBateria(), m->getPrecioBase(), m->getTieneLuces());
                      lista[i] = monos;
                      cout << lista[i] << endl;

              }else{

                      if(Bicicleta* b = dynamic_cast<Bicicleta*>(coleccionVehiculos.vehiculos[i])){
                            cout << "BICICLETA" << endl;
                            DtBicicleta* bici = new DtBicicleta(b->getNroSerie(), b->getPorcentajeBateria(), b->getPrecioBase(), b->getTipoBici(), b->getCambios());
                            lista[i] = bici;
                            cout << lista[i] << endl;

                      }


             }
       }
       return lista;
}

#pragma endregion Op7 - OBTENER VEHICULOS

#pragma region FUNCIONES AUXILIARES
void existeUsuario(string ci){
    int i = 0;
    bool existe = false;
    while ((i < coleccionUsuarios.tope) && (!existe)){
      if(ci == coleccionUsuarios.usuarios[i]->getUsuCedula())
        existe = true;
      i++;
    }
    if (!existe)
      throw invalid_argument("ERROR! No existe usuario.\n");
}

bool existeVehiculo(int nSerie){
    int i=0;
    bool existe=false;
    while ((i<coleccionVehiculos.tope) && (!existe)){
        if(nSerie==coleccionVehiculos.vehiculos[i]->getNroSerie())
                existe =true;
        i++;
    }

    if (!existe){
      throw invalid_argument("ERROR! No exite vehiculo con el Nº de serie ingresado.\n");
    }

    return existe;
}

bool validarRegistroVehiculo(int nSerie, float porcentaje, float precio){
    int i=0;
    bool  existeVehiculo  =false;
    bool  resp = true;

    while ((i<coleccionVehiculos.tope) && (!existeVehiculo)){
      if(nSerie==coleccionVehiculos.vehiculos[i]->getNroSerie()){
        existeVehiculo =true;
        resp = false;
      }
      i++;
    }

    if(porcentaje<0 || porcentaje>100){
      resp = false;
      throw invalid_argument("ERROR! El porcentaje debe estar entre 0 y 100.\n");
    }
    if(precio<0){
      resp = false;
      throw invalid_argument("ERROR! El precio debe ser mayor a 0.\n");
    }

    if (existeVehiculo){
      resp = false;
      throw invalid_argument("ERROR! Ya existe un vehiculo con ese numero de serie.\n");
    }

    return resp;
}

void validarRegistroUsuario(string ci){
  int i = 0;
  bool existe = false;
  while((i<coleccionUsuarios.tope) && (!existe)){
      if(ci == coleccionUsuarios.usuarios[i]->getUsuCedula())
        existe =true;
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
        if(ci == coleccionUsuarios.usuarios[i]->getUsuCedula()){
            usuarioEncontrado=coleccionUsuarios.usuarios[i];
            existe=true;
        }
        i++;
    }
    return usuarioEncontrado;
}

void listarVehiculos(){

  for(int i=0;i<coleccionVehiculos.tope;i++){
    cout<< i << " - Serie: "<< coleccionVehiculos.vehiculos[i]->getNroSerie() << endl;
    cout<< i << " - Bateria: "<< coleccionVehiculos.vehiculos[i]->getPorcentajeBateria() << endl;
    cout<< i << " - precio: "<< coleccionVehiculos.vehiculos[i]->getPrecioBase() << endl;
  }

}

Vehiculo* obtenerVehiculo(int nSerie){
    Vehiculo* vehiculoEncontrado;
    int i=0;
    bool existe= false;
    while ((i<coleccionVehiculos.tope)&&(!existe)){
        if(nSerie == coleccionVehiculos.vehiculos[i]->getNroSerie()){
            vehiculoEncontrado=coleccionVehiculos.vehiculos[i];
            existe=true;
        }
        i++;
    }
    return vehiculoEncontrado;
}
#pragma endregion FUNCIONES AUXILIARES

//MENU
void menu(){
  cout <<"_____________________________________________________"<< endl;
  cout << "==                    M  E  N  U                   =="<< endl;
  cout <<"====================================================="<< endl;
  cout << "1. REGISTRAR USUARIO"<< endl;
  cout << "11. BUSCAR USUARIO"<< endl;
  cout << "2. AGREGAR VEHICULO"<< endl;
  cout << "3. INGRESAR VIAJE"<< endl;
  cout << "4. VER VIAJES ANTES DE FECHA"<< endl;
  cout << "5. ELIMINAR VIAJES"<< endl;
  cout << "6. CAMBIAR BATERIA DE VEHICULO"<< endl;
  cout << "7. OBTENER VEHICULOS"<< endl;
  cout << "97. [RS] - BUSCAR VEHICULO"<< endl;
  cout << "98. [RS] - LISTAR VEHICULOS"<< endl;
  cout << "99. SALIR"<< endl;
  cout <<"_____________________________________________________"<< endl;
  cout <<"OPCION>> ";
}

//MAIN
int main() {
    int opcion;
    //funcion que carga datos de prueba()
    menu();
    string ci;
    cin>> opcion;
    while(opcion != 99){
        switch(opcion){
          case 1: registrarUsuario();
              break;
          case 2: agregarVehiculo();
              break;
          case 3: system ("clear"); //ingresarViaje();
              break;
          case 4: verViajesAntesDeFecha();
              break;
          case 5: system ("clear"); //eliminarViajes();
              break;
          case 6: cambiarBateria();
              break;
          case 7: obtenerVehiculos();
              break;
          case 11:
                cout << endl << "CI: ";
                cin >> ci;
                try{
                  existeUsuario(ci);
	                Usuario* usuario = obtenerUsuario(ci);
                  cout << endl << *(usuario) << endl;
                }catch(invalid_argument& e){
                  cout << endl << e.what() << endl;
                }
              break;
          case 97:
              system("clear");
              int serie;
              cout<< "Nro de serie auto: ";//obtenerVehiculos();
              cin>> serie;
              Vehiculo* vehiculoEncontrado;
              vehiculoEncontrado = obtenerVehiculo(serie);
              cout<< "Encontre - Serie: "<< vehiculoEncontrado->getNroSerie() << endl;
              cout<< "Encontre - Bateria: "<< vehiculoEncontrado->getPorcentajeBateria() << endl;
              cout<< "Encontre - precio: "<< vehiculoEncontrado->getPrecioBase() << endl;
            break;
          case 98:
              system("clear");
              cout << "LISTAR VEHICULOS..." << endl;
              listarVehiculos();
            break;
          case 99: system("exit");
              cout << "SALIENDO..." << endl;
          default:
              cout << "OPCIÓN INCORRECTA" << endl;
        }
        menu();
        cin >> opcion;
    }
    return 0;
}
