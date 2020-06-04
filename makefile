main: Comun.o Producto.o Empleado.o VentaLocal.o DtFactura.o DtFecha.o DtProducto.o DtProductoBase.o DtProductoCantidad.o DtProductoFactura.o
	g++ main.cpp -o obligatorio Comun.o Producto.o Empleado.o VentaLocal.o DtFactura.o DtFecha.o DtProducto.o DtProductoBase.o DtProductoCantidad.o DtProductoFactura.o
#CLASES
Comun.o: clases/Comun.cpp clases/Comun.h clases/Producto.cpp clases/Producto.h
	g++ -c clases/Comun.cpp -o Comun.o
Producto.o: clases/Producto.cpp clases/Producto.h
	g++ -c clases/Producto.cpp -o Producto.o
Empleado.o: clases/Empleado.cpp clases/Empleado.h
	g++ -c clases/Empleado.cpp -o Empleado.o
VentaLocal.o: clases/VentaLocal.cpp clases/VentaLocal.h
	g++ -c clases/VentaLocal.cpp -o VentaLocal.o
	#DATATYPES
DtFactura.o: DataTypes/DtFactura.cpp DataTypes/DtFactura.h
	g++ -c DataTypes/DtFactura.cpp -o DtFactura.o
DtFecha.o: DataTypes/DtFecha.cpp DataTypes/DtFecha.h
	g++ -c DataTypes/DtFecha.cpp -o DtFecha.o
DtProducto.o: DataTypes/DtProducto.cpp DataTypes/DtProducto.h
	g++ -c DataTypes/DtProducto.cpp -o DtProducto.o
DtProductoBase.o: DataTypes/DtProductoBase.cpp DataTypes/DtProductoBase.h
	g++ -c DataTypes/DtProductoBase.cpp -o DtProductoBase.o
DtProductoCantidad.o: DataTypes/DtProductoCantidad.cpp DataTypes/DtProductoCantidad.h
	g++ -c DataTypes/DtProductoCantidad.cpp -o DtProductoCantidad.o
DtProductoFactura.o:	DataTypes/DtProductoFactura.cpp DataTypes/DtProductoFactura.h
	g++ -c DataTypes/DtProductoFactura.cpp -o DtProductoFactura.o


clean:
	rn -rf *o main
