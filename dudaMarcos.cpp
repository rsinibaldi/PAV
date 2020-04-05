void IngresarViaje(){

  system("clear");
  cout <<"_____________________________________________________" <<endl;
  cout <<"======R E G I S T R O   D E   V I A J E S ==========="<< endl;
  cout <<"_____________________________________________________" <<endl;

  int ci, nroSerie;
  Usuario* usuarioviaje;
  DtFecha fechaViaje

  int duracionViaje, distanciaViaje;


  cout << endl << "CI del usuario: ";
  cin >> ci;
  try{
    existeUsuario(ci);
    cout << endl << "Nro Serie del vehiculo: ";
    cin >> nroSerie;
    existeVehiculo(nroSerie);

    cout << endl << "Duracion: ";
    cin >> duracionViaje;
    if (duracionViaje < 0)
      throw invalid_argument("ERROR! dia invalido.");

    cout << endl << "Distancia: ";
    cin >> distanciaViaje;
    if (distanciaViaje < 0)
      throw invalid_argument("ERROR! dia invalido.");

    cout << "Ingrese Fecha:" <<endl;
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
    fechaViaje = DtFecha(dia, mes, anio);
    usuarioviaje=obtenerUsuario(ci);
    if (fechaviaje < usuarioviaje->getUsuFechaIngreso())
      throw invalid_argument("ERROR! la fecha del viaje es anterior a la fecha del registro del usuario.");

      DtViajeBase viaje = new DtViajeBase(duracionViaje, distanciaViaje, fechaViaje)

      ingresarViaje(ci, nroSerie, viaje);
    }
  }catch(invalid_argument& e){
    cout << e.what() << endl;
    ingresarViaje(); //repite la solicitud de datos
  }
}
void ingresarViaje(int ci, int nrSerie, DtViajeBase& viaje){
  //ahora solo me falta convertir eso en un Viaje* para llamar a la funcion del usuario

}
