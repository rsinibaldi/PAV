main: Monopatin.o Usuario.o Vehiculo.o Viaje.o DtBicicleta.o DtFecha.o DtMonopatin.o DtVehiculo.o
	g++ main.cpp -o obligatorio Monopatin.o Usuario.o Vehiculo.o Viaje.o DtBicicleta.o DtFecha.o DtMonopatin.o DtVehiculo.o
#clases
Monopatin.o: clases/Monopatin.cpp clases/Monopatin.h clases/Vehiculo.cpp clases/Vehiculo.h clases/Viaje.cpp clases/Viaje.h
	g++ -c clases/Monopatin.cpp -o Monopatin.o
Usuario.o: clases/Usuario.cpp clases/Usuario.h
	g++ -c clases/Usuario.cpp -o Usuario.o
Vehiculo.o: clases/Vehiculo.cpp clases/Vehiculo.h 
	g++ -c clases/Vehiculo.cpp -o Vehiculo.o
Viaje.o: clases/Viaje.cpp clases/Viaje.h clases/Usuario.cpp clases/Usuario.h
#dtTypes
	g++ -c clases/Viaje.cpp -o Viaje.o
DtBicicleta.o: dtTypes/DtBicicleta.cpp dtTypes/DtBicicleta.h enum/TipoBici.h g++ -c dtTypes/DtBicicleta.cpp -o DtBicicleta.o
DtFecha.o: dtTypes/DtFecha.cpp dtTypes/DtFecha.h
	g++ -c dtTypes/DtFecha.cpp -o DtFecha.o
DtMonopatin.o: dtTypes/DtMonopatin.cpp dtTypes/DtMonopatin.h
	g++ -c dtTypes/DtMonopatin.cpp -o DtMonopatin.o
DtVehiculo.o: dtTypes/DtVehiculo.cpp dtTypes/DtVehiculo.h
	g++ -c dtTypes/DtVehiculo.cpp -p DtVehiculo.o
