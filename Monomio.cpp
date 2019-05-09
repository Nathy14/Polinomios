#include "Monomio.h"

Monomio::Monomio(float c, float e){
  coeficiente = c;
  expoente = e;
}

Monomio::Monomio(){}

Monomio::~Monomio(){}

float Monomio::getCoeficiente(){
  return coeficiente;
}

float Monomio::getExpoente(){
  return expoente;
}


