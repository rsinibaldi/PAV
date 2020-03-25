#include <iostream>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "clases/Monopatin.h"
#include "clases/Usuario.h"
#include "clases/Vehiculo.h"
#include "dtTypes/DtReloj.h"
#include "dtTypes/DtFecha.h"
#include "clases/Viaje.h"
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

//Validaciones
bool validarRegistroVehiulo(int, float, float);
bool validarRecargaBateria(int, float);

//OPERACION1 REGISTRAR USUARIO
void agregarVehiculo();
void registrarUsuario(string ci, string nombre /*Dtfecha fecha*/);

//OPERACION2 REGISTRAR VEHICULOS
void agregarVehiculo();
void agregarVehiculo(int nroSerie, float porcentajeBateria, float precioBase);

//OPERACION6 CAMBIAR BATERIA
void cambiarBateria();
void cambiarBateriaVehiculo(int nroSerieVehiculo, float cargaVehiculo);

/*----------------------------OPERACION1 REGISTRAR USUARIO--------------------------------------------*/
void registrarUsuario(){
    system ("clear");
    cout <<"____________________________________________" <<endl;
    cout <<"====R E G I S T R O  D E   U S U A R I O===="<< endl;
    cout <<"____________________________________________\n" <<endl;
    string ci, nombre;
//    DtFecha fechaIngreso;
//    DtReloj dtReloj;
    cout << "NOMBRE: ";
    cin >> nombre;
    cout << endl << "CI: ";
    cin >> ci;
//    dtReloj=DtReloj();
    registrarUsuario(ci, nombre);
}
void registrarUsuario(string ci, string nombre){
    Usuario* usuario;
    //construyo usuario sin fecha, falta definir como se hace
    usuario= new Usuario(ci, nombre);
    coleccionUsuarios.usuarios[coleccionUsuarios.tope]=usuario;
    coleccionUsuarios.tope++;

}
/*----------------------------FIN OPERACION1--------------------------------------------*/


/*----------------------------OPERACION2 REGISTRAR VEHICULOS--------------------------------------------*/
void agregarVehiculo(){

	system("clear");
  cout <<"________________________________________________" <<endl;
  cout <<"====R E G I S T R O  D E   V E H I C U L O S===="<< endl;
  cout <<"________________________________________________\n" <<endl;

  int nroSerie;
  float porcentajeBateria, precioBase;
  bool okRegistro = false;

  cout << "Nº de serie: ";
  cin >> nroSerie;
  cout << endl << "Porcentaje de batería: ";
  cin >> porcentajeBateria;
  cout << endl << "Precio base: ";
  cin >> precioBase;

  // if (!existeVehiculo(nroSerie)){
    try{
      okRegistro = validarRegistroVehiulo(nroSerie, porcentajeBateria, precioBase);
      if(okRegistro){
        agregarVehiculo(nroSerie, porcentajeBateria, precioBase);
      }
    }catch(invalid_argument& e){
      cout << e.what() << endl;
    }
  // }
}

void agregarVehiculo(int nroSerie, float porcentajeBateria, float precioBase){
  Vehiculo* vehiculo;
  //construyo vehiculo

  vehiculo= new Vehiculo(nroSerie, porcentajeBateria, precioBase);
  coleccionVehiculos.vehiculos[coleccionVehiculos.tope]=vehiculo;
  coleccionVehiculos.tope++;

}
/*----------------------------FIN OPERACION2 REGISTRAR VEHICULOS--------------------------------------------*/


/*----------------------------OPERACION6 CARGA BATERIA--------------------------------------------*/
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

/*----------------------------FIN OPERACION6 CARGA BATERIA--------------------------------------------*/

/*----------------------------FUNCIONES AUXILIARES--------------------------------------------*/


void existeUsuario(string ci){
    int i=0;
    bool existe=false;
    while ((i<coleccionUsuarios.tope) && (!existe)){
        if(ci==coleccionUsuarios.usuarios[i]->getUsuCedula())
                existe =true;
        i++;
    }
    if (!existe)
        throw invalid_argument("ERROR! NO HAY USUARIO CON ESA CI");
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

bool validarRegistroVehiulo(int nSerie, float porcentaje, float precio){
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
    cout<< i << " - Serie: "<< coleccionVehiculos.vehiculos[i]->getNroSerie() << std::endl;
    cout<< i << " - Bateria: "<< coleccionVehiculos.vehiculos[i]->getPorcentajeBateria() << std::endl;
    cout<< i << " - precio: "<< coleccionVehiculos.vehiculos[i]->getPrecioBase() << std::endl;
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

/*----------------------------FIN FUNCIONES AUXILIARES--------------------------------------------*/

//MENU
void menu(){
    // system("clear");
    cout <<"_____________________________________________" <<endl;
    std::cout << "==              M  E  N  U                 ==" << std::endl;
    cout <<"=============================================" <<endl;
    std::cout << "1. REGISTRAR USUARIO"<< std::endl;
    std::cout << "11. BUSCAR USUARIO"<< std::endl;
    std::cout << "2. AGREGAR VEHICULO"<< std::endl;
    std::cout << "3. INGRESAR VIAJE"<< std::endl;
    std::cout << "4. VER VIAJES ANTES DE FECHA"<< std::endl;
    std::cout << "5. ELIMINAR VIAJES"<< std::endl;
    std::cout << "6. CAMBIAR BATERIA DE VEHICULO"<< std::endl;
    std::cout << "7. OBTENER VEHICULOS"<< std::endl;
    std::cout << "97. [RS] - BUSCAR VEHICULO"<< std::endl;
    std::cout << "98. [RS] - LISTAR VEHICULOS"<< std::endl;
    std::cout << "99. SALIR"<< std::endl;
    cout <<"_____________________________________________" <<endl;
    cout<<"OPCION>> ";
}
/*----------------------------FIN FUNCIONES AUX--------------------------------------------*/

//MAIN
int main() {
    int opcion;
    //funcion que carga datos de prueba()
    menu();
    string ci;
    cin>> opcion;
    while(opcion != 99){
        switch(opcion){
            case 1: registrarUsuario(); //registrarUsuario();
                break;
            case 2: agregarVehiculo();
                break;
            case 3: cout<< "op3";//ingresarViaje();
                break;
            case 4: cout<< "op4";//verViajesAntesDeFecha();
                break;
            case 5: cout<< "op5";//eliminarViajes();
                break;
            case 6: cambiarBateria();
                break;
            case 7: cout<< "op7";//obtenerVehiculos();
                break;
            case 11: cout<< "ingrese ci: ";
                     cin>> ci;
                     obtenerUsuario(ci);
                break;
            case 97:
                      system("clear");
                      int serie;
                      cout<< "Nro de serie auto: ";//obtenerVehiculos();
                      cin>> serie;
                      Vehiculo* vehiculoEncontrado;
                      vehiculoEncontrado = obtenerVehiculo(serie);
                       cout<< "Encontre - Serie: "<< vehiculoEncontrado->getNroSerie() << std::endl;
                       cout<< "Encontre - Bateria: "<< vehiculoEncontrado->getPorcentajeBateria() << std::endl;
                       cout<< "Encontre - precio: "<< vehiculoEncontrado->getPrecioBase() << std::endl;
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
