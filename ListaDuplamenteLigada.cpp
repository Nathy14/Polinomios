#include "ListaDuplamenteLigada.h"
#include <stdlib.h>
template<typename E>
ListaDuplamenteLigada<E>::ListaDuplamenteLigada(){
  cabeca=NULL;
  fim=NULL;
}
template<typename E>
ListaDuplamenteLigada<E>::~ListaDuplamenteLigada(){
  delete cabeca;
}

template<typename E>
bool ListaDuplamenteLigada<E>::vazia()const{
  return cabeca == NULL;
}

template<typename E>
const E& ListaDuplamenteLigada<E>::inicio()const{
  return cabeca -> elem;
}

template<typename E>
const E& ListaDuplamenteLigada<E>::final()const{
  return fim -> elem;
}

template<typename E>
void ListaDuplamenteLigada<E>::insereInicio(const E& e){
  if(vazia()){
    Dno<E> *aux = new Dno<E>();
    aux -> prev=NULL;
    aux -> elem=e;
    aux -> prox=NULL;
    cabeca =aux;
    fim = aux;
  }
else{
  Dno<E> *aux = new Dno<E>();
  aux -> prev=NULL;
  aux -> elem=e;
  aux -> prox=cabeca;
  cabeca -> prev=aux;
  cabeca =aux;
}
}

template<typename E>
void ListaDuplamenteLigada<E>::insereFinal(const E& e){
  if(vazia()){
    Dno<E> *aux = new Dno<E>();
    aux -> prev=NULL;
    aux -> elem=e;
    aux -> prox=cabeca;
    cabeca =aux;
    fim = aux;
  }
else{
  Dno<E> *aux = new Dno<E>();
  aux -> prev=fim;
  aux -> elem=e;
  aux -> prox=NULL;
  fim -> prox=aux;
  fim =aux;
}
}

template<typename E>
void ListaDuplamenteLigada<E>::removeInicio(){
  if(cabeca == fim){
    delete cabeca;
    cabeca=NULL;
    fim=NULL;
  }
  else{
    Dno<E> *aux=cabeca;
    cabeca=cabeca -> prox;
    cabeca -> prev = NULL;
    delete aux;
  }
}

template<typename E>
void ListaDuplamenteLigada<E>::removeFinal(){
  if(cabeca == fim){
    delete cabeca;
    cabeca=NULL;
    fim=NULL;
  }
  else{
    Dno<E> *aux=fim;
    fim=fim ->prev;
    fim -> prox = NULL;
    delete aux;
  }
}
