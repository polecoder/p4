// DEFINICIÓN de la clase Punto

#ifndef PUNTO
#define PUNTO

class Punto {
  private:
    float x, y;
  public:
    Punto(float x = 0.0, float y = 0.0); // constructor con parámetros por defecto
    // setters
    void setX(float x);
    void setY(float y);
    // getters
    float getX();
    float getY();
};

#endif