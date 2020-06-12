#include "../Controladores/ControladorAgregarProducto.h"
#include "../Controladores/ControladorIniciarVenta.h"
#include "../Manejadores/ManejadorEmpleado.h"
#include "../Manejadores/ManejadorProducto.h"
#include "../Manejadores/ManejadorVenta.h"
#include "ControladorAgregarDatos.h"

void ControladorAgregarDatos::cargarDatos(){
    //empleados
    ManejadorEmpleado* mE=ManejadorEmpleado::getInstancia();
    Empleado* m= new Mozo("A01", "Juan");
    Empleado* m2= new Mozo("A02", "Ines");
    Empleado* m3= new Mozo("A03", "Maria");
    mE->agregarEmpleado(m);
    mE->agregarEmpleado(m2);
    mE->agregarEmpleado(m3);
    //ventas
    ManejadorVenta* mV=ManejadorVenta::getInstancia();
    Venta* vL=new VentaLocal("V01");
    Venta* vL2= new VentaLocal("V02");
    Venta* vL3= new VentaLocal("V03");
    mV->agregarVenta(vL);
    mV->agregarVenta(vL2);
    mV->agregarVenta(vL3);
    //Producto
    ManejadorProducto* mP=ManejadorProducto::getInstancia();
    Producto* p= new Comun("P01", "Pollo", 25);
    Producto* p2= new Comun("P02", "Lechuga y tomates", 13);
    Producto* p3= new Comun("P03", "Pan ", 19);
    Producto* p4= new Menu("M01", "Chiivito", 105, 1);
    Producto* p5= new Menu("M02", "Sandwich Palta, Lechuga y tomates", 133, 1);
    mP->agregarProducto(p);
    mP->agregarProducto(p2);
    mP->agregarProducto(p3);
    mP->agregarProducto(p4);
    mP->agregarProducto(p5);
}