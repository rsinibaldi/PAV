principal:DtFecha.o viaje.o usuario.o
	g++ DtFecha.o viaje.o usuario.o -o grin

DtFecha.o: DtFecha.cpp

usuario.o: usuario.cpp

viaje.o: viaje.cpp

clean:
	rm -f *.o
