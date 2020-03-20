#include <iostream>
#include <stdio.h>
#include <string.h>
#include "clases/Monopatin.h"
#include "clases/Usuario.h"
#include "clases/Vehiculo.h"
#include "clases/Viaje.h"



//MENU
void menu(){
    cout <<"_____________________________________________" <<endl;
    std::cout << "==              M  E  N  U                 ==" << std::endl;
    cout <<"=============================================" <<endl;
    std::cout << "1. REGISTRAR USUARIO"<< std::endl;
    std::cout << "2. AGREGAR VEHICULO"<< std::endl;
    std::cout << "3. INGRESAR VIAJE"<< std::endl;
    std::cout << "4. VER VIAJES ANTES DE FECHA"<< std::endl;
    std::cout << "5. ELIMINAR VIAJES"<< std::endl;
    std::cout << "6.CAMBIAR BATERIA DE VEHICULO"<< std::endl;
    std::cout << "7. OBTENER VEHICULOS"<< std::endl;
    std::cout << "99. SALIR"<< std::endl;
    cout <<"_____________________________________________" <<endl;
    cout<<"OPCION>> ";
}

int main() {
    int opcion;
    //funcion que carga datos de prueba()
    menu();
    cin>> opcion;
    while(opcion != 99){
        switch(opcion){
            case 1: cout<< "op1"; //registrarUsuario();
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
