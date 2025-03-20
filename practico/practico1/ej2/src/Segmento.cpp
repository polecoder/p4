// IMPLEMENTACIÓN de la clase Segmento
#include "../include/Segmento.h"
#include <cmath>

// constructores
Segmento::Segmento(Punto p) {
  this->p1 = p;
  this->p2 = p;
}

Segmento::Segmento(Punto p1, Punto p2) {
  this->p1 = p1;
  this->p2 = p2;
}

// metodos
float Segmento::largo() {
  float x1 = this->p1.getX();
  float y1 = this->p1.getY();
  float x2 = this->p2.getX();
  float y2 = this->p2.getY();
  return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}