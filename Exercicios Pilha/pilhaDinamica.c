#include "pilhaDinamica.h"

void iniciaPilha(PilhaDinamica *p) {
  // adicione seu codigo aqui
  p->topo=NULL;
  p->tamanho=0;
}//iniciaPilha

bool estaVazia(PilhaDinamica *p) {
  // adicione seu codigo aqui
  return(p->tamanho == 0);
}//estaVazia

void empilha(Objeto obj, PilhaDinamica *p) {
  // adicione seu codigo aqui]
  // passo 1
   PtrNoPilha aux;
   // passo 2
   aux = (PtrNoPilha)malloc(sizeof(PtrNoPilha)); // criando caixinha
   //passo 3
   aux->obj = obj; //copia o valor p dentro do bloco
   //passo 4
   aux->proximo = p->topo; // Novo-proximo -> topo
   //passo 5
   p->topo = aux;     // topo -> novo
   //passo 6
   p->tamanho++;
}//empilha

void desempilha(PilhaDinamica *p, Objeto *obj) {
  if(!estaVazia(p)) {
    //passo 1
    PtrNoPilha aux;
    //passo 2
    aux = p->topo;
    //passo 3
    p->topo = aux->proximo; // pd->topo = pd->topo->prox;
    //passo 4 - desalocar a memoria
    free(aux);
    // passo 5 - decerementar a qtde da pilha
    p->tamanho--;
  }//ifzinho
  else printf("Pilhinha está vazia, adicione itens! \n" );
}//desempilha

int tamanhoPilha(PilhaDinamica *p) {
  // adicione seu codigo aqui
  printf("Tamanho da pilhinha é de %d\n", p->tamanho );
  return(p->tamanho);
}//tamanhoPilha

void topo(PilhaDinamica *p, Objeto *obj) {
  // adicione seu codigo aqui
  if(p->topo != NULL){
    printf("Topinho da pilhina é %d\n", p->topo->obj.chave );
  }//if
}//topo

void imprimePilha(PilhaDinamica *p) {
  // adicione seu codigo aqui
  PtrNoPilha ptrPilha;
  printf("Pilha = { " );
  for (ptrPilha = p->topo; ptrPilha !=NULL; ptrPilha = ptrPilha->proximo) {
    printf("%d, ", ptrPilha->obj);
  }//for
  printf("}\n");
}//imprimePilha
