#ifndef DNO_H
#define DNO_H

class Polinomio;

template <typename E>
class ListaDuplamenteLigada;

template <typename E>
class Dno{
  private:
    E elem;
    Dno<E>* prox;
    Dno<E>*prev;
    char sinal;
    friend class ListaDuplamenteLigada<E>;
    friend class Polinomio;
};
#endif
