#ifndef ENVIO_HPP
#define ENVIO_HPP
#include <iostream>
using namespace std;
//Se crea la clase envio
class Envio
{
  //Se asignan los atributos de la clase
  private:
    string nombre, direccion, ciudad, estado;
    int codigopostal;
    double costo;
  //Se asignan los metodos de la clase
  public:
    Envio();    
    Envio(string, string, string, string, int);
    
    void setnombre(string);
    void setdireccion(string);
    void setciudad(string);
    void setestado(string);
    void setcodigopostal(int);
    void setcosto(double costo);

    string getnombre();
    string getdireccion();
    string getciudad();
    string getestado();
    int getcodigopostal();
    double getcosto();
    
    double calculaCosto(double);
};
#endif