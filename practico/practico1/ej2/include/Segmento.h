// DEFINICIÓN de la clase Segmento

#ifndef SEGMENTO
#define SEGMENTO

#include "Punto.h"

class Segmento {
  private:
    Punto p1, p2;
  public:
    Segmento(Punto p); // constructor de un solo parámetro
    Segmento(Punto p1, Punto p2); // constructor de dos parámetros
    float largo();

};

#endif