#include "pilhaDinamica.h"
#include "pilhaDinamica.c"

int main(){
  PilhaDinamica p;
  Objeto obj;

  obj.chave=30;

  iniciaPilha(&p);
  estaVazia(&p);

  for (int i = 0; i < 10; i++) {
    empilha(obj, &p);
    obj.chave++;
  }//for empilha

  imprimePilha(&p);
  tamanhoPilha(&p);
  topo(&p, &obj);

  for (int i = 0; i < 3; i++) {
    desempilha(&p, &obj);
  }//for desempilha

  imprimePilha(&p);
  tamanhoPilha(&p);
  topo(&p, &obj);

}//mainzinha poderosa
