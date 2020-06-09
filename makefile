main: Fabrica.o ControladorAgregarProducto.o ControladorAltaProducto.o ControladorBajaProducto.o ControladorFacturacion.o ControladorIniciarVenta.o ControladorQuitarProducto.o ManejadorEmpleado.o ManejadorMesa.o ManejadorProducto.o ManejadorVenta.o Empleado.o Comun.o Producto.o ProductoMenu.o VentaLocal.o DtFactura.o DtFacturaLocal.o DtFecha.o DtProducto.o DtProductoBase.o DtProductoCantidad.o DtProductoFactura.o
	g++ main.cpp -o obligatorio Fabrica.o ControladorAgregarProducto.o ControladorAltaProducto.o ControladorBajaProducto.o ControladorFacturacion.o ControladorIniciarVenta.o ControladorQuitarProducto.o ManejadorEmpleado.o ManejadorMesa.o ManejadorProducto.o ManejadorVenta.o Empleado.o Comun.o Producto.o ProductoMenu.o VentaLocal.o DtFactura.o DtFacturaLocal.o DtFecha.o DtProducto.o DtProductoBase.o DtProductoCantidad.o DtProductoFactura.o
#FABRICA
Fabrica.o: Fabrica.cpp Fabrica.h
	g++ -c Fabrica.cpp -o Fabrica.o
#CONTROLADORES
ControladorAgregarProducto.o: Clases/Controladores/ControladorAgregarProducto.cpp Clases/Controladores/ControladorAgregarProducto.h
	g++ -c Clases/Controladores/ControladorAgregarProducto.cpp -o ControladorAgregarProducto.o
ControladorAltaProducto.o: Clases/Controladores/ControladorAltaProducto.cpp Clases/Controladores/ControladorAltaProducto.h
	g++ -c Clases/Controladores/ControladorAltaProducto.cpp -o ControladorAltaProducto.o
ControladorBajaProducto.o: Clases/Controladores/ControladorBajaProducto.cpp Clases/Controladores/ControladorBajaProducto.h
	g++ -c Clases/Controladores/ControladorBajaProducto.cpp -o ControladorBajaProducto.o
ControladorFacturacion.o: Clases/Controladores/ControladorFacturacion.cpp Clases/Controladores/ControladorFacturacion.h
	g++ -c Clases/Controladores/ControladorFacturacion.cpp -o ControladorFacturacion.o
ControladorIniciarVenta.o: Clases/Controladores/ControladorIniciarVenta.cpp Clases/Controladores/ControladorIniciarVenta.h
	g++ -c Clases/Controladores/ControladorIniciarVenta.cpp -o ControladorIniciarVenta.o
ControladorQuitarProducto.o: Clases/Controladores/ControladorQuitarProducto.cpp Clases/Controladores/ControladorQuitarProducto.h
	g++ -c Clases/Controladores/ControladorQuitarProducto.cpp -o ControladorQuitarProducto.o
#MANEJADORES
ManejadorEmpleado.o: Clases/Manejadores/ManejadorEmpleado.cpp Clases/Manejadores/ManejadorEmpleado.h
	g++ -c Clases/Manejadores/ManejadorEmpleado.cpp -o ManejadorEmpleado.o
ManejadorMesa.o: Clases/Manejadores/ManejadorMesa.cpp Clases/Manejadores/ManejadorMesa.h
	g++ -c Clases/Manejadores/ManejadorMesa.cpp -o ManejadorMesa.o
ManejadorProducto.o: Clases/Manejadores/ManejadorProducto.cpp Clases/Manejadores/ManejadorProducto.h
	g++ -c Clases/Manejadores/ManejadorProducto.cpp -o ManejadorProducto.o
ManejadorVenta.o: Clases/Manejadores/ManejadorVenta.cpp Clases/Manejadores/ManejadorVenta.h
	g++ -c Clases/Manejadores/ManejadorVenta.cpp -o ManejadorVenta.o
#CLASES
Empleado.o: Clases/Objetos/Empleado.cpp Clases/Objetos/Empleado.h
	g++ -c Clases/Objetos/Empleado.cpp -o Empleado.o
Comun.o: Clases/Objetos/Comun.cpp Clases/Objetos/Comun.h Clases/Objetos/Producto.cpp Clases/Objetos/Producto.h
	g++ -c Clases/Objetos/Comun.cpp -o Comun.o
Producto.o: Clases/Objetos/Producto.cpp Clases/Objetos/Producto.h
	g++ -c Clases/Objetos/Producto.cpp -o Producto.o
ProductoMenu.o: Clases/Objetos/ProductoMenu.cpp Clases/Objetos/ProductoMenu.h
	g++ -c Clases/Objetos/ProductoMenu.cpp -o ProductoMenu.o
VentaLocal.o: Clases/Objetos/VentaLocal.cpp Clases/Objetos/VentaLocal.h
	g++ -c Clases/Objetos/VentaLocal.cpp -o VentaLocal.o
#DATATYPES
DtFactura.o: Clases/DataTypes/DtFactura.cpp Clases/DataTypes/DtFactura.h
	g++ -c Clases/DataTypes/DtFactura.cpp -o DtFactura.o
DtFacturaLocal.o: Clases/DataTypes/DtFacturaLocal.cpp Clases/DataTypes/DtFacturaLocal.h
	g++ -c Clases/DataTypes/DtFacturaLocal.cpp -o DtFacturaLocal.o
DtFecha.o: Clases/DataTypes/DtFecha.cpp Clases/DataTypes/DtFecha.h
	g++ -c Clases/DataTypes/DtFecha.cpp -o DtFecha.o
DtProducto.o: Clases/DataTypes/DtProducto.cpp Clases/DataTypes/DtProducto.h
	g++ -c Clases/DataTypes/DtProducto.cpp -o DtProducto.o
DtProductoBase.o: Clases/DataTypes/DtProductoBase.cpp Clases/DataTypes/DtProductoBase.h
	g++ -c Clases/DataTypes/DtProductoBase.cpp -o DtProductoBase.o
DtProductoCantidad.o: Clases/DataTypes/DtProductoCantidad.cpp Clases/DataTypes/DtProductoCantidad.h
	g++ -c Clases/DataTypes/DtProductoCantidad.cpp -o DtProductoCantidad.o
DtProductoFactura.o: Clases/DataTypes/DtProductoFactura.cpp Clases/DataTypes/DtProductoFactura.h
	g++ -c Clases/DataTypes/DtProductoFactura.cpp -o DtProductoFactura.o

clean:
	rm *.o
	clear