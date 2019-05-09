#include <iostream>
#include <stdlib.h>
#include "Polinomio.h"
using namespace std;

int main() {
Polinomio p;
  while(true){
    cout << " Escolha uma das opções a seguir:\n[ 0 ] Sair\n[ 1 ] Inserir um Monomio\n[ 2 ] Remover um Monomio\n[ 3 ] Calcular Polinomio\n[ 4 ] Imprimir Polinomio\n";
   int opcao;
    cin >> opcao;
    if(opcao == 0)
      break;
    else if(opcao == 1){
      float c;
      float e;
      cout << "Insira o valor do coeficiente: \n";
      cin >> c;
      cout << "Insira o valor do expoente: \n" ;
      cin >> e;
      if(p.verifica(e)==1){
        cout<<"Erro, não pode repetir os expoentes\n";
        break;
      }
      Monomio a(c,e);  
      p.insereFinal(a);
    }
    
    else if(opcao == 2){
      cout<<"Você deseja remover o polinomio:\n[ 1 ] Inicio\n[ 2 ] Final\n";
      int opc;
      cin>>opc;
      if (opc == 1)
      p.removeInicio();   
      if(opc == 2)
      p.removeFinal();  
    }
    else if(opcao == 3){
      cout<< "Digite o valor de x: \n";
      int x;
      cin>>x;
      cout<< "O valor deste polinomio é igual a "<<(p.calcula(x))<<"\n";
    }
    else if(opcao == 4){
      p.imprime();
    } 
 }
}
