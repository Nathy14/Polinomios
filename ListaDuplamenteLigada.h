#ifndef LISTADUPLAMENTELIGADA_H
#define LISTADUPLAMENTELIGADA_H
#include "Dno.h"

class Polinomio;

template<typename E>
class ListaDuplamenteLigada{
  private:
   Dno<E>* cabeca;
   Dno<E>* fim;
  public:
    ListaDuplamenteLigada();
    ~ListaDuplamenteLigada();
    bool vazia()const;
    const E& inicio()const;
    const E& final()const;
    void insereInicio(const E& e);
    void insereFinal(const E& e);
    void removeInicio();
    void removeFinal();
    friend class Polinomio;
};
#endif
