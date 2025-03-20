// IMPLEMENTACIÓN de la clase Punto
#include "../include/Punto.h"

// constructor
Punto::Punto(float x, float y) {
  this->x = x;
  this->y = y;
}

// setters
void Punto::setX(float x) {
  this->x = x;
}

void Punto::setY(float y) {
  this->y = y;
}

// getters
float Punto::getX() {
  return this->x;
}

float Punto::getY() {
  return this->y;
}