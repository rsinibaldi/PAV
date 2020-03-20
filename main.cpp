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

//FUNCIONES AUXILIARES
void menu();
void existeUsuario(string);
Usuario* obtenerUsuario(string);

//OPERACION1 REGISTRAR USUARIO
void registrarUsuario();
void registrarUsuario(string ci, string nombre /*Dtfecha fecha*/);


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


//MENU
void menu(){
    //system("clear");
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
            case 2: cout<< "op2";
                agregarVehiculo();
                break;
            case 3: cout<< "op3";//ingresarViaje();
                break;
            case 4: cout<< "op4";//verViajesAntesDeFecha();
                break;
            case 5: cout<< "op5";//eliminarViajes();
                break;
            case 6: cout<< "op6";//cambiarBateria();
                break;
            case 7: cout<< "op7";//obtenerVehiculos();
                break;
            case 11: cout<< "ingrese ci: ";
                     cin>> ci;
                     obtenerUsuario(ci);
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



void agregarVehiculo(){

	system("clear");
	cout <<"___________________________________________________" <<endl;
	cout <<"______R E G I S T R O__D E__ V E H I C U L O_______"<< endl;




}
