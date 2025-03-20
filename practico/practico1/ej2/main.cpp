#include <iostream>
#include "include/Punto.h"
#include "include/Segmento.h"


int main() {
  // creo un segmento
  Punto p1(5.0,2.0), p2(2.7, 3.4);
  Segmento s1(p1), s2(p1, p2);

  // demostracion en consola
  std::cout << "1> Los puntos creados son: (" << p1.getX() << ", " << p1.getY() << ") y (" << p2.getX() << ", " << p2.getY() << ")" << std::endl;
  std::cout << "2> El largo del segmento 1 es: " << s1.largo() << std::endl;
  std::cout << "3> El largo del segmento 2 es: " << s2.largo();

  return 0;
}