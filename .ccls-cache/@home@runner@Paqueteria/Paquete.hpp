#ifndef PAQUETE_HPP
#define PAQUETE_HPP
#include "Envio.hpp"
class Paquete: public Envio
{
    private:
      int largo;
      int ancho;
      int prof;
      int peso;
      int costPk;
        
    public:
      Paquete();
      Paquete(int _largo, int _ancho, int _prof, int  _peso, int _costPk,string _nombre, string _direccion, string _ciudad, string _estado, int _codigopostal);

      double calulaCosto();

      void setlargo(int);
      void setancho(int);
      void setprof(int);
      void setpeso (int);
      void setcostoPK (int);

      int getlargo();
      int getancho();
      int getprof();
      int getpeso();
      int getcostoPK();

};
#endif