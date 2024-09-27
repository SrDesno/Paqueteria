#ifndef SOBRE_HPP
#define SOBRE_HPP
#include "Envio.hpp"
class Sobre:public Envio
{
  private:
    int largo;
    int ancho;
    int cargoAdic;
    double costoTotal;

  public:
    Sobre();
    Sobre(string nom, string dire,string ciud,string estad,int cod,double costoTotal,int largo, int ancho, int cargoAdic);
    void setLargo(int largo);
    int getLargo();
    void setAncho(int ancho);
    int getAncho();
    void setCargoAdic(int cargoAdic);  
    int getCargoAdic();
    void setCostoTotal(int costoTotal);
    double getCostoTotal();

    double calculaCosto(int largo, int ancho,int cargo,double costo);

};
#endif