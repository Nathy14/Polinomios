#ifndef POLINOMIO_H
#define POLINOMIO_H
#include "ListaDuplamenteLigada.cpp"
#include "Monomio.h"

class Polinomio:public ListaDuplamenteLigada<Monomio>{
  public:
    Polinomio();
    ~Polinomio();
    void imprime();
    int verifica(float e);
    float calcula(float x);
};
#endif
