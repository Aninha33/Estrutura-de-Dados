#include "pilhaEstatica.h"
#include "pilhaEstatica.c"

int main(){
  pilhaEstatica pilha;
  Objeto objeto;

  objeto.chave=300;

  iniciaPilha(&pilha);
  estaVazia(&pilha);

  for (int i = 0; i < MAXTAM; i++) {
    empilha(objeto, &pilha);
    objeto.chave++;
  }//for

  imprimePilha(&pilha);
  tamanhoPilha(&pilha);


}//mainzinha poderosa
