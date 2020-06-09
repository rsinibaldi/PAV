#ifndef Mesa_H
#define Mesa_H

class Mesa{

  private:
      int numero;

  public:
      //Constructores
      Mesa();
      Mesa(int);

      //Getters & Setters

      //Destructores
      ~Mesa();

      //Métodos
      bool tieneVenta();
      agregarProducto(DtProductoCantidad);
      DtProducot listarProductos();//: Set(DtProducot)
      quitarProducto(DtProductoCantidad);

};

#endif //Mesa_H
