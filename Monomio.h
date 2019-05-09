#ifndef MONOMIO_H
#define MONOMIO_H

class Monomio{
  private:
    float coeficiente;
    float expoente;
  public:
    Monomio(float c, float e);
    Monomio();
    ~Monomio();
    float getCoeficiente();
    float getExpoente();
};
#endif
