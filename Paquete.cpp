#include "Paquete.hpp"

Paquete::Paquete():Envio(){
}

Paquete::Paquete(int _largo, int _ancho, int _prof, int _peso, int _costPk,string _nombre, string _direccion, string _ciudad,string _estado, int _codigopostal): Envio(_nombre, _direccion, _ciudad, _estado, _codigopostal) {
  largo = _largo;
  ancho = _ancho;
  prof = _prof;
  peso = _peso;
  costPk = _costPk;
}
double Paquete::calulaCosto(){
  return ((peso*costPk)+getcosto());
}

void Paquete::setlargo(int _largo) { largo = _largo; }
void Paquete::setancho(int _ancho) { ancho = _ancho; }
void Paquete::setprof(int _prof) { prof = _prof; }
void Paquete::setpeso(int _peso) { peso = _peso; }
void Paquete::setcostoPK(int _costPk) { costPk = _costPk; }
int Paquete::getlargo() { return largo; }
int Paquete::getancho() { return ancho; }
int Paquete::getprof() { return prof; }
int Paquete::getpeso() { return peso; }
int Paquete::getcostoPK() { return costPk; }