#include "Polinomio.h"
#include <stdlib.h>
#include <math.h>
#include <iostream>

Polinomio::Polinomio():ListaDuplamenteLigada(){}

Polinomio::~Polinomio(){}

int Polinomio::verifica(float e){
  Dno<Monomio> *aux=cabeca;
  while(aux!=NULL){
    if(aux->elem.getExpoente() == e)
      return 1;
    else
      aux=aux->prox;
  }
  return 0;
}

void Polinomio::imprime(){
  Dno<Monomio> *aux=cabeca;
  while(aux!=NULL){
    std::cout<<(aux->elem.getCoeficiente())<<"x^"<<(aux->elem.getExpoente())<<" ";
    aux= aux->prox;
  }
}

float Polinomio::calcula(float x){
  Dno<Monomio> *aux=cabeca;
  float soma;
  while(aux!=NULL){
     soma = soma + pow((aux->elem.getCoeficiente()*x),aux->elem.getExpoente());
     aux= aux->prox;
  }
  return soma;
}

