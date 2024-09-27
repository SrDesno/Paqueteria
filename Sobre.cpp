#include "Sobre.hpp"
#include <iostream>

Sobre::Sobre() : Envio() {
  largo = 0;
  ancho = 0;
  cargoAdic = 0;
  costoTotal = 0;
}
Sobre::Sobre(string nom, string dire, string ciud, string estad, int cod,
             double costoTotal, int largo, int ancho, int cargoAdic)
    : Envio(nom, dire, ciud, estad, cod) {
  this->largo = largo;
  this->ancho = ancho;
  this->costoTotal = costoTotal;
  this->cargoAdic = cargoAdic;
}
void Sobre::setLargo(int largo) { this->largo = largo; }
int Sobre::getLargo() { return largo; }
void Sobre::setAncho(int ancho) { this->ancho = ancho; }
int Sobre::getAncho() { return ancho; }
void Sobre::setCargoAdic(int cargoAdic) { this->cargoAdic = cargoAdic; }
int Sobre::getCargoAdic() { return cargoAdic; }
void ::Sobre::setCostoTotal(int costoTotal) { this->costoTotal = costoTotal; }
double Sobre::getCostoTotal() { return costoTotal; }

double Sobre::calculaCosto(int largo, int ancho, int cargo, double costo) {
  setcosto(costo);
  setCargoAdic(cargo);
  if (largo > 25 || ancho > 30) {
    std::cout << "Se aplico un cargo de: " << getCargoAdic() << std::endl;
    std::cout << "El precio total es de: ";
    costoTotal = getcosto() + getCargoAdic();
  } else {
    costoTotal = getcosto();
  }
  return costoTotal;
}