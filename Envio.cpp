#include "Envio.hpp"

Envio::Envio() {}
Envio::Envio(string _nombre, string _direccion, string _ciudad, string _estado,
             int _codigopostal) {
  nombre = _nombre;
  direccion = _direccion;
  ciudad = _ciudad;
  estado = _estado;
  codigopostal = _codigopostal;
}

double Envio::calculaCosto(double costo) { this->costo = costo; }

void Envio::setnombre(string _nombre) { nombre = _nombre; }
void Envio::setdireccion(string _direccion) { direccion = _direccion; }
void Envio::setciudad(string _ciudad) { ciudad = _ciudad; }
void Envio::setestado(string _estado) { estado = _estado; }
void Envio::setcodigopostal(int _codigopostal) { codigopostal = _codigopostal; }
void Envio::setcosto(double costo) { costo = 500; }

string Envio::getnombre() { return nombre; }
string Envio::getdireccion() { return direccion; }
string Envio::getciudad() { return ciudad; }
string Envio::getestado() { return estado; }
int Envio::getcodigopostal() { return codigopostal; }
double Envio::getcosto() { return costo; }