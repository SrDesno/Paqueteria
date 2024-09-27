#include "Paquete.hpp"
#include "Sobre.hpp"

int main() {
  Envio package1("Armando Paredes Fuerte", "Avenida Pantanosa 896",
                 "El pantano de Shrek", "Muy Muy Lejano", 8795);
  std::cout << "El paquete es de " << package1.getnombre()
            << " Con direccion de " << package1.getdireccion() << " en "
            << package1.getciudad() << " en " << package1.getestado()
            << " con codigo postal " << package1.getcodigopostal() << std::endl;
  std::cout << "El precio de su envio es de: " << package1.calculaCosto(500)
            << std::endl;

  Paquete package2(24, 32, 12, 50, 45, "Armando Paredes Fuerte",
                   "Avenida Pantanosa 896", "El pantano de ShreaK",
                   "Muy Muy Lejano", 8795);
  std::cout << "El paquete es de " << package2.getnombre()
            << " Con direccion de " << package2.getdireccion() << " en "
            << package2.getciudad() << " en " << package2.getestado()
            << " con codigo postal " << package2.getcodigopostal() << std::endl;
  std::cout << "El paquete tiene unas medidas de: " << package2.getlargo()
            << "x" << package2.getancho()
            << "con una profundidad de: " << package2.getprof()
            << "y su peso es de: " << package2.getpeso() << endl
            << "El costo por kilogramo es de: " << package2.getcostoPK()
            << std::endl;
  std::cout << "El precio del paquete es de: " << package2.calulaCosto()
            << std::endl;

  Sobre package3("Armando Paredes Fuerte", "Avenida Pantanosa 896",
                 "El pantano de ShreaK", "Muy Muy Lejano", 8795, 30, 27, 40,
                 125);
  std::cout << "El paquete es de " << package3.getnombre()
            << " Con direccion de " << package3.getdireccion() << " en "
            << package3.getciudad() << " en " << package3.getestado()
            << " con codigo postal " << package3.getcodigopostal() << std::endl;
  std::cout << "El tamaño del sobre es de: " << package3.getLargo() << " x "
            << package3.getAncho() << endl
            << "Si las dimensiones son mas grandes que es estandar, se "
               "aplicara un cargo adicional de: "
            << package3.getCargoAdic() << std::endl;
  std::cout << package3.calculaCosto(27, 30, 125, 500) << std::endl;

  Sobre package4("Armando Paredes Fuerte", "Avenida Pantanosa 896",
                 "El pantano de ShreaK", "Muy Muy Lejano", 8795, 30, 12, 12,
                 34);
  std::cout << "El paquete es de " << package4.getnombre()
            << " Con direccion de " << package4.getdireccion() << " en "
            << package4.getciudad() << " en " << package4.getestado()
            << " con codigo postal " << package4.getcodigopostal() << std::endl;
  std::cout << "El tamaño del sobre es de: " << package4.getLargo() << " x "
            << package4.getAncho() << endl
            << "Si las dimensiones son mas grandes que es estandar, se "
               "aplicara un cargo adicional de: "
            << package4.getCargoAdic() << std::endl;
  std::cout << package4.calculaCosto(12, 12, 34, 128) << std::endl;
}
